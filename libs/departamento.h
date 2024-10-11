#pragma once 
class Departamento{
	private:
			char nomeDepartamentoP[50];
	public:
			Departamento(const char* n="");
			~Departamento();
			void setNome(const char* n="");
			char* getNome();
};
