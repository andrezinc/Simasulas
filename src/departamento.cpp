#include "../libs/departamento.h"
#include "../libs/universidade.h"
#include "../libs/disciplina.h"
#include <string.h>
#include <iostream>
Departamento::Departamento(const char *n)
:pDiscipPrim(nullptr)
,pDiscipUltm(nullptr)
,PUuniv(nullptr)
,pProx(nullptr)
,pAntes(nullptr){
		setNome(n);	
}
Departamento::~Departamento(){
		pDiscipPrim=nullptr;
		pDiscipUltm=nullptr;
		PUuniv=nullptr;
		pProx=nullptr;
		pAntes=nullptr;
}
void Departamento::setNome(const char *n)
{
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
				pDiscipUltm->setpAtual(pd);
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
			Aux=Aux->getpAtual();
		}
}
void Departamento::listeDiscplinaTras(){
		Disciplina* Aux=pDiscipUltm;
		while(Aux!=nullptr){
			std::cout<<Aux->getNome()<<std::endl;
			Aux=Aux->getpAntes();
		}
}
void Departamento::setProx(Departamento *p){
		pProx=p;
}
void Departamento::setAntes(Departamento *p){
		pAntes=p;
}
Departamento *Departamento::getProx(){
		return pProx;
}
Departamento *Departamento::getAntes(){
		return pAntes;
}
