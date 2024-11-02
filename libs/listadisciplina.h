#pragma once 
#include "elDisciplina.h"

class listaDisciplina{
		private:
				ElDisciplina *prim;
				ElDisciplina *ultm;
				int qnt;
		public:
				listaDisciplina();
				~listaDisciplina();
				void adicionar(Disciplina *disc);
				void imprimir();
				int getQnt();
				

};
