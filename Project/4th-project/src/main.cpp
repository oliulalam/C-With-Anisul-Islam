#include <iostream>
#include "MyClass.h"
using namespace std;

//constant function niye kaj 

int main()
{
	const MyClass ob;
	ob.display();

	//constant object shudhu constant member ke call korte parbe. kon non-constant ke call korte parbe na 😁😁😁- 

	MyClass tb;
	tb.display1();
}