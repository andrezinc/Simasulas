#pragma once 
#include "universidade.h"
#include "pessoa.h"
#include "departamento.h"
#include "professor.h"
#include "aluno.h"
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
	public:
			Principal();
			~Principal();
			void Execute();
};
