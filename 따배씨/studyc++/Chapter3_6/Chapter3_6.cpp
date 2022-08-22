#include <iostream>

int main()
{
	using namespace std;

	// logical Not 
	//bool x = true;

	//cout << !x << endl;

	// logical AND &&
	/*bool x = true;
	bool y = false;

	cout << (x && y) << endl;*/

	/*bool hit = true;
	int health = 10;

	if (hit = true && health < 20)
	{
		cout << "die " << endl;
	}
	else
		health -= 20;*/

	// logical OR ||
	/*bool x = true;
	bool y = false;

	cout << (x || y) << endl;*/

	/*int x = 5;
	int y = 7;

	if (x != y)
	{
		cout << " x does not equal y" << endl;
	}
	else
		cout << " x equals y" << endl;*/

	/*int v = 1;

	if (v == 0 || v == 1)
		cout << "v is 0 or 1" << endl;*/

	//int x = 2;
	//int y = 2;

	//if (x == 1 && y++ == 2)
	//{
	//	// do something
	//}

	//cout << y << endl;

	//bool x = true;
	//bool y = false;

	// De Morgan's Law
	//!(x && y);
	//!x && !y;
	
	// XOR
	// false false false
	// false true  true
	// true  false true
	// true  true  false

	bool v1 = true;
	bool v2 = false;
	bool v3 = false;

	bool r1 = v1 || v2 && v3;
	bool r2 = (v1 || v2) && v3;

	cout << r1 << " " << r2 << endl;

	return 0;
}