#include<stdio.h>
#include<wiringPi.h>

int main(){
	
	int checar_botao;
	int checar_pinos;
	int checar_letra;
	int executar_audio;
}

int checar_botao(){
	wiringPiSetup();
	pinMode(1, OUTPUT);
	pinMode(7, INPUT);
	pullUpDnControl(7, PUD_UP);
	
	int botao1=0; //bot�o 7 desativado ----->ver qual correspondente WiringPi
	
	//configurando entrada e sa�da pinos
	int pino1=0;
	pinMode(1, OUTPUT);
	pinMode(7, INPUT);
	pullUpDnControl(7, PUD_UP);
	
	int pino2=0;
	pinMode(2, OUTPUT);
	pinMode(0, INPUT);
	pullUpDnControl(0, PUD_UP);
	
	int pino3=0;
	pinMode(3, OUTPUT);
	pinMode(1, INPUT);
	pullUpDnControl(1, PUD_UP);
	
	int pino4=0;
	pinMode(4, OUTPUT);
	pinMode(2, INPUT);
	pullUpDnControl(2, PUD_UP);
	
	int pino5=0;
	pinMode(5, OUTPUT);
	pinMode(3, INPUT);
	pullUpDnControl(3, PUD_UP);
	
	int pino6=0;
	pinMode(6, OUTPUT);
	pinMode(4, INPUT);
	pullUpDnControl(4, PUD_UP);
	
	//ativando todos os pinos, somente enquanto o bot�o estiver sendo pressionado!
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

























