#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// 함수의 파라미터로 넣을 때 레퍼런스를 사용하면 복사를 하지 않아서 효율적!
void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	//int array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1,21,3,40,5 };

	// 복사가 일어나지 않게 하기 위해 레퍼런스 사용!
	for (auto& element : my_arr) {
		cout << element << " ";
	}
	cout << endl;

	// 오름차순 정렬 -> algorithm 라이브러리에 들어가 있음
	sort(my_arr.begin(), my_arr.end());

	for (auto& element : my_arr) {
		cout << element << " ";
	}
	cout << endl;
	cout << endl;

	// 역순(내림차순) 정렬
	sort(my_arr.rbegin(), my_arr.rend());

	for (auto& element : my_arr) {
		cout << element << " ";
	}

	//my_arr = { 0,1,2,3,4 };
	//my_arr = { 0,1,2, };

	//cout << my_arr[0] << endl;
	//cout << my_arr.at(10) << endl;

	//printLength(my_arr);

	return 0;
}