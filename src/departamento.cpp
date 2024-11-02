#include "../libs/departamento.h"
#include "../libs/universidade.h"
#include "../libs/disciplina.h"
#include "../libs/listadisciplina.h"
#include <string>
Departamento::Departamento():
PUuniv(nullptr)
,nomeDepartamentoP("")
{
		plistaDisciplinas= new listaDisciplina();
}
Departamento::~Departamento(){
		if(plistaDisciplinas!=nullptr)
				delete plistaDisciplinas;
		PUuniv=nullptr;
}
void Departamento::setNome(std::string n)
{
		nomeDepartamentoP=n;
}
std::string Departamento::getNome(){
		return nomeDepartamentoP;
}
void Departamento::setUniv(Universidade *pu){
		PUuniv=pu;
}
void Departamento::incluaDiscplin(Disciplina *pd){
		plistaDisciplinas->adicionar(pd);
}
void Departamento::listeDiscplina(){
		plistaDisciplinas->imprimir();
}
