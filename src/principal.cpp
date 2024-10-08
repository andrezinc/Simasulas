#include "../libs/principal.h"
#include <iostream>
	Principal::Principal(){
		Andre.Inicializa(19,12,2002,"a");
		Aonaldinho.Inicializa(19,12,2001,"Aonaldinho");	
		Mangalhos.Inicializa(19,12,2000,"Mangalhos");
		Execute();
}
void Principal::Execute(){	
		std::cin>>diaH>>mesH>>anoH;
		Andre.CalculaIdade(diaH,mesH,anoH);
		Aonaldinho.CalculaIdade(diaH,mesH,anoH);
		Mangalhos.CalculaIdade(diaH,mesH,anoH);
}
	
