#include "../libs/principal.h"
#include <iostream>
#include <string>
	Principal::Principal():
contAluno(0),
contDisciplina(0),
contUniversidade(0),
contDepartamento(0){
		menu();
	}
	Principal::~Principal(){

	}

void Principal::menu(){
		int opt=-1;
		while(opt!=8){
				std::cout << "\033[2J\033[1;1H";
				std::cout<<"\nEscolha as opcoes:\n";
				std::cout<<"1- Cadastrar Univ\n";
				std::cout<<"2- Cadastrar Departamento\n";
				std::cout<<"3- Cadastrar Disciplina\n";
				std::cout<<"4- Cadastrar Aluno\n";
				std::cout<<"5- Cadastrar Professor\n";
				std::cout<<"6- Gravar\n";
				std::cout<<"7- Recuperar\n";
				std::cout<<"8- Sair\n";
				std::cin>>opt;
				switch(opt){
						case 1:
							cadastraUni();
						break;
						case 2:
							cadastraDep();
						break;
						case 3:
							cadastraDisc();
						break;
						case 4:
							cadastraAluno();
						break;
						case 5:
				//			cadastraProfessor();
						break;	
						case 6:
							Gravar();
							getchar();
						break;
						case 7:
							Recuperar();
							getchar();
						break;
						case 8:
							std::cout<<"\nFUI\n";
							getchar();
						break;
						default:
							std::cout<<"\n Nao encontrado \n";
							getchar();
				}
		}
}
void Principal::cadastraUni(){
	int opt=-1;
	Universidade *p=nullptr;
	elUniversidade *aux1=nullptr;
	std::string nome="";
	while(opt!=4){
	getchar();
	std::cout << "\033[2J\033[1;1H";
	std::cout<<"1- Cadastrar Univ\n";
	std::cout<<"2- Associar Departamento\n";
	std::cout<<"3- Listar Univ\n";
	std::cout<<"4- Sair\n";
	std::cin>>opt;
		switch(opt){
				case 1:
						p=new Universidade(contUniversidade++);
						std::cout<<"Qual o nome da universidade:\n";
						std::cin>>nome;
						p->setUniversidade(nome);
						ObjtListaUniversidade.adicionar(p);
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 2:
						std::cout<<"Qual o nome da universidade:\n";
						std::cin>>nome;
						aux1=ObjtListaUniversidade.localizar(nome); 
						if(aux1!=nullptr){
							std::cout<<"Qual o nome do Departamento para associar:\n";
							std::cin>>nome;
							ElDepartamento *aux=ObjtListaDepartamento.localizar(nome);
							if(aux!=nullptr){
									(aux1->getUniv())->incluiDepartamento(aux->GetDepatamento());
							}
							else{
									std::cout<<"nao achei '-' ";
							}
						}
						else{
								std::cout<<"nao achei a univ";
						}
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 3:
						ObjtListaUniversidade.imprimir();
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 4:
						std::cout<<"\n ok \n";
						getchar();
				break;
				default:
						std::cout<<"\n nao achei '=' \n";
						getchar();
			}
	}
}
void Principal::cadastraDep(){
	int opt=-1;
	Departamento *p=nullptr;
	ElDepartamento *aux1=nullptr;
	std::string nome="";
	while(opt!=4){
	getchar();
	std::cout << "\033[2J\033[1;1H";
	std::cout<<"1- Cadastrar Departamento\n";
	std::cout<<"2- Associar Departamento\n";
	std::cout<<"3- Listar Departamento\n";
	std::cout<<"4- Sair\n";
	std::cin>>opt;
		switch(opt){
				case 1:
						p=new Departamento(contDepartamento++);
						std::cout<<"Qual o nome do departamento:\n";
						std::cin>>nome;
						p->setNome(nome);
						ObjtListaDepartamento.adicionar(p);
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 2:
						std::cout<<"Qual o nome do departamento:\n";
						std::cin>>nome;
						aux1=ObjtListaDepartamento.localizar(nome); 
						if(aux1!=nullptr){
							std::cout<<"Qual o nome da Universidade para associar:\n";
							std::cin>>nome;
							elUniversidade *aux=ObjtListaUniversidade.localizar(nome);
							if(aux!=nullptr){
									(aux->getUniv())->incluiDepartamento(aux1->GetDepatamento());
							}
							else{
									std::cout<<"nao achei '-' ";
							}
						}
						else{
								std::cout<<"nao achei a departamento";
						}
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 3:
						ObjtListaDepartamento.imprimir();
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 4:
						std::cout<<"\n ok \n";
						getchar();
				break;
				default:
						std::cout<<"\n nao achei '=' \n";
						getchar();
		}
	}
}
void Principal::cadastraDisc(){
	int opt=-1;
	Disciplina *p=nullptr;
	ElDisciplina *aux1=nullptr;
	std::string nome="";
	while(opt!=5){
		getchar();
		std::cout << "\033[2J\033[1;1H";
		std::cout<<"1- Cadastrar Disciplina \n";
		std::cout<<"2- Associar Departamento\n";
		std::cout<<"3- Listar Discipinas:\n";
		std::cout<<"4- Incluir aluno na Discipinas:\n";
		std::cout<<"5- Sair\n";
		std::cin>>opt;
		switch(opt){
				case 1:
						p = new Disciplina(contDisciplina++);
						std::cout<<"Nome da disciplina:";
						std::cin>>nome;
						p->setNome(nome);
						ObjListaDisciplina.adicionar(p);
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 3:
						ObjListaDisciplina.imprimir();
						std::cout<<"\n ok \n";
						getchar();
				break;
				default:
						std::cout<<"\n nao achei '=' \n";
						getchar();
		}
	}
}

