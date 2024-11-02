#include "../libs/listauniversidade.h"
#include <iostream>
ListaUniversidade::ListaUniversidade(){
		prim=nullptr;
		ultm=nullptr;
}
ListaUniversidade::~ListaUniversidade(){
		elUniversidade *aux,*aux1;
		aux=prim;
		aux1=prim;
		while(aux!=nullptr){
				aux1=aux->getProx();
				delete aux;
				aux=aux1;
		}
		prim=nullptr;
		ultm=nullptr;
}
void ListaUniversidade::adicionar(Universidade *p){
		if(p!=nullptr){
			elUniversidade *ptr = new elUniversidade;
			ptr->setUniversidade(p);
			if(prim==nullptr){
					prim=ptr;
					ultm=ptr;
			}
			else{
					ultm->setProx(ptr);
					ptr->setAntes(ultm);
					ultm=ptr;
			}
		}
}
elUniversidade *ListaUniversidade::localizar(std::string n){
		elUniversidade *aux=prim;
		while(aux!=nullptr){
				if(((aux->getUniv())->get_Nome())==n){
						return aux;
				}
			aux=aux->getProx();
		}
		return nullptr;
}

void ListaUniversidade::imprimir(){
		elUniversidade *aux=prim;
		while(aux!=nullptr){
				std::cout<<(aux->getUniv())->get_Nome()<<std::endl;
				aux=aux->getProx();
		}
}
