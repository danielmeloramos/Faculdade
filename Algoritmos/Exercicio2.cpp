#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#define PICOLE_CHOCOLATE 0
#define PICOLE_MORANGO 1
#define PICOLE_CREME 2

#define PICOLE_CHOCOLATE_VALOR 0.50
#define PICOLE_MORANGO_VALOR 0.60
#define PICOLE_CREME_VALOR 0.75

using namespace std;

//Variáveis
int opcao = -1;
int tipoPicole = -1;
int quantidadeVendidaTipoChocolate = 0, quantidadeVendidaTipoMorango = 0, quantidadeVendidaTipoCreme = 0;
double totalArrecado = 0;

void fazerPedido() 
{
	cout << "\n\Selecione o tipo do Picole: ";
	cin >> tipoPicole;
	
	switch(tipoPicole) {
		case PICOLE_CHOCOLATE:
			quantidadeVendidaTipoChocolate += 1;
			totalArrecado += PICOLE_CHOCOLATE_VALOR;
			cout << "Picole de chocolate selecionado. Valor R$ " << PICOLE_CREME_VALOR << "\n\n";
			break;
		case PICOLE_MORANGO:
			quantidadeVendidaTipoMorango += 1;
			totalArrecado += PICOLE_MORANGO_VALOR;
			cout << "Picole de morango selecionado. Valor R$ " << PICOLE_CREME_VALOR << "\n\n";
			break;
		case PICOLE_CREME:
			quantidadeVendidaTipoCreme += 1;
			totalArrecado += PICOLE_CREME_VALOR;
			cout << "Picole de creme selecionado. Valor R$ " << PICOLE_CREME_VALOR << "\n\n";
			break;
	}		
}

void finalizarPedido()
{
	cout << "=====================\n";
	cout << "= PEDIDO FINALIZADO =\n";
	cout << "=====================\n";
	
	cout << "Quantidade vendida do picole de chocolate:  " << quantidadeVendidaTipoChocolate << "\n";
	cout << "Quantidade vendida do picole de morango:  " << quantidadeVendidaTipoMorango << "\n";
	cout << "Quantidade vendida do picole de creme:  " << quantidadeVendidaTipoCreme << "\n";
		
	cout << "Valor total R$: " << totalArrecado << "\n";
}

int main ()
{		
	cout << "ATIVIDADES (2)\n";
	
	cout << "=======================================================================\n";
	cout << "= PICOLES: 0 = Chocolate (R$0,50) 1 = Morango (0,60) 2 = Creme (0,75) =\n";
	cout << "=======================================================================\n";

	 while (opcao != 0) 
	 {
        printf("[1] Fazer Pedido ?\n");
        printf("[2] Finalizar Pedido ?\n");
		printf("[0] Sair\n");
        scanf("%d", &opcao);
		        
        switch (opcao) 
		{
            case 1:
                fazerPedido();
            break;
            case 2:
            	finalizarPedido();
            	return 0;
            break;
            case 3:            	
                return 0;
            break;
        } 
	}
	return 0;
}
