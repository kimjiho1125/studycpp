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

	// �տ� 0�� ������ 8����
	int x = 012; 
	cout << x << endl;

	// �տ� 0x�� ������ 16����
	int y = 0xF;
	cout << y << endl;

	// �տ� 0b�� ������ 2����
	int z = 0b1010;
	cout << z << endl;

	// ���̳ʸ� ���ͷ��϶� ��������ǥ(')�� �����Ϸ��� �����Ѵ�. 
	int a = 0b1011'1111'1010;
	cout << a << endl;

	return 0;
}