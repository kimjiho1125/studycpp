#include <iostream>
#include "MyConstant.h"

extern int a = 123;

void doSomething()
{
	using namespace std;

		cout << "In test.cpp " << Constants::pi << " " << &Constants::pi << endl;

}