#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

// �Լ��� �Ķ���ͷ� ���� �� ���۷����� ����ϸ� ���縦 ���� �ʾƼ� ȿ����!
void printLength(const array<int, 5>& my_arr)
{
	cout << my_arr.size() << endl;
}

int main()
{
	//int array[5] = { 1,2,3,4,5 };

	array<int, 5> my_arr = { 1,21,3,40,5 };

	// ���簡 �Ͼ�� �ʰ� �ϱ� ���� ���۷��� ���!
	for (auto& element : my_arr) {
		cout << element << " ";
	}
	cout << endl;

	// �������� ���� -> algorithm ���̺귯���� �� ����
	sort(my_arr.begin(), my_arr.end());

	for (auto& element : my_arr) {
		cout << element << " ";
	}
	cout << endl;
	cout << endl;

	// ����(��������) ����
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