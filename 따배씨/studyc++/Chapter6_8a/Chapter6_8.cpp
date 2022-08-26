#include <iostream>

using namespace std;

void printArray(int array[])
{
	cout << sizeof(array) << endl; 
}

int main()
{
	int array[5] = { 9,7,5,3,1 };

	/*cout << array[0] << " " << array[1] << endl;
	cout << array << endl;
	cout << &(array[0]) << endl;

	cout << *array << endl;

	char name[] = "Jack Jack";
	cout << *name << endl;*/

	cout << sizeof(array) << endl;

	int *ptr = array;

	cout << sizeof(ptr) << endl;

	printArray(array);

	return 0;
}