#pragma once
#include <iostream>
template <class TIPO>

class Elemento{
		private:
			TIPO *Frente;
			TIPO *Tras;
			TIPO *Tipo;
		public:
			Elemento():
			Frente(nullptr),
			Tras(nullptr),
			Tipo(nullptr){
			}
			~Elemento(){
					Frente=nullptr;
					Tras=nullptr;
					Tipo=nullptr;
			}
			void setElement(TIPO *tipo){
					if(tipo!=nullptr)
						Tipo=tipo;
					else
						std::cout<<"Ponteiro Null nao add\n";
			}
			void setFrente(TIPO *frente){
					Frente=frente;
			}
			void serTras(TIPO *tras){
					Tras=tras;
			}
			TIPO getElement(){
					return Tipo;
			}
			TIPO getFrente(){
					return Frente;
			}
			TIPO getTras(){
					return Tras;
			}


};
