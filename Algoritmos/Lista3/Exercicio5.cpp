#include <iostream>

using namespace std;

main ()
{
	//Variáveis
	string nomeVencedor, candidato1 = "Beutrano", candidato2 = "Ciclano", candidato3 = "Fulano";
	int escolhaCandidato = -1, quantidadeVotosCandidato1 = 0, quantidadeVotosCandidato2 = 0, quantidadeVotosCandidato3 = 0, quantidadeVotosNulo = 0, quantidadeVotosEmBranco = 0;
	double percentualCandidato1 = 0, percentualCandidato2 = 0, percentualCandidato3 = 0, percentualVotoNulo = 0, percentualVotoEmBranco = 0;
			
	//Entrada 
	cout << "ATIVIDADES (5)\n";
	cout << "1 = Beutrano. ";
	cout <<	"2 = Ciclano. ";
	cout <<	"3 = Fulano. ";
	cout <<	"5 = Voto nulo. ";
	cout <<	"6 = Voto em branco.";
	
	for(int i; i < 20; i++) 
	{		
		cout << "\nVote: ";
		cin >> escolhaCandidato;
		
		//Processamento
		switch (escolhaCandidato)
		{	
			case 1:
				quantidadeVotosCandidato1++;
				percentualCandidato1 = (quantidadeVotosCandidato1 * 100) / 20;
				break;
			case 2:
				quantidadeVotosCandidato2++;
				percentualCandidato2 = (quantidadeVotosCandidato2 * 100) / 20;
				break;
			case 3:
				quantidadeVotosCandidato3++;
				percentualCandidato3 = (quantidadeVotosCandidato3 * 100) / 20;
				break;
			case 5:
				quantidadeVotosNulo++;
				percentualVotoNulo = (quantidadeVotosNulo * 100) / 20;
				break;
			case 6:
				quantidadeVotosEmBranco++;
				percentualVotoEmBranco = (quantidadeVotosEmBranco * 100) / 20;
				break;
		}				
	}
	
	//Processamento 2
	if(percentualCandidato1 > percentualCandidato2 && percentualCandidato1 > percentualCandidato3) 
		nomeVencedor = candidato1;
	else if(percentualCandidato2 > percentualCandidato1 && percentualCandidato2 > percentualCandidato3)
		nomeVencedor = candidato2;
	else
		nomeVencedor = candidato3;
		
	//Saida
	cout << "Nome do vencedor da eleicao: " << nomeVencedor;
	cout << "\nPercentual de votos para o candidato " << candidato1 << " :" << percentualCandidato1 << "%";
	cout << "\nPercentual de votos para o candidato " << candidato2 << " :" << percentualCandidato2 << "%";
	cout << "\nPercentual de votos para o candidato " << candidato3 << " :" << percentualCandidato3 << "%";
	cout << "\nPercentual de votos nulos: " << percentualVotoNulo << "%";
	cout << "\nPercentual de votos em branco: " << percentualVotoEmBranco << "%";
}
