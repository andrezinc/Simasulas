#pragma once
#include "eldepartamento.h"

class ListaDepartamento{
		private:
				ElDepartamento *prim;
				ElDepartamento *ultm;
		public:
				ListaDepartamento();
				~ListaDepartamento();
				ElDepartamento *localizar(std::string n);
				void adicionar(Departamento *p);
				void imprimir();
				void gravarDep();
				void recuperarDep();
};
