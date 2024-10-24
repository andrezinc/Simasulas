#include "../libs/disciplina.h"
#include "string.h"
#include <iostream>
Disciplina::Disciplina(){
	id=0;
	pDetoAsso=nullptr;
	pProx=nullptr;
	pAntes=nullptr;
	pProx=nullptr;
	pAntes=nullptr;
	ElPrim=nullptr;
	ElUltim=nullptr;
	setNome("");
}
Disciplina::Disciplina(int i,const char*n){
		id=i;
		strcpy(nome,n);
		pDetoAsso=nullptr;
		pProx=nullptr;
		pAntes=nullptr;
		ElPrim=nullptr;
		ElUltim=nullptr;
}
Disciplina::~Disciplina(){
		ElAluno *aux1,*aux2;
		aux1=ElPrim;
		while(aux1!=nullptr){
				aux2=aux1->getpPrim();
				delete(aux1);
				aux1=aux2;
		}
		pDetoAsso=nullptr;
		pProx=nullptr;
		pAntes=nullptr;
		ElPrim=nullptr;
		ElUltim=nullptr;
}
void Disciplina::SetId(int i){
	id=i;
}
int Disciplina::getId(){
		return id;
}
void Disciplina::setNome(const char*n){
		strcpy(nome,n);
}
char* Disciplina::getNome(){
		return nome;
}
void Disciplina::setDepartamento(Departamento* d){
		pDetoAsso=d;
		pDetoAsso->incluaDiscplin(this);
}
Departamento* Disciplina::getDepartamento(){
		return pDetoAsso;
}
void Disciplina::setpProx(Disciplina* d){
		pProx=d;
}
void Disciplina::setpAntes(Disciplina *d){
		pAntes=d;
}
Disciplina * Disciplina::getpAntes(){
		return pAntes;
}
Disciplina* Disciplina::getpProx(){
		return pProx;
}

void Disciplina::IncluiAluno(Aluno* aluno){
		ElAluno *Aux=nullptr;
		Aux= new ElAluno;
		Aux->setAluno(aluno);
		if(ElPrim==nullptr){
				ElPrim=Aux;
				ElUltim=Aux;
		}
		else{
			ElPrim->setpPrim(Aux);	
			Aux->setpUltim(ElPrim);
			ElUltim=Aux;
		}
}
void Disciplina::imprime(){
	ElAluno *aux=ElPrim;
	while(aux!=nullptr){
		std::cout<<aux->getNome()<<std::endl;
		aux=ElPrim->getpPrim();
	}
}
