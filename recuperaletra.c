#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
#include "banco_letras3.h"

int executar()
{
    // valorers de checkpinos para testes
    // primeira posicao sempre 0
	int checkpinos[7] = {0,1,1,1,0,0,1},j;
    char retorno=NULL;

    // funcao  buscaLetra da bibli. banco_letras3.h
    // passo o vetor de pinos e ela me retorna a letra
    retorno = buscaLetra(checkpinos);

    // se o retorno for uma * ele nao achou a letra (para teste coloque as posicoes de checkpinos todas como 0)
    // se ele achou uma letra, imprimo na tela para teste
    if(retorno == '*')
        printf("\n\nErro ao buscar letra na biblioteca!!\n\n");
    else
        printf("Letra encontrada: %c\n\n",retorno);

    //executaraudio();

}

int main()
{
    setlocale(LC_ALL, "");
    // buscando na biblioteca
	inicializa_letras();
	executar();

	// buscando no arquivo binario
	printf("\n-------------------\n");
	file_write();
	//file_read();
    int checkpinos[7] = {0,1,1,1,0,0,1};// para testes
    char ret=NULL;
    ret = busca_letra_file_bin(checkpinos);
    if(ret == '*')
        printf("\n\nErro ao buscar letra na biblioteca!!\n\n");
    else
        printf("Letra encontrada: %c\n\n",ret);

	return 0;
}
