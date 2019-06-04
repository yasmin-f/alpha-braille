#include <stdio.h>
#include <conio.h> // para struct
#include <stdlib.h>

// Estrutura de dados
//struct

struct alfabeto // declaracao nao funcao;
{
    //char nome_cliente[30] = {'F','u','l','a','n','o'};
    // vetores
    int id[41];
    char letra[41];
    int valor[41]
} item; // var que controla
        //struct componente comp,com3;

/*void inicua(int *aux_id, char *aux_letra, int *aux_valor,int x){
    *aux_id [41]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,34,37,38,39,40};
    *aux_letra [41]= {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','ç','á','â','à','ã','é','ê','í','ï','õ','ó','ô','ú','ü'};
    *aux_valor [41]= {0,1,12,14,145,15,124,1245,125,24,245,13,123,134,1345,135,1234,12345,1235,234,2345,136,1236,2456,1346,13456,1356,12346,12356,16,1246,345,123456,126,34,12456,246,346,1456,23456,1256};
    for(x=0;x<=41;x++){
        item.id[x] = aux_id[x];

        item.letra[x] = aux_letra[x];
        item.valor[x] = aux_valor[x];//printf("%d\n", item.valor[x]);
    }
}*/

int main(){
    int x;
    int aux_id [41]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,34,37,38,39,40};
    char aux_letra [41]= {' ','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','ç','á','â','à','ã','é','ê','í','ï','õ','ó','ô','ú','ü'};
    int aux_valor [41]= {0,1,12,14,145,15,124,1245,125,24,245,13,123,134,1345,135,1234,12345,1235,234,2345,136,1236,2456,1346,13456,1356,12346,12356,16,1246,345,123456,126,34,12456,246,346,1456,23456,1256};

    for(x=0;x<=41;x++){
        item.id[x] = aux_id[x];

        item.letra[x] = aux_letra[x];
        item.valor[x] = aux_valor[x];//printf("%d\n", item.valor[x]);
    }


    printf("\n\nTeste: \n\n");
    printf("Id: %d\n",item.id[6]);
    printf("Letra: %c\n",item.letra[6]);
    printf("Valor: %d\n",item.valor[6]);

    system("PAUSE");
    return 0;
}
