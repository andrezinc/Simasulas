#include "../libs/universidade.h"
#include <iostream>
#include <string.h>
Universidade::Universidade(const char *n){
	for(int i=0;i<50;i++)
			Dpto[i]=nullptr;
	setUniversidade(n);
}
Universidade::~Universidade(){
}
void Universidade::setUniversidade(const char *n){
		strcpy(nomeUniversidadeP,n);
}
char *Universidade::get_Nome(){
		return nomeUniversidadeP;
}
void Universidade::setDepartamento(Departamento *dep,int pos){
		Dpto[pos]=dep;
}
void Universidade::imprime(){
	for(int pos=0;pos<50;pos++)
		if(Dpto[pos]!=nullptr)
			 std::cout<<Dpto[pos]->getNome()<<std::endl;
}
