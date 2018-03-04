#include <iostream>
using namespace std;
main ( )
{
	//Entrada 
	int diaNascimento = 0;
	int mesNascimento = 0;
	int anoNascimento = 0;
	
	int diaAtual = 0;
	int mesAtual = 0;
	int anoAtual = 0;
		
	int idade = 0;
	
	cout << "ATIVIDADES (6)";
	
	cout << "\n\n Informe o dia da data de nascimento:\n ";
	cin >> diaNascimento;
	
	cout << "Informe o mes da data de nascimento:\n ";
	cin >> mesNascimento;
		
	cout << "Informe ano da data de nascimento:\n ";
	cin >> anoNascimento;
	
	cout << "Informe o dia atual:\n ";
	cin >> diaAtual;
	
	cout << "Informe o mes atual:\n ";
	cin >> mesAtual;
		
	cout << "Informe ano atual:\n ";
	cin >> anoAtual;
	
		
	//Processamento
	if ((mesNascimento > mesAtual) || ((mesNascimento == mesAtual) && (diaNascimento > diaAtual)))
       idade = anoAtual - anoNascimento - 1;
    else idade = anoAtual - anoNascimento;
		
	//Saida	
	cout << "Idade: " << idade;
	
}


