#include "../libs/professor.h"
#include <iostream>
Professor::Professor(int diaAtt,int mesAtt,int anoAtt,const char *nome):
Pessoa(diaAtt,mesAtt,anoAtt,nome){
		pUnivFiliado=nullptr;
		pDepatFiliado=nullptr;
}
Professor::Professor():
Pessoa(){
		pUnivFiliado=nullptr;
		pDepatFiliado=nullptr;
		}
Professor::~Professor(){

}
void Professor::setDeptFiliado(Departamento *p){
	pDepatFiliado=p;
}
void Professor::setUnivFiliado(Universidade *pu){
	pUnivFiliado=pu;
}
void Professor::OndeTrabalha(){
		std::cout<<"Olá sou "<<nomeP<<" Trabalho em "<<pUnivFiliado->get_Nome()<<"no Departamento "<<pDepatFiliado->getNome()<<std::endl;
}
void Professor::QualDepartamento(){
		std::cout<<"Deparamento:"<<pDepatFiliado->getNome();
}
