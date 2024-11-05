#include "../libs/listauniversidade.h"
#include <iostream>
#include <fstream>
ListaUniversidade::ListaUniversidade(){
		prim=nullptr;
		ultm=nullptr;
}
ListaUniversidade::~ListaUniversidade(){
		elUniversidade *aux,*aux1;
		aux=prim;
		aux1=prim;
		while(aux!=nullptr){
				aux1=aux->getProx();
				delete aux;
				aux=aux1;
		}
		prim=nullptr;
		ultm=nullptr;
}
void ListaUniversidade::adicionar(Universidade *p){
		if(p!=nullptr){
			elUniversidade *ptr = new elUniversidade;
			ptr->setUniversidade(p);
			if(prim==nullptr){
					prim=ptr;
					ultm=ptr;
			}
			else{
					ultm->setProx(ptr);
					ptr->setAntes(ultm);
					ultm=ptr;
			}
		}
}
elUniversidade *ListaUniversidade::localizar(std::string n){
		elUniversidade *aux=prim;
		while(aux!=nullptr){
				if(((aux->getUniv())->get_Nome())==n){
						return aux;
				}
			aux=aux->getProx();
		}
		return nullptr;
}

void ListaUniversidade::imprimir(){
		elUniversidade *aux=prim;
		while(aux!=nullptr){
				std::cout<<(aux->getUniv())->get_Nome()<<std::endl;
				aux=aux->getProx();
		}
}
void ListaUniversidade::gravarUniv()
{
std::ofstream GravadorUniv( "uni.dat",std::ofstream::app);
if ( !GravadorUniv)
{
		std::cerr << " Arquivo não pode ser aberto " << std::endl;
		getchar();
		return;
}
	elUniversidade* pauxElUniv;
	pauxElUniv = prim;
	while ( pauxElUniv != NULL)
	{
	Universidade* pauxUniv;
	pauxUniv = pauxElUniv->getUniv();
		GravadorUniv<< pauxUniv->getId ( ) << ' '
		<< pauxUniv->get_Nome()<< std::endl;
		pauxElUniv = pauxElUniv->getProx();
}
GravadorUniv.close ( );
}
void ListaUniversidade::recuperarUniv()
{
std::ifstream RecuperarUniv( "uni.dat",std::ofstream::in);
if ( !RecuperarUniv)
{
		std::cerr << " Arquivo não pode ser aberto " << std::endl;
		getchar();
		return;
}
while(!RecuperarUniv.eof()){
		Universidade *pauxUniv;
		int id;
		std::string nome;
		RecuperarUniv>>id>>nome;
		if(nome!=""){
						pauxUniv= new Universidade(-1);
						pauxUniv->setId(id);
						pauxUniv->setUniversidade(nome);
						adicionar(pauxUniv);
						}
}
RecuperarUniv.close ( );
}
