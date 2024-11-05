#pragma once
#include "departamento.h"
#include "listaalunos.h"
#include <string>
class Disciplina{
	private:
			int idP;
			std::string nome;
			Departamento *pDetoAsso;
			ListaAlunos ObjLalunos;
	public:
			Disciplina(int id=-1);
			~Disciplina();
			void setNome(std::string n="");
			std::string getNome();
			void setDepartamento(Departamento *d);
			void setId(int id);
			int getId();
			Departamento* getDepartamento();
			void IncluiAluno(Aluno* aluno);
			void imprime();
};
