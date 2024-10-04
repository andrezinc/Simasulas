class Pessoa{
	private:
			char nomeP[50];
			int idadeP;
			int anoP;
			int mesP;
			int diaP;
	public:
			Pessoa(const char *nome,int anoAtt,int mesAtt,int diaAtt);
			void CalculaIdade(int diaH,int mesH,int anoH);
			int Get_Idade();
			void imprime();
};
