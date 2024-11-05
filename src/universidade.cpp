#include "../libs/universidade.h"
#include "../libs/listadepartameto.h"
Universidade::Universidade(int id)
:ListadeDepartameneto()
,idP(id)
{
		setUniversidade("");
}
Universidade::~Universidade(){
}
void Universidade::setUniversidade(std::string n){
		nomeUniversidadeP=n;
}
std::string Universidade::get_Nome(){
		return nomeUniversidadeP;
}
void Universidade::incluiDepartamento(Departamento *dep){
		ListadeDepartameneto.adicionar(dep);
}
void Universidade::imprime(){
		ListadeDepartameneto.imprimir();
}
void Universidade::setId(int id){
		idP=id;
}
int Universidade::getId(){
		return idP;
}
