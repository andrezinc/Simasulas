#include "../libs/pessoa.h"
#include <iostream>
#include <string.h>
Pessoa::Pessoa(int diaAtt,int mesAtt,int anoAtt,const char *nome){
		Inicializa(anoAtt,mesAtt,diaAtt,nome);
}
Pessoa::Pessoa(){
	Inicializa();
}
Pessoa::~Pessoa(){

}
void Pessoa::Inicializa(int diaAtt,int mesAtt,int anoAtt,const char *nome){
		strcpy(nomeP,nome);
		anoP=anoAtt;
		mesP=mesAtt;
		diaP=diaAtt;
		idadeP=-1;
}
void Pessoa::CalculaIdade(int diaH,int mesH,int anoH){
		idadeP=anoH-anoP;
		if(mesH<mesP){
				idadeP-=1;
		}
		else{
		if(mesH==mesP){
				if(diaP<diaH)
					idadeP-=1;
			}
		}
}

int Pessoa::Get_Idade(){
	return idadeP;
}
void Pessoa::imprime(){
	std::cout<<nomeP<<" tem "<<idadeP<<" anos"<<std::endl;
}
