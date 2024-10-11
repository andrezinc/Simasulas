#include "../libs/principal.h"
#include <iostream>
	Principal::Principal(){
		Andre.Inicializa(19,12,2002,"Andre");
		Aonaldinho.Inicializa(19,12,2001,"Aonaldinho");	
		Mangalhos.Inicializa(19,12,2000,"Mangalhos");
		UTFPR.setUniversidade("UTFPR");
		Princeton.setUniversidade("Princeton");
		Cambridge.setUniversidade("Cambridge");
		COMORG.setNome("COMORG");
		ELEG.setNome("ELG");
		UTFPR.setDepartamento(&DAINF);
		Princeton.setDepartamento(&COMORG);
		Cambridge.setDepartamento(&ELEG);
		Aonaldinho.setUnivFiliado(&Princeton);
		Mangalhos.setUnivFiliado(&Cambridge);
		Andre.setUnivFiliado(&UTFPR);
		Execute();
}
	Principal::~Principal(){

	}
void Principal::Execute(){	
		std::cin>>diaH>>mesH>>anoH;
		Andre.CalculaIdade(diaH,mesH,anoH);
		Andre.imprime();
		Aonaldinho.CalculaIdade(diaH,mesH,anoH);
		Aonaldinho.imprime();
		Mangalhos.CalculaIdade(diaH,mesH,anoH);
		Mangalhos.imprime();
		Andre.OndeEstuda();
		Aonaldinho.OndeEstuda();
		Mangalhos.OndeEstuda();
}
	
