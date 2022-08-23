#include <iostream>
#include "MyConstant.h"

using namespace std;

// forword declaration
//extern void doSomething();
//extern int a;

/*
	int g_x; // external linkage
	static int g_x' // internal linkage

	extern int g_z;
	extern const int g_z;

	int g_y(1);
	static int g_y(1);
	const int g_y(1);
*/

void doSomething();

int main()
{
	/*doSomething();

	cout << a << endl;*/

	cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;

	doSomething();

	return 0;
}