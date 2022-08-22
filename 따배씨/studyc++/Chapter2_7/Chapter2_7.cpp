#include <iostream>
#include <limits>

int main()
{
	using namespace std;

	char c1(65);
	//char c2('A'); // "Hello, World" // std::string

	//cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << endl;

	//// c style casting
	//cout << (int)'A' << endl;

	//// cpp style casting
	//cout << char(65) << endl;
	//cout << int('A') << endl;

	//cout << static_cast<char>(65) << endl;
	//cout << static_cast<int>('A') << endl;

	//char ch(97);
	//cout << ch << endl;
	//cout << static_cast<int>(ch) << endl;
	//cout << ch << endl;

	/*cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;*/

	//cout << sizeof(unsigned char) << endl;
	//cout << (int)numeric_limits<unsigned char>::max() << endl;
	//cout << (int)numeric_limits<unsigned char>::lowest() << endl;

	cout << int('\t') << endl;
	cout << "This is first line \asecond line \"";
	/*cout << "This is first line " << endl;
	cout << "second line";*/

	return 0;
}