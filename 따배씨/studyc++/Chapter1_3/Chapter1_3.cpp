#include <iostream>

int main()
{
	int x = 1; // initialization
	x = x + 2; // assignment
	std::cout << x << std::endl; // #1 3���

	int y = x; // 3�Ҵ�
	std::cout << y << std::endl; // #2 3���

	// is (x+y) l-value or r-value? r-value
	std::cout << x + y << std::endl; // #3 6���
	
	std::cout << x << std::endl; // #4 3���

	/*int z;
	std::cout << z << std::endl;*/ // #5 �����Ⱚ ���

	return 0;
}