#include <iostream>
#include "Log.h"
#include "Math.h"

#define LOG(x) std::cout << x << std::endl;


using namespace std;



// extern int s_Variable; //Pelo que entendi aqui e fica a dúvida, static só se aplicará a funções, ainda que compile, não conseguirei executar o programa com variáveis estáticas (PRECISO CONFERIR)

static void Increment(int* value)
{
	(*value)++;
	//Ao usar ponteiros preciso que minha variável seja informada junto ao símbolo de referência &
}

void Increment2(int& value)
{
	value++;
	//Ao usar o símbolo de referência direto no parâmetro do método a variável pode ser informada sem alterações
}

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}

};

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


	int a = 5; //variável como qualquer outra
	int* b = &a; //um ponteiro que aponta para a
	int& c = a; //c é referência de a e b aponta para a
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
	player.Move( 1, -1);


	cin.get();
}