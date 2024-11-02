#include "../libs/listadisciplina.h"
#include <iostream>
listaDisciplina::listaDisciplina():
prim(nullptr),
ultm(nullptr),
qnt(0){
}
listaDisciplina::~listaDisciplina(){
	ElDisciplina *Aux=prim;
	ElDisciplina *Aux1=Aux;

	while(Aux!=nullptr){
			Aux1=Aux->getProx();
			delete Aux;
			Aux=Aux1;
	}
	prim=nullptr;
	ultm=nullptr;
}
void listaDisciplina::adicionar(Disciplina *disc){
		if(disc!=nullptr){
			ElDisciplina *aux=nullptr;
			aux = new ElDisciplina();
			aux->setDiscipilina(disc);
			if(prim==nullptr){
					prim=aux;
					ultm=aux;
			}
			else{
					ultm->setProx(aux);
					aux->setAntes(ultm);
					ultm=aux;
			}
			qnt++;
		}

}
void listaDisciplina::imprimir(){
		ElDisciplina *aux=prim;
		while(aux!=nullptr){
				std::cout<<(aux->getDisciplina())->getNome()<<std::endl; 
				aux=aux->getProx();
		}
}
int listaDisciplina::getQnt(){
	return qnt;
}
