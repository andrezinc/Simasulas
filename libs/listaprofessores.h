#pragma once
#include "listaelemento.h"
#include "professor.h"
class ListaProfessores{
		private:
				ListaElemento<Professor> ObjtListaProfessor;
		public:
				ListaProfessores();
				~ListaProfessores();
				void adiciona(Professor *p);
}
