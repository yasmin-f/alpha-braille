#include<stdio.h>
#include<wiringPi.h>
#include"banco_letras2.h"

int main(){
	
	
	int checar_botao;
	int checar_pinos;
	int checar_letra;
	int executar_audio;
}

int incializar(){
	wiringPiSetup();
	
	inicializa_letras();
	file_write();
	
	//configurando entrada e saída pinos
	int pino1=0;
	pinMode(1, INPUT);
	pullUpDnControl(1, PUD_UP);
	
	int pino2=0;
	pinMode(2, INPUT);
	pullUpDnControl(2, PUD_UP);
	
	int pino3=0;
	pinMode(3, INPUT);
	pullUpDnControl(3, PUD_UP);
	
	int pino4=0;
	pinMode(4, INPUT);
	pullUpDnControl(4, PUD_UP);
	
	int pino5=0;
	pinMode(5, INPUT);
	pullUpDnControl(5, PUD_UP);
	
	int pino6=0;
	pinMode(6, INPUT);
	pullUpDnControl(6, PUD_UP);
	
	int botao7;
	pinMode(7, INPUT)
	pullUpDnControl(7, PUD_UP)
	
	//ativando todos os pinos, somente enquanto o botão estiver sendo pressionado!
	while(1){
		if(digitalRead(7) == LOW);{
		botao1 = !botao1;
			digitalWrite(1, botao1);
			if(botao1 == 1) printf("Botao pressionado\n");
			if(botao1 == 0) printf("Botao desativado\n");
		pino1 = !pino1;
		pino2 = !pino2;
		pino3 = !pino3;
		pino4 = !pino4;
		pino5 = !pino5;
		pino6 = !pino6;
		while(digitalRead(7) == LOW);
		
		}
	}
}

int checar_pinos(){
	//(A) desligando todos os pinos menos o 1
	
	
	
	
	
	
	
	
	
	
	
	
	
}


























