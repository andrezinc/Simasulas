#pragma once 
#include "departamento.h"
class Universidade{
	private:
		char nomeUniversidadeP[50];
		Departamento *Dpto[50];
		int pos;
	public:
		Universidade(const char *n="");
		~Universidade();
		void setUniversidade(const char *n);
		char* get_Nome();	
		void setDepartamento(Departamento *dep,int pos);
		void  imprime();
};
