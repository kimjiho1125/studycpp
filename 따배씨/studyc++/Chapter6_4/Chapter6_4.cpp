#include <iostream>
#include <algorithm>

using namespace std;

void printArray(const int array[],int length)
{
	for (int index = 0; index < length; ++index)
	{
		cout << array[index] << " ";
	}
	cout << endl;
}

int main()
{
	const int length = 5;

	int array[length] = { 3,5,2,1,4 };

	printArray(array, length);

	for (int startIndex = 0; startIndex < length; ++startIndex)
	{
		int smallesetIndex = startIndex;
		for (int currentIndex = startIndex + 1; currentIndex < length; ++currentIndex)
		{
			if (array[smallesetIndex] > array[currentIndex])
				smallesetIndex = currentIndex;
		}
		int temp = array[startIndex];
		array[startIndex] = array[smallesetIndex];
		array[smallesetIndex] = temp;
	}
	
	printArray(array, length);

	return 0;
}