#pragma once 
#include "universidade.h"
#include "pessoa.h"
class Principal{
	private:
			int anoH,diaH,mesH;
			Pessoa Andre;
			Pessoa Aonaldinho;
			Pessoa Mangalhos;
			Universidade Cambridge;
			Universidade Princeton;
			Universidade UTFPR;
	public:
			Principal();
			~Principal();
			void Execute();
};
