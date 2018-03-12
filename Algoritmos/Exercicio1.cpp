#include <iostream>
using namespace std;
main ()
{
	//Variáveis
	double cotacao;
	double dolar = 0;
	double real = 0;
	
	//Entrada 
	cout << "ATIVIDADES (1)";
	
	cout << "\n\Cotacao do dolar: ";
	cin >> cotacao;
	
	cout << "Valor em dolares: ";
	cin >> dolar;
		
	//Processamento
	real = dolar * cotacao;
	
	//Saida	
	cout << "Quantia em real: " << real;
}
