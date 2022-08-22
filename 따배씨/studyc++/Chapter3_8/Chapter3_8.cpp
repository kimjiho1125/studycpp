#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// cout cin 에서 사용하는 << , >> 와는 다른 의미이다. 
	// << left shift
	// >> right shift
	// ~ , & , | , ^

	unsigned int a = 3;

	cout << std::bitset<4>(a) << endl;

	unsigned int b = a << 2;

	cout << std::bitset<4>(b) << " " << b << endl;

	return 0;
}