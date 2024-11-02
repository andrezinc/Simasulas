#pragma once 
#include "pessoa.h"
#include <string>
class Aluno: public Pessoa{
		private:
				int RA;
				Universidade *pUnivEstuda;
		public:
				Aluno(int id=-1);
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
