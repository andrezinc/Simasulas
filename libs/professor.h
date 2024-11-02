#pragma once 
#include "pessoa.h"
class Professor : public Pessoa{
		private:
			Universidade *pUnivFiliado;//associação
			Departamento *pDepatFiliado; //associação 
		public:
			Professor(int id=-1,int diaAtt=0,int mesAtt=0,int anoAtt=0,std::string nome=""); 
			Professor();
			~Professor();
			void setUnivFiliado(Universidade *pu);
			void setDeptFiliado(Departamento *p);
			void OndeTrabalha();
			void QualDepartamento();
};
