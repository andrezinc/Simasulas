#include "../libs/departamento.h"
#include "../libs/universidade.h"
#include "../libs/disciplina.h"
#include <string.h>
#include <iostream>
Departamento::Departamento(const char *n){
		pDiscipPrim=nullptr;
		pDiscipUltm=nullptr;
		PUuniv=nullptr;
		setNome("");	
}
Departamento::~Departamento(){
		pDiscipPrim=nullptr;
		pDiscipUltm=nullptr;
}
void Departamento::setNome(const char *n){
		strcpy(nomeDepartamentoP,n);
}
char *Departamento::getNome(){
		return nomeDepartamentoP;
}
void Departamento::setUniv(Universidade *pu){
		PUuniv=pu;
}
void Departamento::incluaDiscplin(Disciplina *pd){
		if(pDiscipPrim==NULL){
				pDiscipUltm=pd;
				pDiscipPrim=pd;
		}
		else{
				pDiscipUltm->setpProx(pd);
				pd->setpAntes(pDiscipUltm);
				pDiscipUltm=pd;
		}
}
void Departamento::ExcluiDisciplin(Disciplina *pd){
}
void Departamento::listeDiscplina(){
		Disciplina* Aux=pDiscipPrim;
		while(Aux!=nullptr){
			std::cout<<Aux->getNome()<<std::endl;
			Aux=Aux->getpProx();
		}
}
void Departamento::listeDiscplinaTras(){
		Disciplina* Aux=pDiscipUltm;
		while(Aux!=nullptr){
			std::cout<<Aux->getNome()<<std::endl;
			Aux=Aux->getpAntes();
		}
}
