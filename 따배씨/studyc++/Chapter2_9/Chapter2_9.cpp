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

	// const -> ��� �� ������ ����. �ٲ� �� ���� , �ݵ�� �ʱ�ȭ ����� �Ѵ�
	/*const double gravity{ 9.8 };*/

	//int number;
	//cin >> number;

	// constexpr -> ������ Ÿ�ӿ� �����Ǵ� ���
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