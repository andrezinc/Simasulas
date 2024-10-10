#include "../libs/universidade.h"
Universidade::Universidade(const char *n){
	setUniversidade(n);
}
Universidade::~Universidade(){
}
void Universidade::setUniversidade(const char *n){
		int i=0;
		for(i=0;*(n+i)!='\0';i++){ 
				nomeUniversidadeP[i]=*(n+i);
		}
		nomeUniversidadeP[i]='\0';
}
char *Universidade::get_Nome(){
		return nomeUniversidadeP;
}
