#include <iostream>

using namespace std;

struct Something
{
	int v1;
	float v2;
};

struct Other
{
	Something st;
};

//void doSomething(int &n)
//{
//	n = 10;
//	cout << "In doSomething " << n << endl;
//}

int main()
{
	/*int n = 5;
	cout << n << endl;

	doSomething(n);
	cout << n << endl;*/

	Other ot;

	int& v1 = ot.st.v1;
	v1 = 1;

	int value = 5;
	int* const ptr = &value;
	int& ref = value;

	return 0;
}