void Principal::cadastraAluno(){
	int opt=-1;
	Aluno *p=nullptr;
	ElAluno *aux1=nullptr;
	std::string nome="";
	while(opt!=5){
		getchar();
		std::cout << "\033[2J\033[1;1H";
		std::cout<<"1- Cadastrar Aluno\n";
		std::cout<<"2- Associar Disciplinas pro aluno\n";
		std::cout<<"3- Listar Alunos:\n";
		std::cout<<"4- Incluir aluno na Discipinas:\n";
		std::cout<<"5- Sair\n";
		std::cin>>opt;
		switch(opt){
				case 1:
						p = new Aluno(contAluno++);
						std::cout<<"Nome do aluno:";
						std::cin>>nome;
						p->setNome(nome);
						ObjtListaAluno.adicionar(p);
						std::cout<<"\n ok \n";
						getchar();
				break;
				case 3:
						ObjtListaAluno.mostrar_lista();
						std::cout<<"\n ok \n";
						getchar();
				break;
				default:
						std::cout<<"\n nao achei '=' \n";
						getchar();
		}
	}
}
void Principal::Gravar(){
		getchar();
		char opt='n';
		std::cout<<"Gostaria de salvar? (s ou n)";
		std::cin>>opt;
		if(opt=='s'){
				ObjListaDisciplina.gravarDisc();
				ObjtListaDepartamento.gravarDep();
				ObjtListaUniversidade.gravarUniv();
				ObjtListaAluno.GravarAluno();
		}
		std::cout<<"Saindo...";
		getchar();
}
void Principal::Recuperar(){
		getchar();
		char opt='n';
		std::cout<<"Gostaria de recuperar? (s ou n)";
		std::cin>>opt;
		if(opt=='s'){
				ObjListaDisciplina.recupereDisc();
				ObjtListaDepartamento.recuperarDep();
				ObjtListaAluno.RecuperarAluno();
				ObjtListaUniversidade.recuperarUniv();
		}
		std::cout<<"Saindo...";
		getchar();
}
