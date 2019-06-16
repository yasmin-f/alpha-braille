#include <stdio.h>
#include <conio.h> // para struct
#include <stdlib.h>
#include <locale.h>

//#include "C:\C_Progressivo\mystring.h"

// Estrutura de dados
//struct

struct letra
{
   int pino[7];
   char letra;
} letra[];

void inicializa_struct(){
    int i,j;
    for(i=0;i<=40;i++){
        for(j=0;j<=7;j++)
            letra[i].pino[j] = 0;
        letra[i].letra = ' ';
    }
}

void inicializa_letras(){
    setlocale(LC_ALL, "");

    inicializa_struct();

    /* pino1-1 pino-2 ...
    letra-' '*/

    //a
    letra[1].pino[1]=1;
    letra[1].letra='a';

    //b
    letra[2].pino[1]=1;
    letra[2].pino[2]=1;
    letra[2].letra='b';

    //c
    letra[3].pino[1]=1;
    letra[3].pino[4]=1;
    letra[3].letra='c';

    //d
    letra[4].pino[1]=1;
    letra[4].pino[4]=1;
    letra[4].pino[5]=1;
    letra[4].letra='d';

    //e
    letra[5].pino[1]=1;
    letra[5].pino[5]=1;
    letra[5].letra='e';

    //f
    letra[6].pino[1]=1;
    letra[6].pino[2]=1;
    letra[6].pino[4]=1;
    letra[6].letra='f';

    //g
    letra[7].pino[1]=1;
    letra[7].pino[2]=1;
    letra[7].pino[4]=1;
    letra[7].pino[5]=1;
    letra[7].letra='g';

    //h
    letra[8].pino[1]=1;
    letra[8].pino[2]=1;
    letra[8].pino[5]=1;
    letra[8].letra='h';

    //i
    letra[9].pino[2]=1;
    letra[9].pino[4]=1;
    letra[9].letra='i';

    //j
    letra[10].pino[2]=1;
    letra[10].pino[4]=1;
    letra[10].pino[5]=1;
    letra[10].letra='j';

    //k
    letra[11].pino[1]=1;
    letra[11].pino[3]=1;
    letra[11].letra='k';

    //l
    letra[12].pino[1]=1;
    letra[12].pino[2]=1;
    letra[12].pino[3]=1;
    letra[12].letra='l';

    //m
    letra[13].pino[1]=1;
    letra[13].pino[3]=1;
    letra[13].pino[4]=1;
    letra[13].letra='m';

    //n
    letra[14].pino[1]=1;
    letra[14].pino[3]=1;
    letra[14].pino[4]=1;
    letra[14].pino[5]=1;
    letra[14].letra='n';

    //o
    letra[15].pino[1]=1;
    letra[15].pino[3]=1;
    letra[15].pino[5]=1;
    letra[15].letra='o';

    //p
    letra[16].pino[1]=1;
    letra[16].pino[2]=1;
    letra[16].pino[3]=1;
    letra[16].pino[4]=1;
    letra[16].letra='p';

    //q
    letra[17].pino[1]=1;
    letra[17].pino[2]=1;
    letra[17].pino[3]=1;
    letra[17].pino[4]=1;
    letra[17].pino[5]=1;
    letra[17].letra='q';

    //r
    letra[18].pino[1]=1;
    letra[18].pino[2]=1;
    letra[18].pino[3]=1;
    letra[18].pino[5]=1;
    letra[18].letra='r';

    //s
    letra[19].pino[2]=1;
    letra[19].pino[3]=1;
    letra[19].pino[4]=1;
    letra[19].letra='s';

    //t
    letra[20].pino[2]=1;
    letra[20].pino[3]=1;
    letra[20].pino[4]=1;
    letra[20].pino[5]=1;
    letra[20].letra='t';

    //u
    letra[21].pino[1]=1;
    letra[21].pino[3]=1;
    letra[21].pino[6]=1;
    letra[21].letra='u';

    //v
    letra[22].pino[1]=1;
    letra[22].pino[2]=1;
    letra[22].pino[3]=1;
    letra[22].pino[6]=1;
    letra[22].letra='v';

    //w
    letra[23].pino[2]=1;
    letra[23].pino[4]=1;
    letra[23].pino[5]=1;
    letra[23].pino[6]=1;
    letra[23].letra='w';

    //x
    letra[24].pino[1]=1;
    letra[24].pino[3]=1;
    letra[24].pino[4]=1;
    letra[24].pino[6]=1;
    letra[24].letra='x';

    //y
    letra[25].pino[1]=1;
    letra[25].pino[3]=1;
    letra[25].pino[4]=1;
    letra[25].pino[5]=1;
    letra[25].pino[6]=1;
    letra[25].letra='y';

    //z
    letra[26].pino[1]=1;
    letra[26].pino[3]=1;
    letra[26].pino[5]=1;
    letra[26].pino[6]=1;
    letra[26].letra='z';

    //ç
    letra[27].pino[1]=1;
    letra[27].pino[2]=1;
    letra[27].pino[3]=1;
    letra[27].pino[4]=1;
    letra[27].pino[6]=1;
    letra[27].letra='ç';

    //á
    letra[28].pino[1]=1;
    letra[28].pino[2]=1;
    letra[28].pino[3]=1;
    letra[28].pino[5]=1;
    letra[28].pino[6]=1;
    letra[28].letra='á';

    //â
    letra[29].pino[1]=1;
    letra[29].pino[6]=1;
    letra[29].letra='â';

    //à
    letra[30].pino[1]=1;
    letra[30].pino[2]=1;
    letra[30].pino[4]=1;
    letra[30].pino[6]=1;
    letra[30].letra='à';

    //ã
    letra[31].pino[3]=1;
    letra[31].pino[4]=1;
    letra[31].pino[5]=1;
    letra[31].letra='ã';

    //é
    letra[32].pino[1]=1;
    letra[32].pino[2]=1;
    letra[32].pino[3]=1;
    letra[32].pino[4]=1;
    letra[32].pino[5]=1;
    letra[32].pino[6]=1;
    letra[32].letra='é';

    //ê
    letra[33].pino[1]=1;
    letra[33].pino[2]=1;
    letra[33].pino[6]=1;
    letra[33].letra='ê';

    //í
    letra[34].pino[3]=1;
    letra[34].pino[4]=1;
    letra[34].letra='í';

    //ï
    letra[35].pino[1]=1;
    letra[35].pino[2]=1;
    letra[35].pino[4]=1;
    letra[35].pino[5]=1;
    letra[35].pino[6]=1;
    letra[35].letra='ï';

    //õ
    letra[36].pino[2]=1;
    letra[36].pino[4]=1;
    letra[36].pino[6]=1;
    letra[36].letra='õ';

    //ó
    letra[37].pino[3]=1;
    letra[37].pino[4]=1;
    letra[37].pino[6]=1;
    letra[37].letra='ó';

    //ô
    letra[38].pino[1]=1;
    letra[38].pino[4]=1;
    letra[38].pino[5]=1;
    letra[38].pino[6]=1;
    letra[38].letra='ô';

    //ú
    letra[39].pino[2]=1;
    letra[39].pino[3]=1;
    letra[39].pino[4]=1;
    letra[39].pino[5]=1;
    letra[39].pino[6]=1;
    letra[39].letra='ú';

    //ü
    letra[40].pino[1]=1;
    letra[40].pino[2]=1;
    letra[40].pino[5]=1;
    letra[40].pino[6]=1;
    letra[40].letra='ü';

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
                printf("\n\n\nLetra: %c\n",letra[x].letra);
                printf("\nPinos: \n");
                printf("\nP1 | P2 | P3 | P4 | P5 | P6 \n");
            for(j=1;j<=6;j++)
                printf("%d    ",letra[x].pino[j]);
            }
        }
    fclose(arquivo);
}


