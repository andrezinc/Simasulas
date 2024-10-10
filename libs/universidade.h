#pragma once 
#include "departamento.h"
class Universidade{
	private:
		char nomeUniversidadeP[50];
	public:
		Universidade(const char *n="");
		~Universidade();
		void setUniversidade(const char *n="");
		char* get_Nome();	
};
