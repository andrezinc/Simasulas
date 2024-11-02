#pragma once 
#include <string>
class Universidade;
class Disciplina;
class listaDisciplina;
class Departamento{
	private:
			Universidade *PUuniv;
			std::string nomeDepartamentoP;
			listaDisciplina *plistaDisciplinas;
	public:
			Departamento();
			~Departamento();
			void setNome(std::string n="");
			std::string getNome();
			void setUniv(Universidade *pu);
			void incluaDiscplin(Disciplina* pd);
			void listeDiscplina();
};
