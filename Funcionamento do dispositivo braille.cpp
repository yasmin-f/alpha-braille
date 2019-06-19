#include<stdio.h>
#include<wiringPi.h>
#include"banco_letras2.h"

int main(int argc, char const *argv[])
{
	inicializar();
	executar();
	return 0;
}

void incializar()
{
	wiringPiSetup();
	
	//puxa banca de dados
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
	checarbotao(1) = checkpinos [1];
	checarbotao(2) = checkpinos [2];
	checarbotao(3) = checkpinos [3];
	checarbotao(4) = checkpinos [4];
	checarbotao(5) = checkpinos [5];
	checarbotao(6) = checkpinos [6];
}

char checarletra(int checkpinos[], int letras[])
{
	int res;
	for(int i=0;i<40;++i){
		res=1;
		for(int j=0;j<7;++j){ // talvez tenha que mudar j p/ 1
			if(res && letras[i].pino[i]!= checkpinos[j])
				res=0;
		}
		if(res)return letras[i].letra;
	}		
}

void Audio ()
{
	
	system(omx application"arquivo.mp3"); //vai pro terminal e volta em áudio
}
	
int executar()
{
	int checkpinos[7];
	//ativando todos os pinos, somente enquanto o botão estiver sendo pressionado!
	while (1){
		if(digitalRead(7) == LOW);{
			checarpinos(checkpinos);
			checarletra(checkpinos, letras);
			executaraudio();
			
		}
	}
}
























