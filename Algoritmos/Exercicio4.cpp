#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#define SALARIO_FIXO 350.00
#define COMISSAO_FIXA 50.00
#define PORCENTAGEM_VALOR_DE_VENDAS 5

using namespace std;

//Variáveis
int opcao = -1;
string nomeVendedor;
int quantidadeDeCarrosVendidos = 0;
double valorTotalDasVendas = 0, salarioTotalDoVendedor = 0;

void apresentarDadosVendedor()
{
	cout << "=====================\n";
	cout << "= DADOS DO VENDEDOR =\n";
	cout << "=====================\n";
	
	cout << "Nome do vendedor:  " << nomeVendedor << "\n";
	cout << "Quantidade de carros vendido pelo vendedor:  " << quantidadeDeCarrosVendidos << "\n";
	cout << "Valor total das vendas pelo vendedor: R$ " << valorTotalDasVendas << "\n";
	cout << "Salario total do vendedor: R$ " << salarioTotalDoVendedor << "\n\n";

}

void verificarVendedor() 
{
	cout << "\n\Digite o nome do Vendedor: ";
	cin >> nomeVendedor;
		
	cout << "\n\Digite a quantidade de carros vendido pelo Vendedor: ";
	cin >> quantidadeDeCarrosVendidos;
	
	cout << "\n\Digite o valor total das vendas pelo Vendedor: ";
	cin >> valorTotalDasVendas;
	
	salarioTotalDoVendedor = SALARIO_FIXO + (COMISSAO_FIXA + quantidadeDeCarrosVendidos) + ((valorTotalDasVendas * PORCENTAGEM_VALOR_DE_VENDAS) / 100);
		
	apresentarDadosVendedor();	
}

int main ()
{		
	cout << "ATIVIDADES (3)\n";
	
	cout << "=======================================================================\n";
	cout << "===================== REVENDEDORA PICA PAU LTDA. ======================\n";
	cout << "=======================================================================\n";

	 while (opcao != 0) 
	 {
        printf("[1] Verificar os dados dos vendedores neste mes ?\n");
		printf("[0] Sair\n");
        scanf("%d", &opcao);
		        
        switch (opcao) 
		{
            case 1:
                verificarVendedor();
            break;
            case 3:            	
                return 0;
            break;
        } 
	}
	return 0;
}
