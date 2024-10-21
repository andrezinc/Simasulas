#include "../libs/disciplina.h"
#include "string.h"
Disciplina::Disciplina(){
	id=0;
	pDetoAsso=nullptr;
	pProx=nullptr;
	pAntes=nullptr;
	setNome("");
}
Disciplina::Disciplina(int i,const char*n){
		id=i;
		strcpy(nome,n);
		pDetoAsso=nullptr;
		pProx=nullptr;
		pAntes=nullptr;
}
Disciplina::~Disciplina(){
		pDetoAsso=nullptr;
		pProx=nullptr;
		pAntes=nullptr;
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

