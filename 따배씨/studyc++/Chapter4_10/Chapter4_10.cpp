#include <iostream>

using namespace std;

struct Person
{
	double height;
	float weight;
	int age;
	string name;

	//void print()
	//{
	//	cout << height << " " << weight << " " << age << " " << name;
	//	cout << endl;
	//}
};

struct Employee		// 2 + (2) + 4 + 8 = 16 // padding
{
	short	id;		// 2byte
	int		age;    // 4byte
	double	wage;   // 8byte
};

//Person getMe()
//{
//	Person me{ 2.0, 100.0, 20, "Jack Jack" };
//
//	return me;
//}

//struct Family
//{
//	Person me, mom, dad;
//};

//void printPerson(Person ps)
//{
//	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
//	cout << endl;
//}

int main()
{
	//Person me{ 2.0, 100.0, 20, "Jack Jack" };
	//Person me2(me); // 대입도 가능
	//me2.print();

	
	/*me.age = 20;
	me.name = "Jack Jack"*/
	//...
	//Person mom;
	//Person dad;

	/*Person me_from_func = getMe();
	me_from_func.print();*/

	Employee emp1;
	cout << sizeof(Employee) << endl;

	return 0;
}