#include <iostream>
using namespace std;
main ( )
{
	//Entrada 
	double primeiroNumero = 0;
	double segundoNumero = 0;
	double terceiroNumero = 0;
	double mediaAritmetica = 0;
	
	cout << "ATIVIDADES (2)";
	
	cout << "\n\nDigite o primeiro numero: ";
	cin >> primeiroNumero;
	
	cout << "Digite o segundo numero: ";
	cin >> segundoNumero;
	
	
	cout << "Digite o terceiro numero: ";
	cin >> terceiroNumero;
		
	//Processamento
	mediaAritmetica = (primeiroNumero + segundoNumero + terceiroNumero) / 3;
	
	//Saida	
	cout << "Media Atitmetica: " << mediaAritmetica;

}

