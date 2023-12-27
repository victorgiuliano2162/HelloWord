#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void Log(const char* message)
{
	std::cout << message << std::endl;
}

void MultiplyAndLog(int a, int b)
{
	int result = Multiply(a * b);
	std::cout << result << std::endl;
}
