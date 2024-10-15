#pragma once 
#include "pessoa.h"
class Aluno: public Pessoa{
		private:
				int RA;
				Universidade *pUnivEstuda;
		public:
				Aluno(int diaAtt,int mestAtt,int anoAtt,const char*nome="");
				Aluno();
				~Aluno();
				void setUniv(Universidade *p);
				void imprimeEstuda();
				void setRa(int ra);
				int getRa();

};
