#include "../libs/eldepartamento.h"

ElDepartamento::ElDepartamento():
pProx(nullptr)
,pAntes(nullptr)
,dep(nullptr){

}
ElDepartamento::~ElDepartamento(){
		pProx=nullptr;
		pAntes=nullptr;
		dep=nullptr;
}
void ElDepartamento::SetDepartamento(Departamento *d){
		dep=d;
}
void ElDepartamento::SetAntes(ElDepartamento *antes){
		pAntes=antes;
}
void ElDepartamento::SetProx(ElDepartamento *prox){
		pProx=prox;
}
ElDepartamento *ElDepartamento::GetProx(){
		return pProx;
}
ElDepartamento *ElDepartamento::GetAntes(){
		return pAntes;
}
Departamento *ElDepartamento::GetDepatamento(){
		return dep;
}
