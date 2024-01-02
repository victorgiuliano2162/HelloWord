#include <iostream>
#include "Log.h"
#include "Math.h"

#define LOG(x) std::cout << x << std::endl

using namespace std;

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
	memset(buffer, 0, 8); //Os parametros s�o: a vari�vel, o valor a ser inserido, os index os valores ser�o anexados

	delete[] buffer;


	int a = 10; //vari�vel como qualquer outra
	int* b = &a; //um ponteiro que aponta para a
	int& c = a; //c � refer�ncia de a e b aponta para a
	LOG(a);
	LOG(b);
	LOG(c);

	c = 11;
	LOG(a);


	cin.get();
}