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
    
    //configurando entrada e saída pinos
    
    //Pinos 1
    pinMode(1, INPUT);
    pullUpDnControl(1, PUD_UP);
    
    //Pinos 2
    pinMode(2, INPUT);
    pullUpDnControl(2, PUD_UP);
    
    //Pinos 3
    pinMode(3, INPUT);
    pullUpDnControl(3, PUD_UP);
    
    //Pinos 4
    pinMode(4, INPUT);
    pullUpDnControl(4, PUD_UP);
    
    //Pinos 5
    pinMode(5, INPUT);
    pullUpDnControl(5, PUD_UP);
    
    //Pinos 6
    pinMode(6, INPUT);
    pullUpDnControl(6, PUD_UP);
    
    //Botao principal
    pinMode(7, INPUT);
    pullUpDnControl(7, PUD_UP);
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
    
void executar()
{
    int checkpinos[7] = {0}, j; //{0,1,0,0,0,0,0}
    char ret = ' ';
    //ativa todos os pinos, somente enquanto o botão principal estiver sendo pressionado
    while (TRUE) {
        if(digitalRead(7) == LOW) {
            checarpinos(checkpinos);
            
            ret = buscaLetra(checkpinos);
            for(j = 1; j <= 6; j++) {
                printf("pino %d: %d\n", j, checkpinos[j]);
            }
            if(!ret) {
                printf("\n\nErro ao buscar letra na biblioteca!!\n\n");
            }
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
    executar();
    return 0;
}























