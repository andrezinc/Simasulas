#include "../libs/disciplina.h"
#include <string>
Disciplina::Disciplina():
id(0),
pDetoAsso(nullptr),
nome(""){
}
Disciplina::Disciplina(int i,std::string n){
		id=i;
		nome=n;
		pDetoAsso=nullptr;
}
Disciplina::~Disciplina(){
		pDetoAsso=nullptr;
}
void Disciplina::SetId(int i){
	id=i;
}
int Disciplina::getId(){
		return id;
}
void Disciplina::setNome(std::string n){
		nome=n;
}
std::string Disciplina::getNome(){
		return nome;
}
void Disciplina::setDepartamento(Departamento* d){
		pDetoAsso=d;
		pDetoAsso->incluaDiscplin(this);
}
Departamento* Disciplina::getDepartamento(){
		return pDetoAsso;
}
void Disciplina::IncluiAluno(Aluno* aluno){
		ObjLalunos.adicionar(aluno);
}
void Disciplina::imprime(){
		ObjLalunos.mostrar_lista();
}
