#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

#define ANO 360
#define MES 30

using namespace std;

//Variáveis
int opcao = -1;
int diaNascimento, mesNascimento, anoNascimento, numeroDeDias, diaAtual, mesAtual, anoAtual;
int totalDeAnos, diasAntesNascimento, diasAnoAtual;

void mostrarDias()
{
	cout << "=========================\n";
	cout << "==== NUMERO DE DIAS =====\n";
	cout << "=========================\n";
	
	cout << "O numero de dias e:  " << numeroDeDias << "\n";
}

void calcularDias() 
{
	cout << "\n\Digite o dia de Nascimento: ";
	cin >> diaNascimento;
	
	cout << "\n\Digite o mes de Nascimento: ";
	cin >> mesNascimento;
	
	cout << "\n\Digite o ano de Nascimento: ";
	cin >> anoNascimento;
	
	cout << "\n\Digite o ano Atual: ";
	cin >> anoAtual;
	
	totalDeAnos = (anoAtual - anoNascimento) * ANO;
	diasAntesNascimento = (MES * (mesNascimento - 1)) + (diaNascimento - 1);
	diasAnoAtual = (MES * (mesAtual - 1) + diaAtual - 1);
	
	
	numeroDeDias = (totalDeAnos - diasAntesNascimento) + diasAnoAtual;
		
	mostrarDias();	
}

int main ()
{		
	cout << "ATIVIDADES (7)\n";
	
	cout << "=======================================================================\n";
	cout << "============= CALCULAR O NUMERO DE DIAS QUE UMA PESSOA VIVEU ==========\n";
	cout << "=======================================================================\n";

	 while (opcao != 0) 
	 {
        printf("[1] Calcular ?\n");
		printf("[0] Sair\n");
        scanf("%d", &opcao);
		        
        switch (opcao) 
		{
            case 1:
                calcularDias();
            break;
            case 0:            	
                return 0;
            break;
        } 
	}
	return 0;
}
