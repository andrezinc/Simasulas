#include "../libs/disciplina.h"
#include <string>
Disciplina::Disciplina(int i):
idP(i),
nome(""),
pDetoAsso(nullptr){
}
Disciplina::~Disciplina(){
		pDetoAsso=nullptr;
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
int Disciplina::getId(){
		return idP;
}
