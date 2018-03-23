# include <iostream>
using namespace std;

int main()
{	
	//Variáveis
	string nome;
	int diariaCliente;
	double conta = 0;
	double diariaHotel = 60.00;
		
	//Entrada
	cout << "Nome do Cliente: ";
	cin >> nome;
	
	cout << "Quantidade diaria: ";
	cin >> diariaCliente;
				
	//Processamento
	if (diariaCliente > 5)
		 conta = diariaHotel + 5.50; 
	else if (diariaCliente == 5)
		conta = diariaHotel + 7.00;
	else
		conta = diariaHotel + 9.00;
	
	//Saida	
	cout << "Nome: " << nome;
	cout << "Conta: " << conta;

    return 0;
}
