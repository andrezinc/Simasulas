#include "../libs/departamento.h"
#include <string.h>
Departamento::Departamento(const char *n){
		setNome("");	
}
Departamento::~Departamento(){

}
void Departamento::setNome(const char *n){
		strcpy(nomeDepartamentoP,n);
}
char *Departamento::getNome(){
		return nomeDepartamentoP;
}
