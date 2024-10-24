#pragma once 
#include "pessoa.h"
class Aluno: public Pessoa{
		private:
				int RA;
				Universidade *pUnivEstuda;
				Aluno *prox;
				Aluno *anterior;
		public:
				Aluno(int diaAtt,int mestAtt,int anoAtt,const char*nome="");
				Aluno();
				~Aluno();
				void setUniv(Universidade *p);
				void imprimeEstuda();
				void setRa(int ra);
				int getRa();
				Aluno* getProx();
				Aluno* getAntes();
				void setProx(Aluno* aluno);
				void setAnte(Aluno* aluno);

};
