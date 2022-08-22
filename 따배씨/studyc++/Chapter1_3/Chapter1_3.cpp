#include <iostream>

int main()
{
	int x = 1; // initialization
	x = x + 2; // assignment
	std::cout << x << std::endl; // #1 3출력

	int y = x; // 3할당
	std::cout << y << std::endl; // #2 3출력

	// is (x+y) l-value or r-value? r-value
	std::cout << x + y << std::endl; // #3 6출력
	
	std::cout << x << std::endl; // #4 3출력

	/*int z;
	std::cout << z << std::endl;*/ // #5 쓰레기값 출력

	return 0;
}