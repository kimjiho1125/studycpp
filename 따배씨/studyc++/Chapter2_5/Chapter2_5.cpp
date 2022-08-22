#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
	using namespace std;

	/*float f(3.14);*/ // 3.14 = 31.4 * 0.1
	/*double d(3.141592);
	long double ld(3.141592);*/

	/*cout << 3.14 << endl;
	cout << 31.4e-1 << endl;
	cout << 31.4e-2 << endl;
	cout << 31.4e1 << endl;
	cout << 31.4e1 << endl;*/

	/*double d1(1.0);
	double d2(0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);*/
	/*cout << d << endl;
	cout << std::setprecision(17);
	cout << d << endl;*/
	//cout << 1.0 / 3.0 << endl;

	/*cout << setprecision(17);

	cout << d1 << endl;
	cout << d2 << endl;*/

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	/*cout << posinf << endl;
	cout << neginf << endl;
	cout << nan << endl;*/

	cout << posinf << " " << std::isinf(posinf) << endl;
	cout << neginf << " " << std::isinf(neginf) << endl;
	cout << nan << " " << std::isnan(nan) << endl;

	return 0;
}