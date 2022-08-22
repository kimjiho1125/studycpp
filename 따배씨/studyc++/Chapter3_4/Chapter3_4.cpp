#include <iostream>

int main()
{
	using namespace std;

	//float a;

	//cout << sizeof(float);
	//cout << sizeof(a);

	// comma operator

	/*int x = 3;
	int y = 10;*/
	//int z = (++x, ++y);
	//++x;
	//++y;
	//int z = y;

	//int a = 1, b = 10;
	//int z;

	//z = (++a, a + b);

	//cout << z << endl;

	// conditional operator (arithmetric if)
	bool onSale = true;

	const int price = (onSale == true) ? 10 : 100;

	/*if (onSale)
		price = 10;
	else
		price = 100;*/

	cout << price << endl;

	return 0;
}