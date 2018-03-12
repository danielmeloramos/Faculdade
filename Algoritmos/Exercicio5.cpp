#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#define DESCONTO_PREVICENDIA 10
#define DESCONTO_IMPOSTO_DE_RENDA 25

using namespace std;

//Variáveis
int opcao = -1;
string nomeFuncionario;
double salarioBruto, salarioLiquido, salarioDescontoPrevidencia;

void mostrarDadosFinais()
{
	cout << "===============================\n";
	cout << "= DADOS FINAIS DO FUNCIONARIO =\n";
	cout << "===============================\n";
	
	cout << "Nome do Funcionario:  " << nomeFuncionario << "\n";
	cout << "Salario Brunto do Funcionario:  " << salarioBruto << "\n";
	cout << "Desconto da Previdencia: " << DESCONTO_PREVICENDIA << "\n";
	cout << "Desconto do Imposto de Renda: " << DESCONTO_IMPOSTO_DE_RENDA << "\n\n";
	cout << "Salario Liquido: " << salarioLiquido << "\n\n";
}

void calcularSalario() 
{
	cout << "\n\Digite o nome do Funcionario: ";
	cin >> nomeFuncionario;
		
	cout << "\n\Digite o salario bruto do Funcionario: ";
	cin >> salarioBruto;
	
	salarioDescontoPrevidencia = salarioBruto - ((salarioBruto * DESCONTO_PREVICENDIA) / 100);
	salarioLiquido = salarioDescontoPrevidencia - ((salarioDescontoPrevidencia * DESCONTO_IMPOSTO_DE_RENDA) / 100);
		
	mostrarDadosFinais();	
}

int main ()
{		
	cout << "ATIVIDADES (5)\n";
	
	cout << "=======================================================================\n";
	cout << "===================== CALCULAR SALARIO DE FUNCIONARIOS ================\n";
	cout << "=======================================================================\n";

	 while (opcao != 0) 
	 {
        printf("[1] Calcular ?\n");
		printf("[0] Sair\n");
        scanf("%d", &opcao);
		        
        switch (opcao) 
		{
            case 1:
                calcularSalario();
            break;
            case 0:            	
                return 0;
            break;
        } 
	}
	return 0;
}
