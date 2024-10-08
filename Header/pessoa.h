class Pessoa{
	private:
			char nomeP[50];
			int idadeP;
			int anoP;
			int mesP;
			int diaP;
			void imprime();
	public:
			Pessoa(int diaAtt,int mesAtt,int anoAtt,const char *nome="");
			Pessoa();
			void Inicializa(int diaAtt=0,int mesAtt=0,int anoAtt=0,const char *nome="");
			void CalculaIdade(int diaH=0,int mesH=0,int anoH=0);
			int Get_Idade();
};
