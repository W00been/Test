//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-18
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-18
*/

#include "Operator.h"
#include<iostream>

using namespace std;

void Operator() {
	int x = 10;
	int y= 20;

	int result = 100;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "x + y = " << (x + y) << endl;
	cout << "x - y = " << (x - y) << endl;
	cout << "x * y = " << (x * y) << endl;
	cout << "x / y = " << (x / y) << endl;
	cout << "x % y = " << (x % y) << endl;

	result += x;
	cout << "result = " << result << endl;

	cout << "x >= y " << (x >= y) << endl;
	cout << "x <= y " << (x <= y) << endl;
	cout << "x == y " << (x == y) << endl;
	cout << "x != y " << (x != y) << endl;

	return;
}