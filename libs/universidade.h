#pragma once 
#include "listadepartameto.h"
class Universidade{
	private:
		std::string nomeUniversidadeP;
		int pos;
		ListaDepartamento ListadeDepartameneto; 
	public:
		Universidade();
		~Universidade();
		void setUniversidade(std::string n);
		std::string get_Nome();	
		void incluiDepartamento(Departamento *dep);
		void  imprime();
};
