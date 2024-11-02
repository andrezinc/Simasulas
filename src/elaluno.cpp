#include "../libs/elaluno.h"

ElAluno::ElAluno():
pAntes(nullptr)
,pProx(nullptr)
,alun(nullptr){

}
ElAluno::~ElAluno(){
		pAntes=nullptr;
		pProx=nullptr;
		alun=nullptr;
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
std::string ElAluno::getNome(){
		return alun->getNome();
}
