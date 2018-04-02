# include <iostream>
using namespace std;

#define VIDRO_ELETRICO 500.00
#define AR_CONDICIONADO 2000.00
#define TRAVA_CENTRAL_E_ALARME 500.00
#define PINTURA_METALICA 1000.00
#define DIRECAO_HIDRAULICA 2500.00
#define DESCONTO 5

int main()
{	
	//Variáveis
	double valorInicialDoCarro = 0;
	int opcionais = -1;
	int pagamentoAVista = -1;
	double precoFinalDoCarro = 0;
	double valorComOpcionalBase = 0;
	double descontoAVista = 0;
			
	//Entrada
	cout << "Informe o valor inicial do carro: ";
	cin >> valorInicialDoCarro;
	
	cout << "Opcionais. Nao(0) Sim(1): ";
	cin >> opcionais;
	
	cout << "A vista. Nao(0) Sim(1): ";
	cin >> pagamentoAVista;
		
	//Processamento
	if(opcionais == 1)
		valorComOpcionalBase = VIDRO_ELETRICO + AR_CONDICIONADO + TRAVA_CENTRAL_E_ALARME + PINTURA_METALICA + DIRECAO_HIDRAULICA;
	
	if(pagamentoAVista == 1) 
	{
		descontoAVista = valorInicialDoCarro - ((valorInicialDoCarro * DESCONTO)/100);
		precoFinalDoCarro = (valorInicialDoCarro - descontoAVista)+ valorComOpcionalBase;
	}
	else 
	{
		precoFinalDoCarro = valorInicialDoCarro + valorComOpcionalBase;
	}
					
	//Saida	
	cout << "Valor final do carro, e: R$ " << precoFinalDoCarro;

    return 0;
}
