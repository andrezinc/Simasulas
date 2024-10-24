#include "aluno.h"
class ElAluno{
	private:
			Aluno *alun;
			ElAluno *pPrim;
			ElAluno *pUltim;
	public:
			ElAluno();
			~ElAluno();
			void setpPrim(ElAluno *p);
			ElAluno* getpPrim();
			void setpUltim(ElAluno *p);
			ElAluno* getpUltim();
			void setAluno(Aluno *p);
			Aluno *getAluno();
			char *getNome();
};
