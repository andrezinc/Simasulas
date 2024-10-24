#include "aluno.h"
class ElAluno{
	private:
			Aluno *alun;
			ElAluno *pAntes;
			ElAluno *pProx;
	public:
			ElAluno();
			~ElAluno();
			void setpAntes(ElAluno *p);
			ElAluno* getpAntes();
			void setpProx(ElAluno *p);
			ElAluno* getpProx();
			void setAluno(Aluno *p);
			Aluno *getAluno();
			char *getNome();
};
