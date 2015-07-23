#include "Arduino.h"
#include "PonteH.h"

PonteH::PonteH(int enable1,int inputa1,int inputa2,int enable2,int inputb1,int inputb2){
	//Construtor inicializando a pinagem
	pinMode(enable1,OUTPUT);
	pinMode(inputa1,OUTPUT);
	pinMode(inputa2,OUTPUT);
	pinMode(enable2,OUTPUT);
	pinMode(inputb1,OUTPUT);
	pinMode(inputb2,OUTPUT);
	
	_enable1=enable1;
	_inputa1=inputa1;
	_inputa2=inputa2;
	_enable2=enable2;
	_inputb1=inputb1;
	_inputb2=inputb2;
	
	}
	
void PonteH::setVelocidade(boolean nMotor,int velocidade){
	
	if(!nMotor){
	if (velocidade>255) _velocidade1=255; 	
	else if(velocidade<0) _velocidade1 = 0;
	else _velocidade1=velocidade;
	
	}else{
	if (velocidade>255) _velocidade2=255; 	
	else if(velocidade<0) _velocidade2 = 0;
	else _velocidade2=velocidade;	
		
	}
		
}

void PonteH::setDirecao(boolean nMotor,boolean direcao){
	
	if(!nMotor){
	_direcao1=direcao;
	}else{
	_direcao2=direcao;
	}
		
}

void PonteH::acionar(boolean nMotor){
	
	if(!nMotor){
	analogWrite(_enable1,_velocidade1);	
	digitalWrite(_inputa1,_direcao1);
	digitalWrite(_inputa2,!_direcao1);
	
	}else{
	analogWrite(_enable2,_velocidade2);	
	digitalWrite(_inputb1,_direcao2);
	digitalWrite(_inputb2,!_direcao2);	
		
	}

}

void PonteH::desacionar(boolean nMotor){
	if(!nMotor){
	digitalWrite(_enable1,LOW);	
	
	}else{
	digitalWrite(_enable2,LOW);	
	
	}
	
}






