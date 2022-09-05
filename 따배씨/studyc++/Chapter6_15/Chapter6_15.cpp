#include <iostream>

using namespace std;

void doSomething(const int &x)
{
	cout << x << endl;
}

int main()
{
	/*int x = 5;
	const int &ref_x = x;

	const int& ref_2 = ref_x;*/

	/*const int &ref_x = 3 + 4;

	cout << ref_x << endl;
	cout << &ref_x << endl;*/

	int a = 1;

	doSomething(a);
	doSomething(2);
	doSomething(a + 2);
	doSomething(3 * 2);


	return 0;
}