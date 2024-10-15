#pragma once 
#include "pessoa.h"
class Aluno: public Pessoa{
		private:
				int RA;
		public:
				Aluno(int diaAtt,int mestAtt,int anoAtt,const char*nome="");
				Aluno();
				~Aluno();
				void setRa(int ra);
				int getRa();
};
