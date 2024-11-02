#include "../libs/pessoa.h"
#include <iostream>
Pessoa::Pessoa(int diaAtt,int mesAtt,int anoAtt,std::string nome){
		Inicializa(anoAtt,mesAtt,diaAtt,nome);
}
Pessoa::Pessoa(){
	Inicializa();
}
Pessoa::~Pessoa(){

}
void Pessoa::Inicializa(int diaAtt,int mesAtt,int anoAtt,std::string nome){
		nomeP=nome;
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
std::string Pessoa::getNome(){
		return nomeP;
}
void Pessoa::imprime(){
	std::cout<<nomeP<<" tem "<<idadeP<<" anos"<<std::endl;
}
