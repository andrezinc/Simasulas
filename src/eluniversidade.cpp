#include "../libs/eluniversidade.h"

elUniversidade::elUniversidade(){
		prox=nullptr;
		antes=nullptr;
		p=nullptr;
}
elUniversidade::~elUniversidade(){
		prox=nullptr;
		antes=nullptr;
		p=nullptr;
}
void elUniversidade::setProx(elUniversidade *p){
		prox=p;
}
void elUniversidade::setAntes(elUniversidade *a){
		antes=a;
}
void elUniversidade::setUniversidade(Universidade *u){
		p=u;
}
Universidade *elUniversidade::getUniv(){
		return p;
}
elUniversidade *elUniversidade::getProx(){
		return prox;
}
elUniversidade *elUniversidade::getAntes(){
		return antes;
}
