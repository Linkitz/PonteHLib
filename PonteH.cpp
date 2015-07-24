#include "Arduino.h"
#include "PonteH.h"

PonteH::PonteH(int enable,int input1,int input2){
	//Construtor inicializando a pinagem
	pinMode(enable,OUTPUT);
	pinMode(input1,OUTPUT);
	pinMode(input2,OUTPUT);

	_enable=enable;
	_input1=input1;
	_input2=input2;
	
	}
	
void PonteH::setVelocidade(int velocidade){		
	if (velocidade>255) _velocidade=255; 	
	else if(velocidade<0) _velocidade = 0;
	else _velocidade=velocidade;		
}

int PonteH::getVelocidade(){		
return _velocidade;
}

void PonteH::setDirecao(boolean direcao){
	_direcao=direcao;
}

boolean PonteH::getDirecao(){
	return _direcao;
}

void PonteH::acionar(){		
	analogWrite(_enable,_velocidade);	
	digitalWrite(_input1,_direcao);
	digitalWrite(_input2,!_direcao);	
}

void PonteH::desacionar(){	
	digitalWrite(_enable,LOW);		
}






