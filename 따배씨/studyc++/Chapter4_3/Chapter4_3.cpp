#include <iostream>

namespace a
{
	int my_var(10);
	int my_a(123);
}

namespace b
{
	int my_var(20);
	int my_b(123);
}

int main()
{
	using namespace std;
	/*using std::cout;
	using std::endl;*/

	//cout << "Hello" << endl;
	{
		using namespace a;
		cout << my_var << endl;
	}
	
	{
		using namespace b;
		cout << my_var << endl;
	}
	/*cout << my_a << endl;
	cout << my_b << endl;*/

	return 0;
}