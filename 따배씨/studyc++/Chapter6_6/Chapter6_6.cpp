#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//char myString[] = "string";

	/*for (int i = 0; i < 7; ++i)
	{
		cout << (int)myString[i] << endl;
	}*/

	//cout << sizeof(myString) / sizeof(myString[0]) << endl;

	char source[] = "Copy this!";
	char dest[50];
	strcpy_s(dest,50, source);

	cout << source << endl;
	cout << dest << endl;

	//strcat()
	//strcmp() 

	/*strcat_s(dest, source);
	cout << source << endl;
	cout << dest << endl;*/

	cout << strcmp(source, dest) << endl;

	return 0;
}