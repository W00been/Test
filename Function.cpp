//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-18
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-18
*/

#include <iostream>
#include<string>
#include "Function.h"

using namespace std;

int sumFunc(int, int);
void printFunc();
void paramValue();
void paramReference();
int cbv(int);
int cbr(int&);
void gugudan(int);

void function() {
	//�Լ��� �پ��� ����(����� �Լ� ���� >> main >> ����� �Լ� ����)

	//cout << "sumFunc = " << sumFunc(10, 20) << endl;

	//printFunc();

	//paramValue();
	//paramReference();

	//�Ű������� �������� ���� ���, �����Լ� ���
	gugudan(3);

	//���� �̸��� �پ��� �Ű����� ���� ����!
}

int sumFunc(int x, int y) {
	int sum = x + y;
	return sum;
}

void printFunc() {
	cout << "Hello World" << endl;
}

void paramValue() {
	// int cbv(int); // call-by-value
	// int cbv(int&); // call-by-reference

	int a = 10;
	int* b = &a;
	cout << "call-by-value" << endl;
	cout << cbv(a) << endl;
	cout << "a: " << a << endl;
}

void paramReference() {
	// int cbv(int); // call-by-value
	// int cbv(int&); // call-by-reference

	int a = 10;
	int* b = &a;
	cout << "call-by-reference" << endl;
	cout << cbr(a) << endl;
	cout << "a: " << a << endl;
}

int cbv(int x) {
	x = x + 1;
	return 0;
}

int cbr(int& x) {
	x = x + 1;
	return 0;
}

void gugudan(int x = 9) {
	for (int i = 2; i < 9; i++) {
		cout << x << "*" << i << "=" << (x*i) << endl;
	}
}
