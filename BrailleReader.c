#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "banco_letras.h"

#define MAXP 7
#define MAXMODES 2

int const MainButton = 7;
int const ModeSelect = 6;

void inicializar ()
{
    int i;
    wiringPiSetup();

    //puxa banca de dados
    inicializa_letras();

    //configurando pinos de entrada e saida
    for (i = 1; i <= 7; i++) {
        pinMode(i, INPUT);
        pullUpDnControl(i, PUD_UP);
    }
}

int checarbotao (int botao)
{
    if (digitalRead (botao) == LOW) return 1;
    else return 0;
}

void checarpinos (int checkpinos[])
{
    int i;
    for (i = 1; i <= 6; i++)
        checkpinos [i] = checarbotao(i);
}

/***
        0 - voce errou a letra
        1 - voce acertou a letra
        3 - Coloque os pinos correspondentes a letra
        4 - Erro ao buscar letra na biblioteca
***/

void ExecutarAudio (char ret)
{
    /// strcat so aceita string
    char letra_ret[1];

    /// letra retornada
    letra_ret[0] = ret;
    letra_ret[1] = '\0';
    /// extensao
    char mp3[7] = ".mp3 &";
    /// comando
    char str[50] = "omxplayer -o hdmi /home/pi/Projeto/Audios/";

    /// concatena as strings - strcat()
    strcat(str,letra_ret);
    strcat(str, mp3);

    ///Executa
    system(str);

    /// apaga tudo
    strcpy(str,"");
    strcpy(mp3,"");
    strcpy(letra_ret,"");
}

void ModoLivre ()
{
    int i, checkpinos[MAXP] = {0};
    char ret = ' ';

    ///ativa todos os pinos, somente enquanto o botao principal estiver sendo pressionado
    while (TRUE) {
        if(digitalRead (MainButton) == LOW) {
            checarpinos (checkpinos);
            ret = buscaLetra (checkpinos);
            /*for (i = 1; i <= 6; i++)
                printf ("pino %d: %d\n", i, checkpinos[i]);
            */
            if (!ret)
                ///printf ("\n\nErro ao buscar letra na biblioteca!!\n\n");
                ExecutarAudio ('4');
                // vc errou a letra???
            else {
                ///printf ("\nLetra encontrada: %c\n\n", ret);
                ExecutarAudio (ret);
            }
            delay(300);
        }
    }
}


void ModoAtividade()
{
    int i, j, checkpinos[MAXP] = {0}; //{0,1,0,0,0,0,0}
    char randletra, ret = ' ';

    ///Randomiza letra
    randletra = rand() % 26 + 97;
   // printf("\nColoque os pinos correspondentes a letra: %c\n\n", randletra);
    ExecutarAudio('3');
    ExecutarAudio(randletra);
    delay(300);

    ///ativa todos os pinos, somente enquanto o botao principal estiver sendo pressionado
    while (TRUE)
    {
        if (digitalRead(MainButton) == LOW)
        {
            for (i = 0; i < 3; i++) {
                checarpinos(checkpinos);
                ret = buscaLetra(checkpinos);
               /* for (j = 0; j < 6; j++)
                    printf("pino %d: %d\n", j, checkpinos[j]);
                */
                if (randletra == ret)
                {
                    //printf("\nLetra encontrada: %c\n", ret);
                    //printf("Voce acertou\n\n");
                    ExecutarAudio('1');
                    delay(1000);
                    break;
                }
                else
                    //printf("\nLetra encontrada: %c\n", ret);
                    //printf("Voce errou a letra!!\n\n");
                    ExecutarAudio('0');
            }
            randletra = rand() % 26 + 97;
            //printf("\nColoque os pinos correspondentes a letra: %c\n\n", randletra);
            ExecutarAudio('3');
            ExecutarAudio(randletra);
            delay(300);
        }
    }
}

int main()
{
    int checkpinos [MAXP];
    int modenum = 0;

    srand (time(NULL));

    inicializar ();
    while (true) {
        if (digitalRead (ModeSelect) == LOW) ((modenum++) % MAXMODES);

        if (modenum == 0) ModoLivre (checkpinos);
        if (modenum == 1) ModoAtividade (checkpinos);
    }
    return 0;
}
