#pragma once 
class Universidade;
class Disciplina;
class Departamento{
	private:
			Universidade *PUuniv;
			char nomeDepartamentoP[50];
			Disciplina *pDiscipPrim;
			Disciplina *pDiscipUltm;
	public:
			Departamento(const char* n="");
			~Departamento();
			void setNome(const char* n="");
			char* getNome();
			void setUniv(Universidade *pu);
			void incluaDiscplin(Disciplina* pd);
			void ExcluiDisciplin(Disciplina *pu);
			void listeDiscplina();
			void listeDiscplinaTras();
};
