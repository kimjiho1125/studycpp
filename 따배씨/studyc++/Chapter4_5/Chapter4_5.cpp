#include <iostream>
#include <typeinfo>

int main()
{
	using namespace std;

	/*int a = 123.0;
	cout << typeid(a).name() << endl;*/
	// numeric conversion
	cout << 5u - 10u;

	// int, unsigned int, long ,unsigned long,
	// long long, unsigned long long, float, double, long double

	// cout << static_cast<int>(c) << endl;

	int i = static_cast<int>(4.0);
}