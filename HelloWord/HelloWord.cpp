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

int main()
{
	MultiplyAndLog(5, 8);
	MultiplyAndLog(15, 24);
	MultiplyAndLog(45, 72);

	std::cin.get();
}