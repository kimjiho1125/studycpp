#include <iostream>

int main()
{
	using namespace std;

	/*unsigned int n = 5u;
	long n2 = 5L;
	double d = 6.0e-10;*/

	// Decimal  : 0 1 2 3 4 5 6 7 8 9 10 ...
	// Octal	: 0 1 2 3 4 5 6 7 11 12 13 ...
	// Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10 11 ...

	// 앞에 0이 붙으면 8진수
	int x = 012; 
	cout << x << endl;

	// 앞에 0x가 붙으면 16진수
	int y = 0xF;
	cout << y << endl;

	// 앞에 0b가 붙으면 2진수
	int z = 0b1010;
	cout << z << endl;

	// 바이너리 리터럴일때 작은따옴표(')는 컴파일러가 무시한다. 
	int a = 0b1011'1111'1010;
	cout << a << endl;

	return 0;
}