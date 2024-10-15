#include "../libs/principal.h"
#include <iostream>
	Principal::Principal(){
		Andre.Inicializa(19,12,2002,"Andre");
		Aonaldinho.Inicializa(19,12,2001,"Aonaldinho");	
		Mangalhos.Inicializa(19,12,2000,"Mangalhos");
		UTFPR.setUniversidade("UTFPR");
		Princeton.setUniversidade("Princeton");
		Cambridge.setUniversidade("Cambridge");
		DAINF.setNome("DAINF");
		COMORG.setNome("COMORG");
		ELEG.setNome("ELG");
		UTFPR.setDepartamento(&COMORG,1);
		UTFPR.setDepartamento(&DAINF,0);
		Princeton.setDepartamento(&COMORG,0);
		Cambridge.setDepartamento(&ELEG,0);
		Aonaldinho.setUnivFiliado(&Princeton);
		Mangalhos.setUnivFiliado(&Cambridge);
		Andre.setUnivFiliado(&UTFPR);
		Andre.setDeptFiliado(&DAINF);
		Mangalhos.setDeptFiliado(&ELEG);
		Aonaldinho.setDeptFiliado(&COMORG);
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
		Andre.OndeTrabalha();    
		Aonaldinho.OndeTrabalha();
		Mangalhos.OndeTrabalha();
		UTFPR.imprime();
}
	
