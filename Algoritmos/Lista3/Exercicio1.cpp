#include <iostream>
using namespace std;
main ()
{
	//Variáveis
	string nome;
	int sexo, totalHomens = 0, totalMulheres = 0;
			
	//Entrada 
	cout << "ATIVIDADES (1)";
	
	for(int i; i < 20; i++) 
	{		
		cout << "\n\Informe o nome da pessoa: ";
		cin >> nome;
		
		cout << "Informe o sexo da pessoa. (1 - Masculino. 2 - Feminino) ";
		cin >> sexo;	
		
		//Processamento
		if(sexo == 1) 
			totalHomens++;
		else
			totalMulheres++;
	}
	
	//Saida	
	cout << "Total de Homens: " << totalHomens;
	cout << "\nTotal de Mulheres: " << totalMulheres;
}
