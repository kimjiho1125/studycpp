#include <iostream>

using namespace std;

int main() {
	// 2중 포인터 (2차원 행렬 구현시 많이 사용)
	//int* ptr = nullptr;
	//int** ptrptr = nullptr;

	//int value = 5;

	//ptr = &value;
	//ptrptr = &ptr;

	//cout << ptr << " " << *ptr <<  " " <<  & ptr << endl;
	//cout << ptrptr << " " << *ptrptr << " " << &ptrptr << endl;
	//cout << *(*ptrptr) << endl;

	// 2차원 행렬 구현
	const int row = 3;
	const int col = 5;

	const int s2da[row][col] =
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	//// row들에 대한 포인터 변수를 담을 배열 동적할당
	//int** matrix = new int* [row];

	//// 배열 동적할당
	//for (int r = 0; r < row; ++r) {
	//	matrix[r] = new int[col];
	//}

	//// 초기화
	//for (int r = 0; r < row; ++r)
	//	for (int c = 0; c < col; ++c)
	//		matrix[r][c] = s2da[r][c];

	//// 출력
	//for (int r = 0; r < row; ++r) {
	//	for (int c = 0; c < col; ++c)
	//		cout << matrix[r][c] << " ";
	//	cout << endl;
	//}

	////delete[] r1;
	////delete[] r2;
	////delete[] r3;
	////delete[] rows;

	//// delete
	//for (int r = 0; r < row; ++r) {
	//	delete[] matrix[r];
	//}
	//delete[] matrix;

	// 이중 포인터를 사용하지 않고 2차원 배열 구현
	// 1차원 배열을 2차원 배열처럼 사용하기

	int* matrix = new int[row * col];

	// 초기화
	for (int r = 0; r < row; ++r) {
		for (int c = 0; c < col; ++c) {
			matrix[c + col * r] = s2da[r][c];
		}
	}

	//출력
	for (int r = 0; r < row; ++r) {
		for (int c = 0; c < col; ++c)
			cout << matrix[c + col * r] << " ";
		cout << endl;
	}

	delete[] matrix;

	return 0;
}