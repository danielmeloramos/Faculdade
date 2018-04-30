#include <iostream>

using namespace std;

main ()
{
	//Entrada 
	cout << "ATIVIDADES (4) \n";
	
	for (int i = 0; i <= 10; i++)
	{
		cout << "Tabuada do " << i << "\n";
		for (int j = 0; j <= 10; j++)
		{
			cout << i << " x " << j << " = " << i * j << "\n";
		}
	}
}
