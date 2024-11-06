#pragma once 

#include "elemento.h"
template <class TIPO>
class ListaElemento{
		private:
			Elemento <TIPO> *Prim;
			Elemento <TIPO> *Ultm;

		public:
			ListaElemento(){
					Prim=nullptr;
					Ultm=nullptr;
			}
			~ListaElemento(){
					TIPO *Aux = Prim;
					TIPO *Aux1 = Aux;
					while(Aux!=nullptr){
							Aux1=Aux->getProx();
							delete Aux;
							Aux=Aux1;
					}
			}
			void adiciona(TIPO* pTipo){
					if(pTipo!=nullptr){
							 Elemento <TIPO> *pElemento= nullptr;
							pElemento = new Elemento<TIPO>;
							pElemento.setElement(pTipo);
						if(Prim==nullptr){
							Prim=pElemento;
							Ultm=pElemento;
						}
						else{
								pElemento->serTras(Ultm);
								Ultm->setFrente(pElemento);
								Ultm=pElemento;
						}
					}
					else{
							std::cerr<<"ERRO PONTEIRO";
					}
			}
			Elemento <TIPO> getPrim(){
					return Prim;
			}
};
