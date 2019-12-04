#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//#include "C:\C_Progressivo\mystring.h"

/// Estrutura de dados
typedef struct {
   int pino[7];
   char letra;
} LETRAS;

void inicializa_letras()
{
    int i, j;
    int aux [40][7] = {{1,0,0,0,0,0},       //a
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


    LETRAS alfabeto [40];
    for (i = 0; i < 26; i++) {
        for (j = 0; j < 6; j++) {
            alfabeto[i].pino[j] = aux[i][j];
            alfabeto[i].letra = 'a' + i;
            //printf("%d", letra[i].pino[j]);
        }
        //printf(" - %d\n", i);
    }
}

char buscaLetra(int checkpinos[]){
    int res, i, j;
    char retorno = NULL;
    LETRAS letra[40];
    // i - contador para letras
    for(i = 0; i < 40; i++){
        // j - contador para os pinos das letras
        for (res = j = 0; j < 6; j++) {
            if(checkpinos[j] == letra[i].pino[j]) res=1;
            else break;
            // se ele nao for igual ja saio da repeticao de pinos (j)

            // se o j estiver na ultima posicao e o res==1 retorno a letra
            // senao so continuo a contagem para proxima letra
            if(j == 5 && res)
                return retorno = letra[i].letra;
        }
    }
    return retorno = '\0'; // se ele passar todas as letras e nao encontrar nenhuma retorno nao encontrado
}


