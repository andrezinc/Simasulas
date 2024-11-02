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
			int idP;
	public:
			Pessoa(int id=-1,int diaAtt=0,int mesAtt=0,int anoAtt=0,std::string nome="");
			Pessoa();
			~Pessoa();
			void imprime();
			void setAniver(int diaAtt,int mesAtt,int anoAtt);
			void Inicializa(int diaAtt=0,int mesAtt=0,int anoAtt=0,std::string nome="");
			void CalculaIdade(int diaH=0,int mesH=0,int anoH=0);
			int Get_Idade();
			void setNome(std::string n);
			std::string getNome();
};
