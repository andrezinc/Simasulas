#include "../libs/universidade.h"
#include <iostream>
#include <string.h>
Universidade::Universidade(const char *n):
pDepartPrim(nullptr)
,pDepartUltim(nullptr){
	setUniversidade(n);
}
Universidade::~Universidade(){
pDepartPrim=nullptr;
pDepartUltim=nullptr;
}
void Universidade::setUniversidade(const char *n){
		strcpy(nomeUniversidadeP,n);
}
char *Universidade::get_Nome(){
		return nomeUniversidadeP;
}
void Universidade::incluiDepartamento(Departamento *dep){
		if(pDepartPrim==nullptr){
				pDepartPrim=dep;
				pDepartUltim=dep;
		}
		else{
				pDepartUltim->setProx(dep);
				dep->setAntes(pDepartUltim);
				pDepartUltim=dep;
		}
}
void Universidade::imprime(){
		Departamento *Aux;
		Aux=pDepartPrim;
		while(Aux!=nullptr){
				std::cout<<Aux->getNome()<<std::endl;
				Aux=Aux->getProx();
		}
}
