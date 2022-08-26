#include <iostream>

using namespace std;

int main()
{
	/*int value = 7;
	int* ptr = &value;

	cout << uintptr_t(ptr-1) << endl;
	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr+1) << endl;
	cout << uintptr_t(ptr+2) << endl;*/

	char name[] = "Jack Jack";

	const int n_name = sizeof(name) / sizeof(char);

	for (int i = 0; i < n_name; ++i)
	{
		cout << *(name + i);
	}

	return 0;
}