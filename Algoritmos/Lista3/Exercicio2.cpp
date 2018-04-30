#include <iostream>

using namespace std;

main ()
{
	//Variáveis
	string nome, existeNotaZero = "Nao";
	double nota = 0, somatorioNotas = 0, media = 0;
			
	//Entrada 
	cout << "ATIVIDADES (2)";
	
	for(int i; i < 20; i++) 
	{		
		cout << "\nInforme o nome do aluno: ";
		cin >> nome;
		
		cout << "Informe a nota do aluno: ";
		cin >> nota;	
		
		//Processamento
		if(nota == 0) 
			existeNotaZero = "Sim";
		
		somatorioNotas += nota;		
	}
	
	//Processamento 2
	media = somatorioNotas / 20;
			
	//Saida
	cout << "Exite nota Zero: " << existeNotaZero;
	cout << "\nMedia da turma: " << media;
}
