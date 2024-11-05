#pragma once 
#include "listadepartameto.h"
class Universidade{
	private:
		int idP;
		std::string nomeUniversidadeP;
		int pos;
		ListaDepartamento ListadeDepartameneto; 
	public:
		Universidade(int id=-1);
		~Universidade();
		void setUniversidade(std::string n);
		std::string get_Nome();	
		void incluiDepartamento(Departamento *dep);
		void  imprime();
		int getId();
		void setId(int id);
};
