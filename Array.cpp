//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-18
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-18
*/

#include <iostream>
#include<string>
#include "Array.h"

using namespace std;

void Tarray();
void Tforloop();
void Tstrfor();
void mulArray();

void Array() {
	//�ε��� : �ڷ����� ���� �����͸� ������ ��
	//�ε��� ���� : �迭�� ����(n)-1

	/*
	�迭�� ����� �ʱ�ȭ
	int arr1[5] = {1,2,3,4,5};
	int arr2[] = {1,2,3,4,5};
	int arr3[]{1,2,3,4,5};
	*/
	mulArray();

	
}

void Tarray() {
	int arr1[5];
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	arr1[4] = 5;

	int arr2[6] = { 1,2,3,4,5,6 };

	int arr3[] = { 1,2,3,4,5,6 };

	int arr4[]{ 1,2,3,4,5,6,7,8,9 };

	cout << arr4 << endl;
	cout << "arr4[3] = " << arr4[3] << endl;
	cout << endl;

	for (int i = 0; i < (sizeof(arr4) / sizeof(arr4[0])); i++) {
		cout << "arr4[" << i << "] = " << arr4[i] << endl;
	}
}

void Tforloop() {
	int arr1[]{ 10,20,30,40,50 };
	for (int i : arr1) {
		cout << "i = " << i << endl;
	}
}

void Tstrfor() {
	string nos;
	getline(cin, nos);
	for (char c : nos) {
		if (c == '-') continue;
		cout << c;
	}
	cout << endl;
}

void mulArray() {
	int Arr1[3][2];
	Arr1[0][0] = 1;
	Arr1[0][1] = 2;
	Arr1[1][0] = 3;
	Arr1[1][1] = 4;
	Arr1[2][0] = 5;
	Arr1[2][1] = 6;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cout << Arr1[i][j] << "\t";
		}
		cout << endl;
	}

}