#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//#include "C:\C_Progressivo\mystring.h"

// Estrutura de dados
//struct

typedef struct {
   int pino[7];
   char letra;
} letra[40];

typedef struct {
   int pino[7];
   char letra;
} l[40];

void inicializa_struct(){
    int i,j;
    for(i = 0;i <= 40; i++){
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

    //a {0,1,0,0,0,0,0}
    letra[1].pino[1]=1;
    letra[1].letra = 'a';

    //b {0,1,2,0,0,0,0}
    letra[2].pino[1]=1;
    letra[2].pino[2]=1;
    letra[2].letra='b';

    //c {0,1,0,0,1,0,0}
    letra[3].pino[1]=1;
    letra[3].pino[4]=1;
    letra[3].letra='c';

    //d {0,1,0,0,1,1,0}
    letra[4].pino[1]=1;
    letra[4].pino[4]=1;
    letra[4].pino[5]=1;
    letra[4].letra='d';

    //e {0,1,0,0,0,1,0}
    letra[5].pino[1]=1;
    letra[5].pino[5]=1;
    letra[5].letra='e';

    //f {0,1,1,0,1,0,0}
    letra[6].pino[1]=1;
    letra[6].pino[2]=1;
    letra[6].pino[4]=1;
    letra[6].letra='f';

    //g {0,1,1,0,1,1,0}
    letra[7].pino[1]=1;
    letra[7].pino[2]=1;
    letra[7].pino[4]=1;
    letra[7].pino[5]=1;
    letra[7].letra='g';

    //h {0,1,1,0,0,5,0}
    letra[8].pino[1]=1;
    letra[8].pino[2]=1;
    letra[8].pino[5]=1;
    letra[8].letra='h';

    //i {0,0,1,0,1,0,0}
    letra[9].pino[2]=1;
    letra[9].pino[4]=1;
    letra[9].letra='i';

    //j {0,0,1,0,1,1,0}
    letra[10].pino[2]=1;
    letra[10].pino[4]=1;
    letra[10].pino[5]=1;
    letra[10].letra='j';

    //k {0,1,0,1,0,0,0}
    letra[11].pino[1]=1;
    letra[11].pino[3]=1;
    letra[11].letra='k';

    //l {0,1,1,1,0,0,0}
    letra[12].pino[1]=1;
    letra[12].pino[2]=1;
    letra[12].pino[3]=1;
    letra[12].letra='l';

    //m {0,1,0,1,1,0,0}
    letra[13].pino[1]=1;
    letra[13].pino[3]=1;
    letra[13].pino[4]=1;
    letra[13].letra='m';

    //n {0,1,0,1,1,1,0}
    letra[14].pino[1]=1;
    letra[14].pino[3]=1;
    letra[14].pino[4]=1;
    letra[14].pino[5]=1;
    letra[14].letra='n';

    //o {0,1,0,1,0,1,0}
    letra[15].pino[1]=1;
    letra[15].pino[3]=1;
    letra[15].pino[5]=1;
    letra[15].letra='o';

    //p {0,1,1,1,1,0,0}
    letra[16].pino[1]=1;
    letra[16].pino[2]=1;
    letra[16].pino[3]=1;
    letra[16].pino[4]=1;
    letra[16].letra='p';

    //q {0,1,1,1,1,1,0}
    letra[17].pino[1]=1;
    letra[17].pino[2]=1;
    letra[17].pino[3]=1;
    letra[17].pino[4]=1;
    letra[17].pino[5]=1;
    letra[17].letra='q';

    //r {0,1,1,1,0,1,0}  
    letra[18].pino[1]=1;
    letra[18].pino[2]=1;
    letra[18].pino[3]=1;
    letra[18].pino[5]=1;
    letra[18].letra='r';

    //s {0,0,1,1,1,0,0}
    letra[19].pino[2]=1;
    letra[19].pino[3]=1;
    letra[19].pino[4]=1;
    letra[19].letra='s';

    //t {0,0,1,1,1,1,0}
    letra[20].pino[2]=1;
    letra[20].pino[3]=1;
    letra[20].pino[4]=1;
    letra[20].pino[5]=1;
    letra[20].letra='t';

    //u {0,1,0,1,0,0,1}
    letra[21].pino[1]=1;
    letra[21].pino[3]=1;
    letra[21].pino[6]=1;
    letra[21].letra='u';

    //v {0,1,1,1,0,0,1}
    letra[22].pino[1]=1;
    letra[22].pino[2]=1;
    letra[22].pino[3]=1;
    letra[22].pino[6]=1;
    letra[22].letra='v';

    //w {0,0,1,0,1,1,1}
    letra[23].pino[2]=1;
    letra[23].pino[4]=1;
    letra[23].pino[5]=1;
    letra[23].pino[6]=1;
    letra[23].letra='w';

    //x {0,1,0,1,1,0,1}
    letra[24].pino[1]=1;
    letra[24].pino[3]=1;
    letra[24].pino[4]=1;
    letra[24].pino[6]=1;
    letra[24].letra='x';

    //y {0,1,0,1,1,1,1}
    letra[25].pino[1]=1;
    letra[25].pino[3]=1;
    letra[25].pino[4]=1;
    letra[25].pino[5]=1;
    letra[25].pino[6]=1;
    letra[25].letra='y';

    //z {0,1,0,1,0,1,0}
    letra[26].pino[1]=1;
    letra[26].pino[3]=1;
    letra[26].pino[5]=1;
    letra[26].pino[6]=1;
    letra[26].letra='z';

    //�
    letra[27].pino[1]=1;
    letra[27].pino[2]=1;
    letra[27].pino[3]=1;
    letra[27].pino[4]=1;
    letra[27].pino[6]=1;
    letra[27].letra='�';

    //�
    letra[28].pino[1]=1;
    letra[28].pino[2]=1;
    letra[28].pino[3]=1;
    letra[28].pino[5]=1;
    letra[28].pino[6]=1;
    letra[28].letra='�';

    //�
    letra[29].pino[1]=1;
    letra[29].pino[6]=1;
    letra[29].letra='�';

    //�
    letra[30].pino[1]=1;
    letra[30].pino[2]=1;
    letra[30].pino[4]=1;
    letra[30].pino[6]=1;
    letra[30].letra='�';

    //�
    letra[31].pino[3]=1;
    letra[31].pino[4]=1;
    letra[31].pino[5]=1;
    letra[31].letra='�';

    //�
    letra[32].pino[1]=1;
    letra[32].pino[2]=1;
    letra[32].pino[3]=1;
    letra[32].pino[4]=1;
    letra[32].pino[5]=1;
    letra[32].pino[6]=1;
    letra[32].letra='�';

    //�
    letra[33].pino[1]=1;
    letra[33].pino[2]=1;
    letra[33].pino[6]=1;
    letra[33].letra='�';

    //�
    letra[34].pino[3]=1;
    letra[34].pino[4]=1;
    letra[34].letra='�';

    //�
    letra[35].pino[1]=1;
    letra[35].pino[2]=1;
    letra[35].pino[4]=1;
    letra[35].pino[5]=1;
    letra[35].pino[6]=1;
    letra[35].letra='�';

    //�
    letra[36].pino[2]=1;
    letra[36].pino[4]=1;
    letra[36].pino[6]=1;
    letra[36].letra='�';

    //�
    letra[37].pino[3]=1;
    letra[37].pino[4]=1;
    letra[37].pino[6]=1;
    letra[37].letra='�';

    //�
    letra[38].pino[1]=1;
    letra[38].pino[4]=1;
    letra[38].pino[5]=1;
    letra[38].pino[6]=1;
    letra[38].letra='�';

    //�
    letra[39].pino[2]=1;
    letra[39].pino[3]=1;
    letra[39].pino[4]=1;
    letra[39].pino[5]=1;
    letra[39].pino[6]=1;
    letra[39].letra='�';

    //�
    letra[40].pino[1]=1;
    letra[40].pino[2]=1;
    letra[40].pino[5]=1;
    letra[40].pino[6]=1;
    letra[40].letra='�';

}
void file_write(){
    // Arquivo
    // gravando no arquivo
    int gravado; FILE *arquivo;
    arquivo = fopen("alfabeto.txt","wb");//wb - arquibo binario
    if (arquivo == NULL){
        printf("\nArquivo alfabeto.txt n�o pode ser aberto.\n");
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

        //verificar se est� pegando do arquivo binario
        // l � outra struct que vai receber minha estrutura gravada no arquivo e implimila
        // antes l era &letra
        fread(&l, sizeof(struct letra), 40, arquivo);
        int x,j;
        for(x=0;x<=40;x++){
                printf("\n\n\nLetra: %c\n",l[x].letra);
                printf("\nPinos: \n");
                printf("\nP1 | P2 | P3 | P4 | P5 | P6 \n");
            for(j=1;j<=6;j++)
                printf("%d    ",l[x].pino[j]);
            }
        }
    fclose(arquivo);
}

char buscaLetra(int checkpinos[]){
    int res, i = 1,j = 1;
    char retorno = NULL;

    // i - contador para letras
	for(i = 1; i <= 40; i++){
		//printf("\n\n\nLetra: %c\n\n",letra[i].letra);
		res=0;
        j=1;

        // j - contador para os pinos das letras
        while(j <= 6){

            if(checkpinos[j] == letra[i].pino[j])
                res=1;
            else break; // se ele nao for igual ja saio da repeticao de pinos (j)

            // se o j estiver na ultima posicao e o res==1 retorno a letra
            // senao so continuo a contagem para proxima letra
            if(j == 6 && res)
                return retorno = letra[i].letra;

            j++;
        }
	}
    return NULL; // se ele passar todas as letras e nao encontrar nehuma retorno nao encontrado
}

char busca_letra_file_bin(int checkpinos[]){
    // lendo o arquivo
    FILE *arquivo;
    arquivo = fopen("alfabeto.txt","rb");
    if (arquivo == NULL){
        printf("\nErro na abertura do arquivo\n");
        system("PAUSE");
    }
    else{
        //verificar se est� pegando do arquivo binario
        // l � outra struct que vai receber minha estrutura gravada no arquivo e implimila
        // antes l era &letra
        fread(&l, sizeof(struct letra), 40, arquivo);
        int i=0,j=0,res=0; char ret = NULL;
        for(i=1;i<=40;i++){
            res=0;
            j=1;
            while(j<=6){
                if(checkpinos[j] == l[i].pino[j])
                    res=1;
                else break;
                if(j==6 && res)
                    return ret = l[i].letra;
                j++;
            }
        }
    }
    fclose(arquivo);
    return NULL;
}
