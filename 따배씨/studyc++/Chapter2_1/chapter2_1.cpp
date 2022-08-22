#include <iostream>

int main()
{
	using namespace std;

	bool bValue = true;
	char chValue = 65;
	float fValue = 3.141592f;
	double dValue = 3.141592;

	int a(123);		// direct initialization
	int b{ 123 };	// uniform initialization

	return 0;
}