#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include "banco_letras.h"

void inicializar()
{
    wiringPiSetup();
    
    //puxa banca de dados
    inicializa_letras();
    file_write();
    
    //configurando entrada e saida pinos
    
    for (i = 1; i <= 7; i++) {
        pinMode(i, INPUT);
        pullUpDnControl(i, PUD_UP);
    }
}

int checarbotao(int botao)
{
    if (digitalRead(botao) == LOW)
        return 1;
    else 
        return 0; 
}

void checarpinos(int checkpinos[])
{
    int i;
    for (i = 1; i <= 6; i++)
        checkpinos [i] = checarbotao(i);
}

void ExecutarAudio (char ret)
{
    // strcat so aceita string
    char letra_ret[1]; 
    letra_ret[0] = ret; // letra retornada
    char mp3[7] = ".mp3 &"; // extensao
    char str[50] = "omxplayer -o hdmi /home/pi/Projeto/Audios/"; // comando

    // concatena as strings - strcat()
    strcat(str,letra_ret);
    strcat(str, mp3);

    //Executa 
    system(str);

    // apaga tudo
    strcpy(str,"");
    strcpy(mp3,"");
    strcpy(letra_ret,"");
}
    
void ModoLivre()
{
    int checkpinos[7] = {0}, j; //{0,1,0,0,0,0,0}
    char ret = ' ';
    //ativa todos os pinos, somente enquanto o bot�o principal estiver sendo pressionado
    while (TRUE) {
        if(digitalRead(7) == LOW) {
            checarpinos(checkpinos);
            
            ret = buscaLetra(checkpinos);
            for(j = 1; j <= 6; j++)
                printf("pino %d: %d\n", j, checkpinos[j]);
            if(!ret)
                printf("\n\nErro ao buscar letra na biblioteca!!\n\n");
            else {
                printf("\nLetra encontrada: %c\n\n", ret);
                ExecutarAudio(ret);
            }
            delay(300);         
        }
    }
}

int main()
{
    inicializar();
    ModoLivre ();
    return 0;
}























