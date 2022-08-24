#include <iostream>

using namespace std;

//void breakOrReturn()
//{
//	while (true)
//	{
//		char ch;
//		cin >> ch;
//
//		if (ch == 'b')
//			break;
//		if (ch == 'r')
//			return;
//	}
//	cout << "Hello" << endl;
//}

int main()
{

	//int count = 0;
	//while (true)
	//{
	//	cout << count << endl;
	//	if (count == 10) break;
	//	count++;
	//}

	//breakOrReturn();

	int count(0);

	while (true)
	{
		char ch;
		cin >> ch;

		cout << ch << " " << count++ << endl;

		if (ch == 'x')
			break;
	}

	return 0;
}