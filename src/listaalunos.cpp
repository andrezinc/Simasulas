#include "../libs/listaalunos.h"
#include <iostream>
ListaAlunos::ListaAlunos()
:elPrim(nullptr),elUltim(nullptr),qntAlunos(0){
}
ListaAlunos::~ListaAlunos(){
		ElAluno *aux2,*aux1;
		aux2=elPrim;
		aux1=elPrim;
		while(aux1!=nullptr){
				aux2=aux1->getpProx();
				delete(aux1);
				aux1=aux2;
		}
		elPrim=nullptr;
		elUltim=nullptr;
}
void ListaAlunos::adicionar(Aluno *aluno){
		if(aluno!=nullptr){
				ElAluno *ptr=nullptr;
				ptr=new ElAluno;
				ptr->setAluno(aluno);
				if(elPrim==nullptr){
						elPrim=ptr;
						elUltim=ptr;
				}
				else{
					elUltim->setpProx(ptr);
					ptr->setpAntes(ptr);
					elUltim=ptr;
				}
				qntAlunos++;
		}
}
void ListaAlunos::mostrar_lista(){
		ElAluno *aux;
		aux=elPrim;
		while(aux==nullptr){
				std::cout<<aux->getNome()<<std::endl;
				aux=aux->getpProx();
		}
}
int ListaAlunos::getqntAlunos(){
		return qntAlunos;
}
