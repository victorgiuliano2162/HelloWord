#include <iostream>
using namespace std;

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	cout << result << endl;
}


//Angular brackets <> indicam linhas de c�digo que est�o no nosso arquivo
//Quotes " " s�o usadas para acessar arquivos que est�o na m�quina "relatives"