#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <locale.h>

//#include "banco_letras.h"

#define MAXP 6
#define MAXMODES 2
#define MAXSTR 200
#define MAXR 2
#define MAXALF 26

int const MainButton = 7;
int const ModeSelect = 6;

typedef struct {
   int pino[MAXP];
   char letra;
} LETRAS;

char buscaLetra (int checkpinos [], LETRAS alfabeto []) {
    int res, i, j;

    for(i = 0; i < MAXALF; i++) {
        for (res = j = 0; j < MAXP; j++) {
            if(checkpinos[j] == alfabeto[i].pino[j]) res = 1;
            else break;
            // se ele nao for igual ja saio da repeticao de pinos (j)

            // se o j estiver na ultima posicao e o res==1 retorno a letra
            // senao so continuo a contagem para proxima letra
            if(j == 5 && res) return alfabeto[i].letra;
            
        }
    }
    printf("deu break\n");
    return '\0'; // se ele passar todas as letras e nao encontrar nenhuma retorno nao encontrado
}


void inicializa_letras (LETRAS alfabeto[])
{
    
    int i, j;
    int aux [26][6] = {{1,0,0,0,0,0},       //a
                       {1,1,0,0,0,0},       //b
                       {1,0,0,1,0,0},       //c
                       {1,0,0,1,1,0},       //d
                       {1,0,0,0,1,0},       //e
                       {1,1,0,1,0,0},       //f
                       {1,1,0,1,1,0},       //g
                       {1,1,0,0,5,0},       //h
                       {0,1,0,1,0,0},       //i
                       {0,1,0,1,1,0},       //j
                       {1,0,1,0,0,0},       //k
                       {1,1,1,0,0,0},       //l
                       {1,0,1,1,0,0},       //m
                       {1,0,1,1,1,0},       //n
                       {1,0,1,0,1,0},       //o
                       {1,1,1,1,0,0},       //p
                       {1,1,1,1,1,0},       //q
                       {1,1,1,0,1,0},       //r
                       {0,1,1,1,0,0},       //s
                       {0,1,1,1,1,0},       //t
                       {1,0,1,0,0,1},       //u
                       {1,1,1,0,0,1},       //v
                       {0,1,0,1,1,1},       //w
                       {1,0,1,1,0,1},       //x
                       {1,0,1,1,1,1},       //y
                       {1,0,1,0,1,0}};      //z

    for (i = 0; i < 26; i++) {
        for (j = 0; j < 6; j++) {
            alfabeto[i].pino[j] = aux[i][j];
            alfabeto[i].letra = 'a' + i;
        }
    }
}

void inicializar (LETRAS alfabeto[])
{
    int i;
    wiringPiSetup ();

    //puxa banca de dados
    inicializa_letras (alfabeto);

    //configurando pinos de entrada e saida
    for (i = 0; i <= 7; i++) {
        pinMode (i, INPUT);
        pullUpDnControl (i, PUD_UP);
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
    for (i = 0; i < 6; i++)
        checkpinos[i] = checarbotao (i);
}

/***
        0 - Modo livre
        1 - Modo atividade
***/

void ExecutarAudio (char * nome_aud)
{
    /// strcat so aceita string
    
    /// extensao
    char mp3[7] = ".mp3 &";
    /// comando
    char str[MAXSTR] = "omxplayer -o local /home/pi/Desktop/Projeto-ICC-master/Audios/";

    /// concatena as strings - strcat()
    strcat(str, nome_aud);
    strcat(str, mp3);

    puts(str);

    ///Executa
    system(str);
}


int ModoLivre (LETRAS alfabeto [])
{
    int i, checkpinos[MAXP] = {0}; //{0,1,0,0,0,0};
     char ret[MAXR] = {' ','\0'};

    printf ("\n\nModo livre\n\n");

    ExecutarAudio("0");
    delay (1500);
    ExecutarAudio("ativo");
    delay (400);

    ///ativa todos os pinos, somente enquanto o botao principal estiver sendo pressionado
    while (TRUE) {
        if (digitalRead (ModeSelect) == LOW) {
            ExecutarAudio("encerrandoatividade");
            delay (2000);
            return 0;
        }
        if(digitalRead (MainButton) == LOW) {
            checarpinos (checkpinos);
            ret[0] = buscaLetra (checkpinos, alfabeto);
            for (i = 0; i < 6; i++)
                printf ("pino %d: %d\n", i, checkpinos[i]);

            if (!ret[0]){
                ///printf ("\n\nErro ao buscar letra na biblioteca!!");
                //ExecutarAudio ("errobuscaletra");
                ExecutarAudio("letranaoexiste");
                delay (2000);

            }else {
                printf ("\nLetra encontrada: %c\n\n", ret[0]);
                ExecutarAudio (ret);
                delay (200);
            }
<<<<<<< HEAD
=======
            delay(300);
>>>>>>> 62846d68c9b4e1770128d5c9d101002f92aaf2d3
        }
    }
    return 1;
}


void ModoAtividade (LETRAS alfabeto[])
{
    int i, checkpinos[MAXP];
    char randletra[MAXR] = {' ','\0'}, ret = ' ';

    printf ("\n\nModo Atividade\n\n");
    
    ExecutarAudio("1");
    delay (2000);
    ExecutarAudio("ativo");
    delay (400);
    ///Randomiza letra
    randletra[0] = rand() % 26 + 97;
    
    printf("\nColoque os pinos correspondentes a letra: %s\n\n", randletra);
    ExecutarAudio("coloqueospinos");
    delay (2000);
    ExecutarAudio(randletra);
    delay(200);

    ///ativa todos os pinos, somente enquanto o botao principal estiver sendo pressionado
    while (TRUE)
    {
        if (digitalRead (ModeSelect) == LOW) {
            ExecutarAudio("encerrandoatividade");
            delay (2000);
            break;
        }
        if (digitalRead(MainButton) == LOW)
        {
            checarpinos (checkpinos);
            ret = buscaLetra(checkpinos, alfabeto);

            for (i = 0; i < 6; i++)
                printf("pino %d: %d\n", i, checkpinos[i]);

            if (randletra[0] == ret) {
                printf("\nLetra encontrada: %c\n", ret);
                printf("Voce acertou\n\n");
                ExecutarAudio("voceacertou");
                delay(1000);
            }
            else {
                printf("\nLetra encontrada: %c\n", ret);
                printf("Voce errou a letra!!\n\n");
                ExecutarAudio("voceerrou");
                delay (2000);
            }
            randletra[0] = rand() % 26 + 97;

            printf("\nColoque os pinos correspondentes a letra: %s\n\n", randletra);
            ExecutarAudio("coloqueospinos");
            delay (3000);
            ExecutarAudio(randletra);
            delay(300);
        }
    }
}

int main()
{
    int modenum = 0;
    LETRAS alfabeto [MAXALF];
    
    setlocale(LC_ALL, "pt_BR_utf8");
    srand (time (NULL));
    inicializar (alfabeto);
    
    while (TRUE) {
        modenum = (modenum % 2);
        printf ("%d\n", modenum);

        if (modenum == 0) ModoLivre (alfabeto);
        if (modenum == 1) ModoAtividade (alfabeto);
        modenum++;
    }
    return 0;
}
