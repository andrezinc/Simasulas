#include "../libs/aluno.h"

Aluno::Aluno(int diaAtt,int mesAtt,int anoAtt,const char *nome):
Pessoa(diaAtt,mesAtt,anoAtt,nome){
		RA=0;
};
Aluno::Aluno()
:Pessoa()
{

}
Aluno::~Aluno(){

}
int Aluno::getRa(){
		return RA;
}
void Aluno::setRa(int ra){
		RA=ra;
}
