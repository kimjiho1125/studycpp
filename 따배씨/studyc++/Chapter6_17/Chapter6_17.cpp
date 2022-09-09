#include <iostream>
#include <limits>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> fibonacci = { 0,1,1,2,3,5,8,13,21,34,55,89 };

	//// change array values
	//for (auto& number : fibonacci)
	//	number *= 10;

	//// output
	//for (const auto &number : fibonacci)
	//	cout << number << " ";
	//cout << endl;

	int max_number = std::numeric_limits<int>::lowest();

	for (const auto& n : fibonacci)
		max_number = std::max(max_number, n);

	cout << max_number << endl;

	return 0;
}