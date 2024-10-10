#include "../libs/departamento.h"

Departamento::Departamento(const char *n){
		setNome(n);	
}
void Departamento::setNome(const char *n){
		int i=0;
		for(i=0;*(n+i)!='\0';i++){ 
				nomeDepartamentoP[i]=*(n+i);
		}
		nomeDepartamentoP[i]='\0';
}
char *Departamento::getNome(){
		return nomeDepartamentoP;
}
