#include "../libs/listadisciplina.h"
#include <iostream>
#include <fstream>
listaDisciplina::listaDisciplina():
prim(nullptr),
ultm(nullptr),
qnt(0){
}
listaDisciplina::~listaDisciplina(){
	ElDisciplina *Aux=prim;
	ElDisciplina *Aux1=Aux;

	while(Aux!=nullptr){
			Aux1=Aux->getProx();
			delete Aux;
			Aux=Aux1;
	}
	prim=nullptr;
	ultm=nullptr;
}
void listaDisciplina::adicionar(Disciplina *disc){
		if(disc!=nullptr){
			ElDisciplina *aux=nullptr;
			aux = new ElDisciplina();
			aux->setDiscipilina(disc);
			if(prim==nullptr){
					prim=aux;
					ultm=aux;
			}
			else{
					ultm->setProx(aux);
					aux->setAntes(ultm);
					ultm=aux;
			}
			qnt++;
		}

}
void listaDisciplina::imprimir(){
		ElDisciplina *aux=prim;
		while(aux!=nullptr){
				std::cout<<(aux->getDisciplina())->getNome()<<std::endl; 
				aux=aux->getProx();
		}
}
int listaDisciplina::getQnt(){
	return qnt;
}
void listaDisciplina::gravarDisc()
{
std::ofstream GravadorAlunos ( "disc.dat",std::ofstream::app);
if ( !GravadorAlunos )
{
		std::cerr << " Arquivo não pode ser aberto " << std::endl;
		getchar( );
		return;
}
	ElDisciplina* pauxElDisc;
	pauxElDisc = prim;
	while ( pauxElDisc != NULL)
	{
	Disciplina* pauxDisc;
	pauxDisc = pauxElDisc->getDisciplina();
		GravadorAlunos << pauxDisc->getId ( ) << ' '
		<< pauxDisc->getNome()<< std::endl;
		pauxElDisc = pauxElDisc->getProx();
}
GravadorAlunos.close ( );
}
void listaDisciplina::recupereDisc( )
{
		std::ifstream RecuperadorDisc( "disc.dat", std::ios::in );
		if ( !RecuperadorDisc)
		{
			std::cerr << " Arquivo não pode ser aberto " << std::endl;
			fflush ( stdin );
			getchar( );
			}
				while ( !RecuperadorDisc.eof ( ) )
				{
				Disciplina* pauxDisc;
				int id;
				std::string nome;
				RecuperadorDisc >> id >> nome;
					if ( nome!="" )
					{
						pauxDisc = new Disciplina( -1 );
						pauxDisc-> ( id );
						pauxDisc->setRA ( RA );
						pauxDisc->setNome ( nome );
						incluaAluno ( pauxDisc );
					}
				}
	RecuperadorDisc.close ( );
}
