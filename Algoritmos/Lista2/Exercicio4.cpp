#include <iostream>
using namespace std;

#define TIPO_OPERACAO_DEPOSITO 0
#define TIPO_OPERACAO_SAQUE 1

int main()
{	
	//Variáveis
	int numeroConta;
	double saldoConta = 0;
	int tipoOperacao = -1;
	double valorOperacao = 0;	
	double novoSaldo = 0;
				
	//Entrada
	cout << "Informe o numero da conta: ";
	cin >> numeroConta;
	
	cout << "Informe o saldo atual da conta: ";
	cin >> saldoConta;
	
	cout << "Informe o tipo da operacao. (Deposito = 0. Saque = 1) :";
	cin >> tipoOperacao;
	
	cout << "Informe o valor da operacao: ";
	cin >> valorOperacao;	
		
	//Processamento
	if(tipoOperacao == TIPO_OPERACAO_DEPOSITO) 
		novoSaldo = saldoConta + valorOperacao;
	else if(tipoOperacao == TIPO_OPERACAO_SAQUE) 
		novoSaldo = saldoConta - valorOperacao;
	else 
		return 0;				
					
	//Saida	
	cout << "Novo Saldo e: R$ " << novoSaldo;
	if(novoSaldo < 0)
		cout << "conta estourada";
	
    return 0;
}
