#include "../libs/pessoa.h"
#include <iostream>
Pessoa::Pessoa(int diaAtt,int mesAtt,int anoAtt,const char *nome){
		Inicializa(anoAtt,mesAtt,diaAtt,nome);
}
Pessoa::Pessoa(){
	Inicializa();
}
Pessoa::~Pessoa(){

}
void Pessoa::Inicializa(int diaAtt,int mesAtt,int anoAtt,const char *nome){
		int i=0;
		for(i=0;*(nome+i)!='\0';i++){ 
				nomeP[i]=*(nome+i);
		}
		nomeP[i]='\0';
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
void Pessoa::setUnivFiliado(Universidade *pu){
	pUnivFiliado=pu;
}
void Pessoa::setDeptFiliado(Departamento *p){
	pDepatFiliado=p;
}
void Pessoa::OndeEstuda(){
	std::cout<<nomeP<<" estuda na "<< pUnivFiliado->get_Nome()<<" no "<<pDepatFiliado->getNome()<<std::endl;
}
