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
	
	cout << "ATIVIDADES (4)";
	
	cout << "\n\nDigite a base do Triangulo: ";
	cin >> base;
	
	cout << "Digite a altura do Triangulo: ";
	cin >> altura;
	
	//Processamento
	area = base * altura / 2;
	
	//Saida	
	cout << "Area do Triangulo: " << area;   
}
