#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//#include "C:\C_Progressivo\mystring.h"

// Estrutura de dados
//struct

typedef struct {
   int pino[7];
   char letra;
} LETRAS

typedef struct {
   int pino[7];
   char letra;
} l[40];

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
                       {1,0,1,0,1,0};       //z
                       {1,1,1,1,0,1},      
                       {1,1,1,0,1,1},
                       {1,0,0,0,0,1},
                       {1,1,0,1,0,1},
                       {0,0,1,1,1,0},
                       {1,1,1,1,1,1},
                       {1,1,0,0,0,1},
                       {0,0,1,1,0,0},
                       {1,1,0,1,1,1},
                       {0,1,0,1,0,1},
                       {0,0,1,1,0,1},
                       {1,0,0,1,1,1},
                       {0,1,1,1,1,1},
                       {1,1,0,0,1,1}};

    LETRAS alfabeto [40];
    for (i = 0; i < 26; i++) {
        for (j = 0; j < 6; j++) {
            alfabeto[i].pino[j] = aux[i][j];
            alfabeto[i].letra = 'a' + i;
            printf("%d", letra[i].pino[j]);
        }
        printf(" - %d\n", i);
    }

    //cedilha {1,1,1,1,0,1}
    alfabeto[26].letra='ç';

    //A com agudo {1,1,1,0,1,1}
    alfabeto[27].letra='á';

    //A com circunflexo {1,0,0,0,0,1}
    alfabeto[28].letra='â';

    //A com crase {1,1,0,1,0,1}
    alfabeto[29].letra='à';

    //( {0,0,1,1,1,0}
    alfabeto[30].letra=')';

    //e com agudo {1,1,1,1,1,1}
    alfabeto[31].letra='é';

    //e com circunflexo {1,1,0,0,0,1}
    alfabeto[32].letra='ê';

    //i com agudo {0,0,1,1,0,0}
    alfabeto[33].letra='í';

    //� {1,1,0,1,1,1}
    alfabeto[34].letra='�';

    //� {0,1,0,1,0,1}
    alfabeto[35].letra='�';

    //� {0,0,1,1,0,1}
    alfabeto[36].letra='�';

    //� {1,0,0,1,1,1}
    alfabeto[37].letra='�';

    //� {0,1,1,1,1,1}
    alfabeto[38].letra='�';

    //� {1,1,0,0,1,1}
    alfabeto[39].letra='�';

}
void file_write() {
    // Arquivo
    // gravando no arquivo
    int gravado; 
    FILE *arquivo;

    arquivo = fopen ("alfabeto.txt", "wb");//wb - arquivo binario
    if (arquivo == NULL) {
        printf ("\nArquivo alfabeto.txt n�o pode ser aberto.\n");
        system ("PAUSE");
    }
    else {
        gravado = fwrite (&letra, sizeof(struct letra), 40, arquivo);
        if (gravado != 40){
            printf ("\nErro ao gravar no arquivo.\n");
            system ("PAUSE");
        }
    }
    fclose(arquivo);
}

void file_read(){
    // lendo o arquivo
    int i, j;

    FILE *arquivo;
    arquivo = fopen("alfabeto.txt", "rb");
    if (arquivo == NULL){
        printf("\nErro na abertura do arquivo\n");
        system("PAUSE");
    }
    else {

        //verificar se esta pegando do arquivo binario
        // l e outra struct que vai receber minha estrutura gravada no arquivo e implimila
        // antes l era &letra
        fread (&l, sizeof(struct LETRA), 40, arquivo);
        for (i = 0; i <= 40; i++) {
                printf("\n\n\nLetra: %c\n", l[x].letra);
                printf("\nPinos: \n");
                printf("\nP1 | P2 | P3 | P4 | P5 | P6 \n");
            for(j = 0; j < 6; j++)
                printf("%d    ",l[x].pino[j]);
            }
        }
    fclose(arquivo);
}

char buscaLetra(int checkpinos[]){
    int res, i, j;
    char retorno = NULL;

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

char busca_letra_file_bin(int checkpinos[]){
    // lendo o arquivo
    FILE *arquivo;
    arquivo = fopen("alfabeto.txt","rb");
    if (arquivo == NULL){
        printf("\nErro na abertura do arquivo\n");
        system("PAUSE");
    }
    else{
        //verificar se esta pegando do arquivo binario
        // l e outra struct que vai receber minha estrutura gravada no arquivo e implimila
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