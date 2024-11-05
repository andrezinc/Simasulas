#include "../libs/listaalunos.h"
#include <iostream>
#include <fstream>
ListaAlunos::ListaAlunos()
:elPrim(nullptr),elUltim(nullptr),qntAlunos(0){
}
ListaAlunos::~ListaAlunos(){
		ElAluno *aux2,*aux1;
		aux2=elPrim;
		aux1=elPrim;
		while(aux1!=nullptr){
				aux2=aux1->getpProx();
				delete(aux1);
				aux1=aux2;
		}
		elPrim=nullptr;
		elUltim=nullptr;
}
void ListaAlunos::adicionar(Aluno *aluno){
		if(aluno!=nullptr){
				ElAluno *ptr=nullptr;
				ptr=new ElAluno();
				ptr->setAluno(aluno);
				if(elPrim==nullptr){
						elPrim=ptr;
						elUltim=ptr;
				}
				else{
					elUltim->setpProx(ptr);
					ptr->setpAntes(elUltim);
					elUltim=ptr;
				}
				qntAlunos++;
		}
}
void ListaAlunos::mostrar_lista(){
		ElAluno *aux;
		aux=elPrim;
		while(aux!=nullptr){
				std::cout<<aux->getNome()<<std::endl;
				aux=aux->getpProx();
		}
}
int ListaAlunos::getqntAlunos(){
		return qntAlunos;
}

ElAluno *ListaAlunos::localizar(std::string n){
		ElAluno *aux=elPrim;
		while(aux!=nullptr){
				if((aux->getAluno())->getNome()==n){
						return aux;
				}
			aux=aux->getpProx();
		}
		return nullptr;
}
void ListaAlunos::GravarAluno(){
std::ofstream GravadorAluno( "aluno.dat",std::ofstream::app);
if ( !GravadorAluno)
{
		std::cerr << " Arquivo não pode ser aberto " << std::endl;
		getchar( );
		return;
}
	ElAluno* pauxElAluno;
	pauxElAluno = elPrim;
	while ( pauxElAluno!= NULL)
	{
	Aluno* pauxAluno;
	pauxAluno = pauxElAluno->getAluno();
		GravadorAluno<< pauxAluno->GetId() << ' '
		<< pauxAluno->getNome()<< std::endl;
		pauxElAluno = pauxElAluno->getpProx();
	}
}
void ListaAlunos::RecuperarAluno( )
{
		std::ifstream RecuperadorAluno( "aluno.dat", std::ios::in );
		if ( !RecuperadorAluno)
		{
			std::cerr << " Arquivo não pode ser aberto " << std::endl;
			fflush ( stdin );
			getchar( );
			}
				while ( !RecuperadorAluno.eof ( ) )
				{
				Aluno* pauxAluno;
				int id;
				std::string nome;
				RecuperadorAluno >> id >> nome;
					if ( nome!="" )
					{
						pauxAluno = new Aluno( -1 );
						pauxAluno->setId( id );
						pauxAluno->setNome ( nome );
						adicionar( pauxAluno );
					}
				}
	RecuperadorAluno.close ( );
}
