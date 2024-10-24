#pragma once
#include "departamento.h"
#include "aluno.h"
#include "elaluno.h"
class Disciplina{
	private:
			int id;
			char nome[50];
			Departamento *pDetoAsso;
			Disciplina *pAtual;
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
			void setpAtual(Disciplina *d);
			void setpAntes(Disciplina *d);
			Disciplina* getpAtual();
			Disciplina* getpAntes();
			void IncluiAluno(Aluno* aluno);
			void imprime();
};
