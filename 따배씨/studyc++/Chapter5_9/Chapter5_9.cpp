#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

//unsigned int PRNG()
//{
//	static unsigned int seed = 5523;
//	
//	seed = 825.729 * seed + 2396403;
//
//	return seed % 32768;
//}

int main()
{
	//std::srand(5323); //seed
	/*std::srand(static_cast<unsigned int>(std::time(0)));

	for (int count = 1; count <= 100; ++count)
	{
		cout << rand() % 4 + 5 << '\t';

		if (count % 5 == 0) cout << endl;
	}*/

	std::random_device rd;
	std::mt19937 mesenne(rd()); // create a mesenne twister
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20; ++count)
	{
		cout << dice(mesenne) << endl;
	}

	return 0;
}