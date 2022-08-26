#include <iostream>
#include <typeinfo>

using namespace std;

struct Something
{
	int a, b, c, d; // 4 x 4 = 16
};

int main()
{
	int x = 5;
	double d = 1.0;

	int *ptr_x = &x;
	double* ptr_d = &d;

	//cout << typeid(ptr_x).name() << endl;

	/*cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << ptr_d << endl;
	cout << *ptr_d << endl;*/

	/*Something ss;
	Something* ptr_s;

	cout << sizeof(Something) << endl;
	cout << sizeof(ptr_s) << endl;*/



	return 0;
}