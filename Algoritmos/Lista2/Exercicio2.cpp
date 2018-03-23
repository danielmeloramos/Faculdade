# include <iostream>
using namespace std;

int main()
{	
	//Variáveis
	int nota = 0;
	char conceito;
		
	//Entrada
	cout << "Informe a nota do aluno: ";
	cin >> nota;
				
	//Processamento
	if (nota >= 0 && nota <= 39)
		conceito = 'E';
	else if (nota >= 40 && nota <= 59)
		conceito = 'D';
	else if (nota >= 60 && nota <= 75)
		conceito = 'C';	
	else if (nota >= 76 && nota <= 89)
		conceito = 'B';
	else
		if (conceito >= 90 && nota <= 100)
			conceito = 'A';
		
	//Saida	
	cout << "Conceito: " << conceito;
	cout << "\nNota: " << nota;

    return 0;
}
