#include "../libs/elDisciplina.h"
ElDisciplina::ElDisciplina():
prox(nullptr),
antes(nullptr),
disc(nullptr)
{
}
ElDisciplina::~ElDisciplina(){
		prox=nullptr;
		antes=nullptr;
		disc=nullptr;
}
void ElDisciplina::setDiscipilina(Disciplina *d){
		disc=d;
}
void ElDisciplina::setProx(ElDisciplina *p){
		prox=p;
}
void ElDisciplina::setAntes(ElDisciplina *a){
		antes=a;
}
Disciplina* ElDisciplina::getDisciplina(){
		return disc;
}
ElDisciplina* ElDisciplina::getProx(){
		return prox;
}
ElDisciplina* ElDisciplina::getAntes(){
		return antes;
}
