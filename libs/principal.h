#pragma once 
#include "universidade.h"
#include "pessoa.h"
#include "departamento.h"
class Principal{
	private:
			int anoH,diaH,mesH;
			Pessoa Andre;
			Pessoa Aonaldinho;
			Pessoa Mangalhos;
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
