#pragma once 
#include "universidade.h"
#include "departamento.h"
class Pessoa{
	protected:	
			std::string nomeP;
			int idadeP;
			int anoP;
			int mesP;
			int diaP;
	public:
			Pessoa(int diaAtt,int mesAtt,int anoAtt,std::string nome="");
			Pessoa();
			~Pessoa();
			void imprime();
			void Inicializa(int diaAtt=0,int mesAtt=0,int anoAtt=0,std::string nome="");
			void CalculaIdade(int diaH=0,int mesH=0,int anoH=0);
			int Get_Idade();
			std::string getNome();
};
