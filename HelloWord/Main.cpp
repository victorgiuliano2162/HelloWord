#include <iostream>
#include "Log.h"
#include "Math.h"

#define LOG(x) std::cout << x << std::endl

int main()
{
	int var = 400;
	void* ptr = &var;
	void* pointer = 0;
	LOG(ptr);
	MultiplyAndLog(16, 38);
	InitLog();
	Log("Hello World");


	char* buffer = new char[8];
	memset(buffer, 0, 8); //Os parametros são: a variável, o valor a ser inserido, os index os valores serão anexados

	delete[] buffer;

	std::cin.get();
}