//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-18
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-18
*/

#include <iostream>
#include "Conditional.h"
using namespace std;

void Tif();
void Tswitch();

// 조건문(양자택일-if(조건식), if(조건식)else / 다자택일-if(조건식) else if(조건식), swith(조건식))
// switch : 비교대상이 되는 결과값과 선택사항이 많을 경우 사용


int num;

void Conditional() {
	cout << "input number: ";
	cin >> num;
	Tswitch();
}

void Tif() {
	if (num < 0) {
		cout << "num은 0보다 작다" << endl;
	}
	else if (num > 0) {
		cout << "num은 0보다 크다" << endl;
	}
	else if (num = 0) {
		cout << "num은 0보다 같다" << endl;
	}
}

void Tswitch() {
	switch (num) {
	case 100:
	case 90:
		cout << "수" << endl;
	case 80:
		cout << "우" << endl;
	case 70:
		cout << "미" << endl;
	default:
		cout << "재시험" << endl;
	}
}

void TternaryOperator() {

}