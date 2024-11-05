#include "../libs/pessoa.h"
#include <iostream>
Pessoa::Pessoa(int id,int diaAtt,int mesAtt,int anoAtt,std::string nome):
idP(id),
diaP(diaAtt),
anoP(anoAtt),
nomeP(nome){
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
		idP=-1;
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
void Pessoa::setAniver(int diaAtt,int mesAtt,int anoAtt){
		anoP=anoAtt;
		mesP=mesAtt;
		diaP=anoAtt;
}
void Pessoa::setNome(std::string n){
		nomeP=n;
}
void Pessoa::setId(int id){
		idP=id;
}
int Pessoa::GetId(){
		return idP;
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
