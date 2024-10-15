#pragma once 
#include "pessoa.h"
class Professor : public Pessoa{
		private:
			Universidade *pUnivFiliado;//associação
			Departamento *pDepatFiliado; //associação fraca
		public:
			Professor(int diaAtt,int mesAtt,int anoAtt,const char *nome=""); 
			Professor();
			~Professor();
			void setUnivFiliado(Universidade *pu);
			void setDeptFiliado(Departamento *p);
			void OndeTrabalha();
			void QualDepartamento();
};
