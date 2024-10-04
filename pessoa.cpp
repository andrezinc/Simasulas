#include "pessoa.h"
#include <iostream>
Pessoa::Pessoa(const char *nome,int anoAtt,int mesAtt,int diaAtt){
		for(int i=0;*(nome+i)!='\0';i++){ 
				nomeP[i]=*(nome+i);
		}
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
	std::cout<<nomeP<<" tem "<<idadeP<<" anos";
}
