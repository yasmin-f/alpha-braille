#include <stdio.h>
#include <conio.h> // para struct
#include <stdlib.h>
#include <locale.h>

// Estrutura de dados
//struct

struct letra
{
   int pino1;
   int pino2;
   int pino3;
   int pino4;
   int pino5;
   int pino6;

   char letra;
} letra[];

int main(){
    setlocale(LC_ALL, "");
   /* int aux_id [41]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,34,37,38,39,40};
    char aux_letra [41]= {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','ç','á','â','à','ã','é','ê','í','ï','õ','ó','ô','ú','ü'};
    int aux_valor [41]= {0,1,12,14,145,15,124,1245,125,24,245,13,123,134,1345,135,1234,12345,1235,234,2345,136,1236,2456,1346,13456,1356,12346,12356,16,1246,345,123456,126,34,12456,246,346,1456,23456,1256};
    */

    // ' '
    letra[0].letra=' ';

    //a
    letra[1].pino1=1;
    letra[1].letra='a';
    //b
    letra[2].pino1=1;
    letra[2].pino2=1;
    letra[2].letra='b';
    //c
    letra[3].pino1=1;
    letra[3].pino4=1;
    letra[3].letra='c';
    //d
    letra[4].pino1=1;
    letra[4].pino4=1;
    letra[4].pino5=1;
    letra[4].letra='d';
    //e
    letra[5].pino1=1;
    letra[5].pino5=1;
    letra[5].letra='e';
    //f
    letra[6].pino1=1;
    letra[6].pino2=1;
    letra[6].pino4=1;
    letra[6].letra='f';
    //g
    letra[7].pino1=1;
    letra[7].pino2=1;
    letra[7].pino4=1;
    letra[7].pino5=1;
    letra[7].letra='g';
    //h
    letra[8].pino1=1;
    letra[8].pino2=1;
    letra[8].pino5=1;
    letra[8].letra='h';
    //i
    letra[9].pino2=1;
    letra[9].pino4=1;
    letra[9].letra='i';
    //j
    letra[10].pino2=1;
    letra[10].pino4=1;
    letra[10].pino5=1;
    letra[10].letra='j';
    //k
    letra[11].pino1=1;
    letra[11].pino3=1;
    letra[11].letra='k';
    //l
    letra[12].pino1=1;
    letra[12].pino2=1;
    letra[12].pino3=1;
    letra[12].letra='l';
    //m
    letra[13].pino1=1;
    letra[13].pino3=1;
    letra[13].pino4=1;
    letra[13].letra='m';
    //n
    letra[14].pino1=1;
    letra[14].pino3=1;
    letra[14].pino4=1;
    letra[14].pino5=1;
    letra[14].letra='n';
    //o
    letra[15].pino1=1;
    letra[15].pino3=1;
    letra[15].pino5=1;
    letra[15].letra='o';
    //p
    letra[16].pino1=1;
    letra[16].pino2=1;
    letra[16].pino3=1;
    letra[16].pino4=1;
    letra[16].letra='p';
    //q
    letra[17].pino1=1;
    letra[17].pino2=1;
    letra[17].pino3=1;
    letra[17].pino4=1;
    letra[17].pino5=1;
    letra[17].letra='q';
    //r
    letra[18].pino1=1;
    letra[18].pino2=1;
    letra[18].pino3=1;
    letra[18].pino5=1;
    letra[18].letra='r';
    //s
    letra[19].pino2=1;
    letra[19].pino3=1;
    letra[19].pino4=1;
    letra[19].letra='s';
    //t
    letra[20].pino2=1;
    letra[20].pino3=1;
    letra[20].pino4=1;
    letra[20].pino5=1;
    letra[20].letra='t';
    //u
    letra[21].pino1=1;
    letra[21].pino3=1;
    letra[21].pino6=1;
    letra[21].letra='u';
    //v
    letra[22].pino1=1;
    letra[22].pino2=1;
    letra[22].pino3=1;
    letra[22].pino6=1;
    letra[22].letra='v';
    //w
    letra[23].pino2=1;
    letra[23].pino4=1;
    letra[23].pino5=1;
    letra[23].pino6=1;
    letra[23].letra='w';
    //x
    letra[24].pino1=1;
    letra[24].pino3=1;
    letra[24].pino4=1;
    letra[24].pino6=1;
    letra[24].letra='x';
    //y
    letra[25].pino1=1;
    letra[25].pino3=1;
    letra[25].pino4=1;
    letra[25].pino5=1;
    letra[25].pino6=1;
    letra[25].letra='y';
    //z
    letra[26].pino1=1;
    letra[26].pino3=1;
    letra[26].pino5=1;
    letra[26].pino6=1;
    letra[26].letra='z';
    //ç
    letra[27].pino1=1;
    letra[27].pino2=1;
    letra[27].pino3=1;
    letra[27].pino4=1;
    letra[27].pino6=1;
    letra[27].letra='ç';
    //á
    letra[28].pino1=1;
    letra[28].pino2=1;
    letra[28].pino3=1;
    letra[28].pino5=1;
    letra[28].pino6=1;
    letra[28].letra='á';
    //â
    letra[29].pino1=1;
    letra[29].pino6=1;
    letra[29].letra='â';
    //à
    letra[30].pino1=1;
    letra[30].pino2=1;
    letra[30].pino4=1;
    letra[30].pino6=1;
    letra[30].letra='à';
    //ã
    letra[31].pino3=1;
    letra[31].pino4=1;
    letra[31].pino5=1;
    letra[31].letra='ã';
    //é
    letra[32].pino1=1;
    letra[32].pino2=1;
    letra[32].pino3=1;
    letra[32].pino4=1;
    letra[32].pino5=1;
    letra[32].pino6=1;
    letra[32].letra='é';
    //ê
    letra[33].pino1=1;
    letra[33].pino2=1;
    letra[33].pino6=1;
    letra[33].letra='ê';
    //í
    letra[34].pino3=1;
    letra[34].pino4=1;
    letra[34].letra='í';
    //ï
    letra[35].pino1=1;
    letra[35].pino2=1;
    letra[35].pino4=1;
    letra[35].pino5=1;
    letra[35].pino6=1;
    letra[35].letra='ï';
    //õ
    letra[36].pino2=1;
    letra[36].pino4=1;
    letra[36].pino6=1;
    letra[36].letra='õ';
    //ó
    letra[37].pino3=1;
    letra[37].pino4=1;
    letra[37].pino6=1;
    letra[37].letra='ó';
    //ô
    letra[38].pino1=1;
    letra[38].pino4=1;
    letra[38].pino5=1;
    letra[38].pino6=1;
    letra[38].letra='ô';
    //ú
    letra[39].pino2=1;
    letra[39].pino3=1;
    letra[39].pino4=1;
    letra[39].pino5=1;
    letra[39].pino6=1;
    letra[39].letra='ú';
    //*u
    letra[40].pino1=1;
    letra[40].pino2=1;
    letra[40].pino5=1;
    letra[40].pino6=1;
    letra[40].letra='ü';

    // Arquivo

    // gravando no arquivo
    int gravado;
    FILE *arquivo;
    arquivo = fopen("alfabeto.txt","wb");//wb - arquibo binario
    if (arquivo == NULL) {
        printf("\n Arquivo alfabeto.txt não pode ser aberto : TECLE ALGO");
        getch();
    }else{
        gravado = fwrite (&letra, sizeof(struct letra), 40, arquivo);
        if(gravado != 40)
            printf("\nErro ao gravar no arquivo\n");
    }

    // lendo o arquivo
    arquivo = fopen("alfabeto.txt","rb");
    if (arquivo == NULL) {
        printf("\nErro na abertura do arquivo\n");
    }else{
        fread(&letra, sizeof(struct letra), 40, arquivo);
        int x;
        for(x=0;x<=40;x++)
            printf("\nP1:%d \nP2:%d \nP3:%d \nP4:%d \nP5:%d \nP5:%d \nLetra:%c\n",letra[x].pino1,letra[x].pino2,letra[x].pino3,letra[x].pino4,letra[x].pino5,letra[x].pino6,letra[x].letra);
    }

    fclose(arquivo);
    system("PAUSE");
    return 0;
}

