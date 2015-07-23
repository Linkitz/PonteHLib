#ifndef PonteH_h
#define PonteH_h

#include "Arduino.h"
#define M1 false;
#define M2 true;

class PonteH{
	
	public:
	//Construtor para configuração da pinagem da ponte H
	PonteH(int enable1,int inputa1,int inputa2,int enable2,int inputb1,int inputb2);
	void setVelocidade(boolean nMotor,int velocidade);
	void setDirecao(boolean nMotor,boolean direcao);
	void acionar(boolean nMotor);
	void desacionar(boolean nMotor);
	
	private:
	int _enable1;
	int _inputa1;
	int _inputa2;
	int _velocidade1;
	int _direcao1;
	
	int _enable2;
	int _inputb1;
	int _inputb2;
	int _velocidade2;
	int _direcao2;	
};

#endif