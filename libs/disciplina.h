#pragma once
#include "departamento.h"
class Disciplina{
	private:
			int id;
			char nome[50];
			Departamento *pDetoAsso;
			Disciplina *pProx;
			Disciplina *pAntes;
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
};
