#pragma once 
#include "universidade.h"
#include "pessoa.h"
#include "departamento.h"
#include "professor.h"
#include "aluno.h"
#include "disciplina.h"
class Principal{
	private:
			int anoH,diaH,mesH;
			Professor Andre;
			Professor Aonaldinho;
			Professor Mangalhos;
			Aluno Andrezin;
			Universidade Cambridge;
			Universidade Princeton;
			Universidade UTFPR;
			Departamento DAINF;
			Departamento COMORG;
			Departamento ELEG;
			Disciplina Matematica;
			Disciplina Algebra;
			Disciplina Tecnicas;
			Disciplina Estrutura;
	public:
			Principal();
			~Principal();
			void InicializaProfessor();
			void InicializaAluno();
			void InicializaMateria();
			void InicializaDepartamento();
			void InicializaUniversidade();
			void InicializaAfiliacoes();
			void Execute();
};
