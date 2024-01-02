#include "Log.h"
#include <iostream>
using namespace std;

void InitLog()
{
	Log("Initializing log");
}

void Log(const char* message)
{
	cout << message << endl;
}