#include <iostream>
#include "Log.h"
#include "Math.h"

#define LOG(x) std::cout << x << std::endl

using namespace std;

void Increment(int* value)
{
	(*value)++;
	//Ao usar ponteiros preciso que minha vari�vel seja informada junto ao s�mbolo de refer�ncia &
}

void Increment2(int& value)
{
	value++;
	//Ao usar o s�mbolo de refer�ncia direto no par�metro do m�todo a vari�vel pode ser informada sem altera��es
}

class Player
{
	int x, y;
	int speed;

};

void Move(Player& player, int xa, int ya)
{
	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

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


	int a = 5; //vari�vel como qualquer outra
	int* b = &a; //um ponteiro que aponta para a
	int& c = a; //c � refer�ncia de a e b aponta para a
	LOG(a);
	LOG(b);
	LOG(c);

	c = 11;
	LOG(a);

	int a1 = 5;
	Increment(&a1);
	LOG(a1);
	Increment2(a1);
	LOG(a1);
	LOG("Fim");


	Player player;
	player.x = 7;
	Move(player, 1, -1);

	cin.get();
}