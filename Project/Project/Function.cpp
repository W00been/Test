//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-18
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-18
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
	//함수의 다양한 형태(사용자 함수 선언 >> main >> 사용자 함수 정의)

	//cout << "sumFunc = " << sumFunc(10, 20) << endl;

	//printFunc();

	//paramValue();
	//paramReference();

	//매개변수를 지정하지 않은 경우, 지정함수 사용
	gugudan(3);

	//같은 이름의 다양한 매개변수 정의 가능!
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
