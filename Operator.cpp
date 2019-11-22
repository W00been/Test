//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-18
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-18
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