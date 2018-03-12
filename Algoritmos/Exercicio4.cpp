#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

//Variáveis
int opcao = -1;
string marcaVeiculo;
int litrosConsumidos = 0;
double quilometragemInicial, quilometragemFinal, consumoFinal;

void imprimirRelatorio()
{
	cout << "===============================\n";
	cout << "= RELATORIO DADOS DO PERCURSO =\n";
	cout << "===============================\n";
	
	cout << "Marca do Veiculo:  " << marcaVeiculo << "\n";
	cout << "Quilometragem Inicial:  " << quilometragemInicial << "\n";
	cout << "Quilometragem Final: " << quilometragemFinal << "\n";
	cout << "Litros consumidos: " << litrosConsumidos << "\n\n";
	cout << "Consumo Final: " << consumoFinal << "\n\n";
}

void calcularTrajeto() 
{
	cout << "\n\Digite a marca do Veiculo: ";
	cin >> marcaVeiculo;
		
	cout << "\n\Digite a quilometragem inicial do veiculo: ";
	cin >> quilometragemInicial;
	
	cout << "\n\Digite a quilometragem final do veiculo: ";
	cin >> quilometragemFinal;
	
	cout << "\n\Digite a quantidade de litros consumidos: ";
	cin >> litrosConsumidos;
		
	consumoFinal =  (quilometragemFinal - quilometragemInicial) / litrosConsumidos;
		
	imprimirRelatorio();	
}

int main ()
{		
	cout << "ATIVIDADES (4)\n";
	
	cout << "=======================================================================\n";
	cout << "===================== CALCULAR TRAJETO DE VEICULOS. ===================\n";
	cout << "=======================================================================\n";

	 while (opcao != 0) 
	 {
        printf("[1] Calcular ?\n");
		printf("[0] Sair\n");
        scanf("%d", &opcao);
		        
        switch (opcao) 
		{
            case 1:
                calcularTrajeto();
            break;
            case 0:            	
                return 0;
            break;
        } 
	}
	return 0;
}
