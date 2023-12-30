#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}


//Angular brackets <> indicam linhas de código que estão no nosso arquivo
//Quotes " " são usadas para acessar arquivos que estão na máquina "relatives"