#include "../libs/principal.h"
#include <iostream>
	Principal::Principal(){
		InicializaProfessor();
		InicializaAluno();
		InicializaUniversidade();
		InicializaDepartamento();
		InicializaAfiliacoes();
		Execute();
}
	Principal::~Principal(){

	}
void Principal::InicializaAluno(){
		Andrezin.Inicializa(19,12,2002,"Andrezinc");
}
void Principal::InicializaUniversidade(){
		UTFPR.setUniversidade("UTFPR");
		Princeton.setUniversidade("Princeton");
		Cambridge.setUniversidade("Cambridge");
}
void Principal::InicializaDepartamento(){
		DAINF.setNome("DAINF");
		COMORG.setNome("COMORG");
		ELEG.setNome("ELG");
		Matematica.setNome("Matematica");
		Algebra.setNome("Algebra");
		Tecnicas.setNome("Tecnicas de prog");
		Estrutura.setNome("Estrutura de dados");
	}
void Principal::InicializaProfessor(){
		Andre.Inicializa(19,12,2002,"Andre");
		Aonaldinho.Inicializa(19,12,2001,"Aonaldinho");	
		Mangalhos.Inicializa(19,12,2000,"Mangalhos");
}
void Principal::InicializaAfiliacoes(){
		Andrezin.setUniv(&UTFPR);
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
		Matematica.setDepartamento(&DAINF);
		Algebra.setDepartamento(&DAINF);
		Estrutura.setDepartamento(&DAINF);
		Tecnicas.setDepartamento(&DAINF);
}

void Principal::Execute(){	
		std::cin>>diaH>>mesH>>anoH;
		Andre.CalculaIdade(diaH,mesH,anoH);
		Andre.imprime();
		Aonaldinho.CalculaIdade(diaH,mesH,anoH);
		Aonaldinho.imprime();
		Mangalhos.CalculaIdade(diaH,mesH,anoH);
		Mangalhos.imprime();
		Andrezin.CalculaIdade(diaH,mesH,anoH);
		Andrezin.imprime();
		Andre.OndeTrabalha();    
		Aonaldinho.OndeTrabalha();
		Mangalhos.OndeTrabalha();
		Andrezin.imprimeEstuda();
		DAINF.listeDiscplina();
		DAINF.listeDiscplinaTras();
}
	
