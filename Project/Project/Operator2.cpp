//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-13
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-13
*/

#include <iostream>
#include"Operator2.h"

using namespace std;

int x = 100;

void Operator2() {
	int x = 10;
	int y = 12;
	cout << " x : " << x << endl;
	cout << " x : " << ++x << endl;

	//++x, --x : 전위 연산
	//x++, x-- : 후위 연산

	x = 10;
	cout << " x : " << x << endl;
	cout << " x : " << x++ << endl;
	cout << x << endl;


	//&& 논리곱(AND)
	//|| 논리합(OR)
	//! 논리부정(NOT)

	bool c = true;
	bool d = false;

	cout << "c && d " << (c&&d) << endl;
	cout << "c || d " << (c||d) << endl;
	cout << "!c " << (!c) << endl;

	//조건식? 식1:식2
	cout << "result : " << ((x+ y) ? 10: 20) << endl;

	//비트연산
	//	&,|.^,~,<<,>>(2비트만큼 이동)

	//스코프 식별연산자(::x)
	//변수의 스코프(scope)에 따라 변수에 접근할 수 있는 위치가 결정된다. 


	cout << "x " << x << endl;
	cout << "::x" << ::x << endl;


	return;
}