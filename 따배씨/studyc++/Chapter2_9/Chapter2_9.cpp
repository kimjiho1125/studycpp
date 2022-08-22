#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

//void printNumber(const int my_number)
//{
//	cout << my_number << endl;
//}

int main()
{
	/*printNumber(123);*/

	// const -> 상수 즉 고정된 숫자. 바꿀 수 없다 , 반드시 초기화 해줘야 한다
	/*const double gravity{ 9.8 };*/

	//int number;
	//cin >> number;

	// constexpr -> 컴파일 타임에 결정되는 상수
	//constexpr int my_const(123);

	//const int special_number(number);

	//const int price_per_item = 30;

	//int num_item = 123;
	//int price = num_item * price_per_item;
	
	double radius;
	cin >> radius;

	double circumference = 2.0 * radius * constants::pi;

	return 0;
}