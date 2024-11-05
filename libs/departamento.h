#pragma once 
#include <string>
class Universidade;
class Disciplina;
class listaDisciplina;
class Departamento{
	private:
			int idP;
			Universidade *PUuniv;
			std::string nomeDepartamentoP;
			listaDisciplina *plistaDisciplinas;
	public:
			Departamento(int id=-1);
			~Departamento();
			void setNome(std::string n="");
			std::string getNome();
			void setId(int id);
			int getId();
			void setUniv(Universidade *pu);
			void incluaDiscplin(Disciplina* pd);
			void listeDiscplina();
};
