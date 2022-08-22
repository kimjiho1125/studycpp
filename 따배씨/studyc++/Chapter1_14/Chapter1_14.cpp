#include <iostream>
#include <algorithm>

using namespace std;

//#define MY_NUMBER 9
//#define MAX(a,b) ((a>b) ? a : b)

#define LIKE_APPLE

int main()
{
#ifdef LIKE_APPLE
	cout << "Apple" << endl;
#else
	cout << "Orange" << endl;
#endif

	/*cout << std::max(1 + 3, 2) << endl;*/
	/*cout << MAX(1, 2) << endl;*/
	/*cout << MY_NUMBER << endl;*/

	return 0;
}