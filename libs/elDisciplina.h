#pragma once
#include "disciplina.h"
class ElDisciplina{
		private:
				ElDisciplina *prox;
				ElDisciplina *antes;
				Disciplina *disc;
	public:
				ElDisciplina();
				~ElDisciplina();
				void setDiscipilina(Disciplina *d);
				void setProx(ElDisciplina* p);
				void setAntes(ElDisciplina* a);
				Disciplina* getDisciplina();
				ElDisciplina *getProx();
				ElDisciplina *getAntes();

};
