#pragma once 
#include "listauniversidade.h"
#include "listadisciplina.h"
#include "listadepartameto.h"
#include "universidade.h"
#include "pessoa.h"
#include "departamento.h"
#include "professor.h"
#include "aluno.h"
#include "disciplina.h"
class Principal{
	private:
			int anoH,diaH,mesH;
			int contAluno;
			int contDisciplina;
			int contUniversidade;
			int contDepartamento;
			ListaAlunos ObjtListaAluno;
			ListaDepartamento ObjtListaDepartamento;
			ListaUniversidade ObjtListaUniversidade;
			listaDisciplina ObjListaDisciplina;
	public:
			Principal();
			~Principal();
			void menu();
			void cadastraUni();
			void cadastraDep();
			void cadastraDisc();
			void cadastraAluno();
			void cadastraProfessor();
			void Execute();
			void Gravar();
			void Recuperar();
};
