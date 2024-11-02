#include "../libs/aluno.h"
#include <iostream>
Aluno::Aluno(int id):
Pessoa(id,0,0,0,"")
,RA(0)
,pUnivEstuda(nullptr)
{
};
Aluno::~Aluno(){
	pUnivEstuda=nullptr;
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
