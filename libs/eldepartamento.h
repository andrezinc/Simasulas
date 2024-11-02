#pragma once
#include "departamento.h"

class ElDepartamento{
		private:
				ElDepartamento *pProx;
				ElDepartamento *pAntes;
				Departamento *dep;
		public:
				ElDepartamento();
				~ElDepartamento();
				void SetDepartamento(Departamento *d);
				void SetProx(ElDepartamento *prox);
				void SetAntes(ElDepartamento *antes);
				ElDepartamento* GetProx();
				ElDepartamento* GetAntes();
				Departamento* GetDepatamento();
};
