#include <iostream>
using namespace std;

#define TIPO_QUARTO_STANDARD 1
#define TIPO_QUARTO_STANDARD_VALOR 50.00

#define TIPO_QUARTO_LUXO 2
#define TIPO_QUARTO_LUXO_VALOR 80.00

#define TIPO_QUARTO_VIP 3
#define TIPO_QUARTO_VIP_VALOR 150.00

int main()
{	
	//Variáveis
	int numeroDaReserva;
	string nomeDoResponsavel;
	int quantidadeDeHospedes = 0;
	int tipoDeQuarto = -1;
	int quantidadeDeDiarias = 0;
	double valorConsumidoFrigobar = 0;
	int numeroDeServicoMassagemUtilizado = 0;
	double valorDeConsumoBar = 0;
	
	string tipoDeQuartoEscolhido;
	double valorDasDiarias = 0;
	double valorServicoDeMassagem = 0;
	double valorServicoDeFrigobar = 0;
	double valorServicoDeBar = 0;
	double valorISS = 0;
	double contaFinal = 0	
			
	//Entrada
	cout << "Digite o numero da reserva: ";
	cin >> numeroDaReserva;
	
	cout << "Digite o nome do responsavel: ";
	cin >> nomeDoResponsavel;
	
	cout << "Digite a quantidade de hospedes: ";
	cin >> quantidadeDeHospedes;
	
	cout << "Digite o tipo de quarto: (Standard - 1. Luxo - 2. VIP - 3)";
	cin >> tipoDeQuarto;

	cout << "Digite a quantidade de diarias: "
	cin << quantidadeDeDiarias;
		
	cout << "Digite o valor de consumo do Frigobar: "
	cin << valorConsumidoFrigobar;
	
	cout << "Digite o numero de servicos de massagem utilizados: "
	cin << numeroDeServicoMassagemUtilizado;
	
	cout << "Digite o valor de consumo no bar: "
	cin << valorDeConsumoBar;
	
	//Processamento
	
	
						
	//Saida	
	cout << "Numero da Reserva: " << numeroDaReserva;
	cout << "Nome do responsavel pela reserva: " << nomeDoResponsavel;
	cout << "Tipo de quarto: " << tipoDeQuartoEscolhido;
	cout << "Numero de dias: " << quantidadeDeDiarias;
	cout << "Valor das diarias: " << valorDasDiarias;
	cout << "Valor total do servico de massagem: " << valorServicoDeMassagem;
	cout << "Valor total do servico de frigobar: " << valorServicoDeBar;
	cout << "Valor total do servco do bar: " << valorDeConsumoBar;
	cout << "Valor ISS: " << valorISS;
	cout << "Conta Final: " << contaFinal;
	
    return 0;
}
