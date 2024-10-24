#include "../libs/aluno.h"
#include <iostream>
Aluno::Aluno(int diaAtt,int mesAtt,int anoAtt,const char *nome):
Pessoa(diaAtt,mesAtt,anoAtt,nome)
,RA(0)
,pUnivEstuda(nullptr)
,prox(nullptr)
,anterior(nullptr)
{
};
Aluno::Aluno()
:Pessoa()
{
	pUnivEstuda=nullptr;
	prox=nullptr;
	anterior=nullptr;
	RA=0;
}
Aluno::~Aluno(){
	pUnivEstuda=nullptr;
	prox=nullptr;
	anterior=nullptr;
}
void Aluno::setUniv(Universidade *p){
		pUnivEstuda=p;
}
void Aluno::imprimeEstuda(){
	if(pUnivEstuda!=nullptr)
		std::cout<<"Andre estuda na "<<pUnivEstuda->get_Nome()<<std::endl;
}
int Aluno::getRa(){
		return RA;
}
void Aluno::setRa(int ra){
		RA=ra;
}
Aluno* Aluno::getProx(){
		return prox;
}
Aluno* Aluno::getAntes(){
		return anterior;
}
void Aluno::setAnte(Aluno* aluno){
		anterior=aluno;
}
void Aluno::setProx(Aluno* aluno){
		prox=aluno;
}
