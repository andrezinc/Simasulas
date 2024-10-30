#pragma once 
#include "elaluno.h"

class ListaAlunos{
		private:
			ElAluno* elPrim;
			ElAluno* elUltim;
			int qntAlunos;
		public:
			ListaAlunos();
			~ListaAlunos();
			void adicionar(Aluno *aluno);
			void mostrar_lista();
			int getqntAlunos();

};
