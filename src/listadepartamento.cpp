#include "../libs/listadepartameto.h"
#include <iostream>
ListaDepartamento::ListaDepartamento():
prim(nullptr),
ultm(nullptr){
}
ListaDepartamento::~ListaDepartamento(){
		ElDepartamento *aux1,*aux2;
		aux1=prim;
		aux2=aux1;
		while(aux1!=nullptr){
				aux2=aux1->GetProx();
				delete aux1;
				aux1=aux2;
		}
		prim=nullptr;
		ultm=nullptr;

}
void ListaDepartamento::adicionar(Departamento *p){
		if(p!=nullptr){
		ElDepartamento *Aux;
		Aux = new ElDepartamento;
		Aux->SetDepartamento(p);
		if(prim==nullptr){
				prim=Aux;
				ultm=Aux;
		}
		else{
				ultm->SetProx(Aux);
				Aux->SetAntes(ultm);
				ultm=Aux;
		}
		
		}
}
void ListaDepartamento::imprimir(){
		ElDepartamento *aux=prim;

		while(aux!=nullptr){
				std::cout<<(aux->GetDepatamento())->getNome()<<std::endl;
				aux=aux->GetProx();
		}
}
ElDepartamento *ListaDepartamento::localizar(std::string n){
		ElDepartamento *aux=prim;
		while(aux!=nullptr){
				if((aux->GetDepatamento())->getNome()==n){
						return aux;
				}
			aux=aux->GetProx();
		}
		return nullptr;
}
