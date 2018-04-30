#include <iostream>

using namespace std;

main ()
{
	//Variáveis
	string nome, nomeMaisAlto, nomeMaisNovo;
	int idade, maisAlto = 0, maisNovo = 200, totalPessoasComMaisDeTrintaECincoAnos = 0, idadeSomatorioPessoasMaiorUmEOitenta = 0, quantidadePessoasMaiorUmEOitenta = 0;
	double altura, mediaIdade;
			
	//Entrada 
	cout << "ATIVIDADES (3)";
	
	for(int i; i < 20; i++) 
	{		
		cout << "\nInforme o nome da pessoa: ";
		cin >> nome;
		
		cout << "Informe a idade da pessoa: ";
		cin >> idade;
		
		cout << "Informe altura da pessoa: ";
		cin >> altura;
		
		//Processamento
		if(altura > 1.80) {
			quantidadePessoasMaiorUmEOitenta++;
			idadeSomatorioPessoasMaiorUmEOitenta += idade;
			mediaIdade = idadeSomatorioPessoasMaiorUmEOitenta / quantidadePessoasMaiorUmEOitenta;
		} 
		
		if(idade > 35)
			totalPessoasComMaisDeTrintaECincoAnos++;
		
		if(altura > maisAlto) {			
			nomeMaisAlto = nome;
			maisAlto = altura;
		}
		
		if(idade < maisNovo) 
		{
			nomeMaisNovo = nome;
			maisNovo = idade;	
		}			
	}
		
	//Saida
	cout << "A média de idade das pessoas com mais de 1,80 de altura: " << mediaIdade;
	cout << "\nO total de pessoas com mais de 35 anos: " << totalPessoasComMaisDeTrintaECincoAnos;
	cout << "\nO nome do mais alto: " << nomeMaisAlto;
	cout << "\nO nome do mais novo: " << nomeMaisNovo;

}
