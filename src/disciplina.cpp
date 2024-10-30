#include "../libs/disciplina.h"
#include "string.h"
#include <iostream>
Disciplina::Disciplina(){
	id=0;
	pDetoAsso=nullptr;
	pAntes=nullptr;
	pAtual=nullptr;
	pAntes=nullptr;
	setNome("");
}
Disciplina::Disciplina(int i,const char*n){
		id=i;
		strcpy(nome,n);
		pDetoAsso=nullptr;
		pAtual=nullptr;
		pAntes=nullptr;
}
Disciplina::~Disciplina(){
		pDetoAsso=nullptr;
		pAtual=nullptr;
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
void Disciplina::setpAtual(Disciplina* d){
		pAtual=d;
}
void Disciplina::setpAntes(Disciplina *d){
		pAntes=d;
}
Disciplina * Disciplina::getpAntes(){
		return pAntes;
}
Disciplina* Disciplina::getpAtual(){
		return pAtual;
}

void Disciplina::IncluiAluno(Aluno* aluno){
		ObjLalunos.adicionar(aluno);
}
void Disciplina::imprime(){
		ObjLalunos.mostrar_lista();
}
