#include <iostream>


using namespace std;

int main()
{
	//int count = 0;

	/*while (count < 10)
	{
		cout << count << endl;
		count++;
	}*/

	/*unsigned int count = 10;

	while (count >= 0)
	{
		if (count == 0) cout << "zero";
		else cout << count << " ";

		count--;
	}*/

	int outer_count = 1;

	while (outer_count <= 5)
	{
		int inner_count = 1;
		while (inner_count <= outer_count)
		{
			cout << inner_count++ << " ";
		}
		cout << endl;
		++outer_count;
	}

	return 0;
}