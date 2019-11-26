#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include "banco_letras.h"

#define MAXP 7

int const MainButton = 7;

void inicializar ()
{
    int i;
    wiringPiSetup();
    
    //puxa banca de dados
    inicializa_letras();
    file_write();
    
    //configurando entrada e saida pinos
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

void ExecutarAudio (char ret)
{
    // strcat so aceita string
    char letra_ret[1]; 
    letra_ret[0] = ret; // letra retornada
    char mp3[7] = ".mp3 &"; // extensao
    char str[50] = "omxplayer -o hdmi /home/pi/Projeto/Audios/"; // comando

    // concatena as strings - strcat()
    strcat(str,letra_ret);
    strcat(str, mp3);

    //Executa 
    system(str);

    // apaga tudo
    strcpy(str,"");
    strcpy(mp3,"");
    strcpy(letra_ret,"");
}
    
void ModoLivre ()
{
    int i, checkpinos[MAXP] = {0}; //{0,1,0,0,0,0,0}
    char ret = ' ';

    //ativa todos os pinos, somente enquanto o botao principal estiver sendo pressionado
    while (TRUE) {
        if(digitalRead (MainButton) == LOW) {
            checarpinos (checkpinos);
            
            ret = buscaLetra (checkpinos);
            for (i = 1; i <= 6; i++)
                printf ("pino %d: %d\n", i, checkpinos[i]);
            if (!ret)
                printf ("\n\nErro ao buscar letra na biblioteca!!\n\n");
            else {
                printf ("\nLetra encontrada: %c\n\n", ret);
                ExecutarAudio (ret);
            }
            delay(300);         
        }
    }
}


void ModoAtividade()
{
    int i, checkpinos[MAXP] = {0}; //{0,1,0,0,0,0,0}
    char randletra, ret = ' ';

    //Randomiza letra
    randletra = rand() % 26 + 97;
    printf("\nColoque os pinos correspondentes a letra: %c\n\n", randletra);
    ExecutarAudio(randletra);
    delay(300);

    //ativa todos os pinos, somente enquanto o botao principal estiver sendo pressionado
    while (TRUE)
    {
        if (digitalRead(MainButton) == LOW)
        {
            checarpinos(checkpinos);
            ret = buscaLetra(checkpinos);
            for (i = 1; i <= 6; i++)
                printf("pino %d: %d\n", i, checkpinos[i]);
            if (randletra == ret)
            {
                printf("\nLetra encontrada: %c\n", ret);
                printf("Voce acertou\n\n");
                ExecutarAudio(ret);
                delay(1000);
            }
            else
                printf("\nLetra encontrada: %c\n", ret);
                printf("Voce errou a letra!!\n\n");

            randletra = rand() % 26 + 97;
            printf("\nColoque os pinos correspondentes a letra: %c\n\n", randletra);
            ExecutarAudio(randletra);
            delay(300);
        }
    }
}

int main()
{
    int checkpinos [MAXP];

    srand (time(NULL));

    inicializar ();
    ModoLivre (checkpinos);
    ModoAtividade (checkpinos);
    
    return 0;
}






















