#include <stdio.h>
#include <conio.h> // para struct
#include <stdlib.h>
#include <locale.h>

#include "mystring.h"

//#include "C:\C_Progressivo\mystring.h"

// Estrutura de dados
//struct

struct letra
{
   int pino[7];
} letra[];
void inicializa_letras(){
    /* pino1-1 pino-2 */

    // ' '


    //a
    letra[1].pino[1]=1;

    //b
    letra[2].pino[1]=1;
    letra[2].pino[2]=1;

    //c
    letra[3].pino[1]=1;
    letra[3].pino[4]=1;

    //d
    letra[4].pino[1]=1;
    letra[4].pino[4]=1;
    letra[4].pino[5]=1;

    //e
    letra[5].pino[1]=1;
    letra[5].pino[5]=1;

    //f
    letra[6].pino[1]=1;
    letra[6].pino[2]=1;
    letra[6].pino[4]=1;

    //g
    letra[7].pino[1]=1;
    letra[7].pino[2]=1;
    letra[7].pino[4]=1;
    letra[7].pino[5]=1;

    //h
    letra[8].pino[1]=1;
    letra[8].pino[2]=1;
    letra[8].pino[5]=1;

    //i
    letra[9].pino[2]=1;
    letra[9].pino[4]=1;

    //j
    letra[10].pino[2]=1;
    letra[10].pino[4]=1;
    letra[10].pino[5]=1;

    //k
    letra[11].pino[1]=1;
    letra[11].pino[3]=1;

    //l
    letra[12].pino[1]=1;
    letra[12].pino[2]=1;
    letra[12].pino[3]=1;

    //m
    letra[13].pino[1]=1;
    letra[13].pino[3]=1;
    letra[13].pino[4]=1;

    //n
    letra[14].pino[1]=1;
    letra[14].pino[3]=1;
    letra[14].pino[4]=1;
    letra[14].pino[5]=1;

    //o
    letra[15].pino[1]=1;
    letra[15].pino[3]=1;
    letra[15].pino[5]=1;

    //p
    letra[16].pino[1]=1;
    letra[16].pino[2]=1;
    letra[16].pino[3]=1;
    letra[16].pino[4]=1;

    //q
    letra[17].pino[1]=1;
    letra[17].pino[2]=1;
    letra[17].pino[3]=1;
    letra[17].pino[4]=1;
    letra[17].pino[5]=1;

    //r
    letra[18].pino[1]=1;
    letra[18].pino[2]=1;
    letra[18].pino[3]=1;
    letra[18].pino[5]=1;

    //s
    letra[19].pino[2]=1;
    letra[19].pino[3]=1;
    letra[19].pino[4]=1;

    //t
    letra[20].pino[2]=1;
    letra[20].pino[3]=1;
    letra[20].pino[4]=1;
    letra[20].pino[5]=1;

    //u
    letra[21].pino[1]=1;
    letra[21].pino[3]=1;
    letra[21].pino[6]=1;

    //v
    letra[22].pino[1]=1;
    letra[22].pino[2]=1;
    letra[22].pino[3]=1;
    letra[22].pino[6]=1;

    //w
    letra[23].pino[2]=1;
    letra[23].pino[4]=1;
    letra[23].pino[5]=1;
    letra[23].pino[6]=1;

    //x
    letra[24].pino[1]=1;
    letra[24].pino[3]=1;
    letra[24].pino[4]=1;
    letra[24].pino[6]=1;

    //y
    letra[25].pino[1]=1;
    letra[25].pino[3]=1;
    letra[25].pino[4]=1;
    letra[25].pino[5]=1;
    letra[25].pino[6]=1;

    //z
    letra[26].pino[1]=1;
    letra[26].pino[3]=1;
    letra[26].pino[5]=1;
    letra[26].pino[6]=1;

    //ç
    letra[27].pino[1]=1;
    letra[27].pino[2]=1;
    letra[27].pino[3]=1;
    letra[27].pino[4]=1;
    letra[27].pino[6]=1;

    //á
    letra[28].pino[1]=1;
    letra[28].pino[2]=1;
    letra[28].pino[3]=1;
    letra[28].pino[5]=1;
    letra[28].pino[6]=1;

    //â
    letra[29].pino[1]=1;
    letra[29].pino[6]=1;

    //à
    letra[30].pino[1]=1;
    letra[30].pino[2]=1;
    letra[30].pino[4]=1;
    letra[30].pino[6]=1;

    //ã
    letra[31].pino[3]=1;
    letra[31].pino[4]=1;
    letra[31].pino[5]=1;

    //é
    letra[32].pino[1]=1;
    letra[32].pino[2]=1;
    letra[32].pino[3]=1;
    letra[32].pino[4]=1;
    letra[32].pino[5]=1;
    letra[32].pino[6]=1;

    //ê
    letra[33].pino[1]=1;
    letra[33].pino[2]=1;
    letra[33].pino[6]=1;

    //í
    letra[34].pino[3]=1;
    letra[34].pino[4]=1;

    //ï
    letra[35].pino[1]=1;
    letra[35].pino[2]=1;
    letra[35].pino[4]=1;
    letra[35].pino[5]=1;
    letra[35].pino[6]=1;

    //õ
    letra[36].pino[2]=1;
    letra[36].pino[4]=1;
    letra[36].pino[6]=1;

    //ó
    letra[37].pino[3]=1;
    letra[37].pino[4]=1;
    letra[37].pino[6]=1;

    //ô
    letra[38].pino[1]=1;
    letra[38].pino[4]=1;
    letra[38].pino[5]=1;
    letra[38].pino[6]=1;

    //ú
    letra[39].pino[2]=1;
    letra[39].pino[3]=1;
    letra[39].pino[4]=1;
    letra[39].pino[5]=1;
    letra[39].pino[6]=1;

    //*u
    letra[40].pino[1]=1;
    letra[40].pino[2]=1;
    letra[40].pino[5]=1;
    letra[40].pino[6]=1;

}
void file_write(){
    // Arquivo
    // gravando no arquivo
    int gravado; FILE *arquivo;
    arquivo = fopen("alfabeto.txt","wb");//wb - arquibo binario
    if (arquivo == NULL){
        printf("\nArquivo alfabeto.txt não pode ser aberto.\n");
        system("PAUSE");
    }else{
        gravado = fwrite (&letra, sizeof(struct letra), 40, arquivo);
        if(gravado != 40){
            printf("\nErro ao gravar no arquivo.\n");
            system("PAUSE");
        }
    }
    fclose(arquivo);
}
void file_read(){
    // lendo o arquivo
    FILE *arquivo;
    arquivo = fopen("alfabeto.txt","rb");
    if (arquivo == NULL){
        printf("\nErro na abertura do arquivo\n");
        system("PAUSE");
    }else{
        fread(&letra, sizeof(struct letra), 40, arquivo);
        int x,j;
        for(x=0;x<=40;x++){
                printf("\n\nPinos: \n");
                printf("\nP1 | P2 | P3 | P4 | P5 | P6 \n");
            for(j=1;j<=6;j++)
                printf("%d    ",letra[x].pino[j]);
            }
        }
    fclose(arquivo);
}
