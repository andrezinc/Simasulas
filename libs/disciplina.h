#pragma once
#include "departamento.h"
#include "listaalunos.h"
#include <string>
class Disciplina{
	private:
			int id;
			std::string nome;
			Departamento *pDetoAsso;
			ListaAlunos ObjLalunos;
	public:
			Disciplina(int i, std::string n="");
			Disciplina();
			~Disciplina();
			void SetId(int i);
			int getId();
			void setNome(std::string n="");
			std::string getNome();
			void setDepartamento(Departamento *d);
			Departamento* getDepartamento();
			void IncluiAluno(Aluno* aluno);
			void imprime();
};
