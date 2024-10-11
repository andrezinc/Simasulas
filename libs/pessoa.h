#pragma once 
#include "universidade.h"
#include "departamento.h"
class Pessoa{
	private:
			char nomeP[50];
			int idadeP;
			int anoP;
			int mesP;
			int diaP;
			Universidade *pUnivFiliado;//associação
			Departamento *pDepatFiliado; //associação fraca
	public:
			Pessoa(int diaAtt,int mesAtt,int anoAtt,const char *nome="");
			Pessoa();
			~Pessoa();
			void imprime();
			void Inicializa(int diaAtt=0,int mesAtt=0,int anoAtt=0,const char *nome="");
			void CalculaIdade(int diaH=0,int mesH=0,int anoH=0);
			int Get_Idade();
			void setUnivFiliado(Universidade *pu);
			void setDeptFiliado(Departamento *p);
			void OndeEstuda();
};
