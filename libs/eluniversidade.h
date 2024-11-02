#pragma once
#include "universidade.h"

class elUniversidade{
		private:
				elUniversidade* prox;
				elUniversidade* antes;
				Universidade *p;
		public:
				elUniversidade();
				~elUniversidade();
				void setProx(elUniversidade *p);
				void setAntes(elUniversidade *a);
				void setUniversidade(Universidade *u);
				Universidade *getUniv();
				elUniversidade *getProx();
				elUniversidade *getAntes();

};
