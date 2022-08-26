#include <iostream>

using namespace std;

//const char* getName()
//{
//	return "JackJack";
//}

int main()
{
	//char name[] = "Jack Jack";
	int int_arr[5] = { 1,2,3,4,5 };
	char char_arr[] = "Hello, World!";
	const char* name = "Jack Jack";
	//const char* name2 = "Jack Jack2";

	cout << int_arr << endl;
	cout << char_arr << endl;
	cout << name << endl;

	//cout << (uintptr_t)name << endl;
	//cout << (uintptr_t)name2 << endl;


	return 0;
}