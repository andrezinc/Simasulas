#include "../libs/aluno.h"
#include <iostream>
Aluno::Aluno(int diaAtt,int mesAtt,int anoAtt,const char *nome):
Pessoa(diaAtt,mesAtt,anoAtt,nome){
		RA=0;
		pUnivEstuda=nullptr;
};
Aluno::Aluno()
:Pessoa()
{
	pUnivEstuda=nullptr;
	RA=0;
}
Aluno::~Aluno(){

}
void Aluno::setUniv(Universidade *p){
		pUnivEstuda=p;
}
void Aluno::imprimeEstuda(){
	if(pUnivEstuda!=nullptr)
		std::cout<<"Andre estuda na"<<pUnivEstuda->get_Nome()<<std::endl;
}
int Aluno::getRa(){
		return RA;
}
void Aluno::setRa(int ra){
		RA=ra;
}
