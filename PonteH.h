#ifndef PonteH_h
#define PonteH_h

#include "Arduino.h"

class PonteH{
	
	public:
	//Construtor para configuração da pinagem da ponte H
	PonteH(int enable,int input1,int input2);
	void setVelocidade(int velocidade);
	void setDirecao(boolean direcao);
	int getVelocidade();
	boolean getDirecao();
	void acionar();
	void desacionar();
	
	
	private:
	int _enable;
	int _input1;
	int _input2;
	int _velocidade;
	int _direcao;
		
};

#endif