#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//#include "C:\C_Progressivo\mystring.h"

// Estrutura de dados
//struct

typedef struct {
   int pino[7];
   char letra;
} LETRA;

int main ()
{
    LETRA let [40];
    let[1].pino[0] = {0,1,0,0,0,0,0};
    printf("%d", let[1].pino[1]);
}