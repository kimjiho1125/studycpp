#include <iostream>

int main()
{
	using namespace std;

	enum class Color
	{
		RED,
		BLUE,
	};

	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color color = Color::RED;
	Fruit fruit = Fruit::BANANA;

	/*if (color == fruit)
	{
		cout << "Color is fruit ?" << endl;
	}*/

	return 0;
}