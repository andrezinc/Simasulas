#pragma once 
#include "eluniversidade.h"

class ListaUniversidade{
		private:
				elUniversidade *prim;
				elUniversidade *ultm;
		public:
				ListaUniversidade();
				~ListaUniversidade();
				void adicionar(Universidade *p);
				void imprimir();
				elUniversidade* localizar(std::string n);
};
