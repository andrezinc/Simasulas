#pragma once 
#include "departamento.h"
class Universidade{
	private:
		char nomeUniversidadeP[50];
		int pos;
		Departamento *pDepartPrim;
		Departamento *pDepartUltim;
	public:
		Universidade(const char *n="");
		~Universidade();
		void setUniversidade(const char *n);
		char* get_Nome();	
		void incluiDepartamento(Departamento *dep);
		void  imprime();
};
