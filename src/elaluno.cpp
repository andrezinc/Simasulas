#include "../libs/elaluno.h"

ElAluno::ElAluno():
alun(nullptr)
,pPrim(nullptr)
,pUltim(nullptr){

}
ElAluno::~ElAluno(){
		alun=nullptr;
		pPrim=nullptr;
		pUltim=nullptr;
}
void ElAluno::setpPrim(ElAluno *p){
		pPrim=p;
}
ElAluno* ElAluno::getpPrim(){
		return pPrim;
}
void ElAluno::setpUltim(ElAluno *p){
		pUltim=p;
}
ElAluno* ElAluno::getpUltim(){
		return pUltim;
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
