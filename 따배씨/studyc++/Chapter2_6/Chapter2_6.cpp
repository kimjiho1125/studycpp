#include <iostream>

//bool isEqual(int a, int b)
//{
//	bool result = (a == b);
//
//	return result;
//}

int main()
{
	using namespace std;

	//bool b1 = true; // copy initialization
	//bool b2( false ); // direct initialization
	//bool b3{ true }; // uniform initialization
	//b3 = false;

	/*cout << !b1 << endl;
	cout << !b2 << endl;*/
	//cout << (true && true) << endl;
	//cout << (true && false) << endl;
	//cout << (false && true) << endl;
	//cout << (false && false) << endl;

	//cout << (true || true) << endl;
	//cout << (true || false) << endl;
	//cout << (false || true) << endl;
	//cout << (false || false) << endl;

	/*if (false)
	{
		cout << "This is true" << endl;
		cout << "True second line" << endl;
	}
	else
	{
		cout << "This is false" << endl;
	}*/

	//cout << std::boolalpha;
	//cout << isEqual(1, 1) << endl;
	//cout << isEqual(0, 3) << endl;

	//if (0) // 0이면 false 0 아니면 true
	//{
	//	cout << "True" << endl;
	//}
	//else {
	//	cout << "False" << endl;
	//}

	bool b;

	cin >> b;
	cout << std::boolalpha;
	cout << "Your input : " << b << endl;

	return 0;
}