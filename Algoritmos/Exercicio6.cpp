#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

//Variáveis
int opcao = -1;
double volume, raio;
float pi = 3.14159;


void mostrarVolume()
{
	cout << "=========================\n";
	cout << "= VALOR FINAL DO VOLUME =\n";
	cout << "=========================\n";
	
	cout << "O Valor do Volume e:  " << volume << "\n";
}

void calcularVolume() 
{
	cout << "\n\Digite o valor do Raio: ";
	cin >> raio;
	
	volume = 3 * (pi * pow(raio, 3)) / 4;
		
	mostrarVolume();	
}

int main ()
{		
	cout << "ATIVIDADES (6)\n";
	
	cout << "=======================================================================\n";
	cout << "===================== CALCULAR ESFERA DE RAIO R ================\n";
	cout << "=======================================================================\n";

	 while (opcao != 0) 
	 {
        printf("[1] Calcular ?\n");
		printf("[0] Sair\n");
        scanf("%d", &opcao);
		        
        switch (opcao) 
		{
            case 1:
                calcularVolume();
            break;
            case 0:            	
                return 0;
            break;
        } 
	}
	return 0;
}
