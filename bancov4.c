#include <stdio.h>
#include <conio.h> // para struct
#include <stdlib.h>

int main(){
    char letra;
    int aux_id [41]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,34,37,38,39,40};
    char aux_letra [41]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','ç','á','â','à','ã','é','ê','í','ï','õ','ó','ô','ú','ü'};
    int aux_valor [41]= {1,12,14,145,15,124,1245,125,24,245,13,123,134,1345,135,1234,12345,1235,234,2345,136,1236,2456,1346,13456,1356,12346,12356,16,1246,345,123456,126,34,12456,246,346,1456,23456,1256};
    int id,x,valor,porta1=1,porta2=2,porta3=0,porta4=0,porta5=0,porta6=0; // 1-ativo 0-desativado

    /*if(sensor1 == 1) // 1-ativo 0-desativado
        porta1=1;
    if(sensor2 == 1)
        porta2 =2;
    */ //------------------------------------------------------- sensores ativos/desativados


    if( (porta1==0 || porta1==1 )&& (porta2==0 || porta2==2 ) && (porta3==0 || porta3==3 ) && (porta4==0 || porta4==4 ) && (porta5==0 || porta5==5 ) && (porta6==0 || porta6==6 )){

        valor =  porta1*1000000 + porta2* 100000 + + porta3* 10000 + porta4* 1000 + porta5* 100 + porta6* 10;
                                                                                        //---------------------- como iguinorar 0 a direita e a esquerda????

        //char valor_final[] = valor; -------------- como transformar int em vet de char

        valor = 14; // ------------------ para testes
        printf("\n\nValor: %d\n\n",valor);

        // -------------------------------- mudar para uma forma mais simples
        for(x=0;x<=41;x++){
            if (valor == aux_valor[x]){
               letra = aux_letra[x];
               id = aux_id[x]; // só pra verificar
               valor = aux_valor[x];// só praverificar
            }
        }

        if(letra != NULL)
            printf("\n\nLetra --> %c\nId --> %d\nValor --> %d\n",letra,id,valor);
        else
            printf("\nLetra nao encontrada.\n");


    }else
        printf("\n\nUma das portas nao existe.\n\n");


    system("PAUSE");
    return 0;
}

