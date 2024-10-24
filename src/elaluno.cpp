#include "../libs/elaluno.h"

ElAluno::ElAluno():
alun(nullptr)
,pAntes(nullptr)
,pProx(nullptr){

}
ElAluno::~ElAluno(){
		alun=nullptr;
		pAntes=nullptr;
		pProx=nullptr;
}
void ElAluno::setpAntes(ElAluno *p){
		pAntes=p;
}
ElAluno* ElAluno::getpAntes(){
		return pAntes;
}
void ElAluno::setpProx(ElAluno *p){
		pProx=p;
}
ElAluno* ElAluno::getpProx(){
		return pProx;
}
void ElAluno::setAluno(Aluno *p){
	alun=p;
}
Aluno* ElAluno::getAluno(){
		return alun;
}
char* ElAluno::getNome(){
		return alun->getNome();
}
