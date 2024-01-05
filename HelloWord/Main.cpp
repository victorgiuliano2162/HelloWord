#include <iostream>
#include "Log.h"
#include "Math.h"

#define LOG(x) std::cout << x << std::endl;


using namespace std;



// extern int s_Variable; //Pelo que entendi aqui e fica a d�vida, static s� se aplicar� a fun��es, ainda que compile, n�o conseguirei executar o programa com vari�veis est�ticas (PRECISO CONFERIR)

static void Increment(int* value)
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
	player.Move( 1, -1);


	cin.get();
}