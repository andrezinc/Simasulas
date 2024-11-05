#include "../libs/listadepartameto.h"
#include <iostream>
#include <fstream>
ListaDepartamento::ListaDepartamento():
prim(nullptr),
ultm(nullptr){
}
ListaDepartamento::~ListaDepartamento(){
		ElDepartamento *aux1,*aux2;
		aux1=prim;
		aux2=aux1;
		while(aux1!=nullptr){
				aux2=aux1->GetProx();
				delete aux1;
				aux1=aux2;
		}
		prim=nullptr;
		ultm=nullptr;

}
void ListaDepartamento::adicionar(Departamento *p){
		if(p!=nullptr){
		ElDepartamento *Aux;
		Aux = new ElDepartamento;
		Aux->SetDepartamento(p);
		if(prim==nullptr){
				prim=Aux;
				ultm=Aux;
		}
		else{
				ultm->SetProx(Aux);
				Aux->SetAntes(ultm);
				ultm=Aux;
		}
		
		}
}
void ListaDepartamento::imprimir(){
		ElDepartamento *aux=prim;

		while(aux!=nullptr){
				std::cout<<(aux->GetDepatamento())->getNome()<<std::endl;
				aux=aux->GetProx();
		}
}
ElDepartamento *ListaDepartamento::localizar(std::string n){
		ElDepartamento *aux=prim;
		while(aux!=nullptr){
				if((aux->GetDepatamento())->getNome()==n){
						return aux;
				}
			aux=aux->GetProx();
		}
		return nullptr;
}
void ListaDepartamento::gravarDep()
{
std::ofstream GravadorDep( "dep.dat",std::ofstream::app);
if ( !GravadorDep)
{
		std::cerr << " Arquivo não pode ser aberto " << std::endl;
		getchar( );
		return;
}
	ElDepartamento* pauxElDep;
	pauxElDep = prim;
	while ( pauxElDep!= NULL)
	{
	Departamento* pauxDep;
	pauxDep = pauxElDep->GetDepatamento();
		GravadorDep<< pauxDep->getId( ) << ' '
		<< pauxDep->getNome()<< std::endl;
		pauxElDep = pauxElDep->GetProx();
}
GravadorDep.close ( );
}
void ListaDepartamento::recuperarDep( )
{
		std::ifstream RecuperadorDep( "dep.dat", std::ios::in );
		if ( !RecuperadorDep)
		{
			std::cerr << " Arquivo não pode ser aberto " << std::endl;
			fflush ( stdin );
			getchar( );
			}
				while ( !RecuperadorDep.eof ( ) )
				{
				Departamento* pauxDep;
				int id;
				std::string nome;
				RecuperadorDep >> id >> nome;
					if ( nome!="" )
					{
						pauxDep = new Departamento( -1 );
						pauxDep->setId( id );
						pauxDep->setNome ( nome );
						adicionar( pauxDep );
					}
				}
	RecuperadorDep.close ( );
}
