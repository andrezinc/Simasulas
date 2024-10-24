#pragma once
#include "departamento.h"
#include "aluno.h"
#include "elaluno.h"
class Disciplina{
	private:
			int id;
			char nome[50];
			Departamento *pDetoAsso;
			Disciplina *pProx;
			Disciplina *pAntes;
			
			ElAluno *ElPrim;
			ElAluno *ElUltim;
	public:
			Disciplina(int i, const char*n="");
			Disciplina();
			~Disciplina();
			void SetId(int i);
			int getId();
			void setNome(const char *n="");
			char* getNome();
			void setDepartamento(Departamento *d);
			Departamento* getDepartamento();
			void setpProx(Disciplina *d);
			void setpAntes(Disciplina *d);
			Disciplina* getpProx();
			Disciplina* getpAntes();
			void IncluiAluno(Aluno* aluno);
			void imprime();
};
