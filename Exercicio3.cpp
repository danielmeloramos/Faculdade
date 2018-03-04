#include <conio.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main( void )
{
   //Entrada 
	double base = 0;
	double altura = 0;
	double area = 0;
	
	cout << "ATIVIDADES (3)";
	
	cout << "\n\nDigite a base do Retangulo: ";
	cin >> base;
	
	cout << "Digite a altura do Retangulo: ";
	cin >> altura;
	
	//Processamento
	area = base * altura;
	
	//Saida	
	cout << "Area do Retangulo: " << area;   
}
