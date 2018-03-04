#include <math.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main( void )
{
   //Entrada 
	float raio = 0;
	float area = 0;
	const float pi = 3.14159;
	
	cout << "ATIVIDADES (5)";
	
	cout << "\n\nInforme o raio do circulo: ";
	cin >> raio;
	
	
	//Processamento
	area = pi*pow(raio, 2);
	
	//Saida	
	cout << "Area do circulo: " << area;   
}
