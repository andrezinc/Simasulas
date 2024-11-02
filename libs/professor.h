#pragma once 
#include "pessoa.h"
class Professor : public Pessoa{
		private:
			Universidade *pUnivFiliado;//associação
			Departamento *pDepatFiliado; //associação 
		public:
			Professor(int diaAtt,int mesAtt,int anoAtt,std::string nome=""); 
			Professor();
			~Professor();
			void setUnivFiliado(Universidade *pu);
			void setDeptFiliado(Departamento *p);
			void OndeTrabalha();
			void QualDepartamento();
};
