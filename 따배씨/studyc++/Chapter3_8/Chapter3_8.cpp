#include <iostream>
#include <bitset>

int main()
{
	using namespace std;

	// cout cin ���� ����ϴ� << , >> �ʹ� �ٸ� �ǹ��̴�. 
	// << left shift
	// >> right shift
	// ~ , & , | , ^

	unsigned int a = 3;

	cout << std::bitset<4>(a) << endl;

	unsigned int b = a << 2;

	cout << std::bitset<4>(b) << " " << b << endl;

	return 0;
}