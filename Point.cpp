//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-19
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-19
*/

#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

//포인터 : 메모리 주소를 저장하고 있는 변수
int a = 10;
int* pa = &a; 

//& : 메모리 주소
//* : 데이터 값
void point() {
	cout << "a>>" << a << endl; // a의 값
	cout << "&a>>" << &a << endl;//a의 메모리 주소
	cout << "pa>>" << pa << endl;//pa의 값 = a의 메모리 주소
	cout << "&pa>>" << &pa << endl;//pa의 메모리 주소
	cout << "*&pa>>" <<*&pa << endl;//*& =>> X, a의 메모리 주소
	cout << "**&pa>>" << **&pa << endl;//*pa=>>pa가 가르키는 데이터 값
}

//포인터 변수의 메모리 크기
void sizeofpoint() {
	char c = 'A';
	short sh = 10;
	int i = 100;
	double d = 1.23;
	cout << "sizeof(c)>>" << sizeof(c)<< endl;
	cout << "sizeof(sh)>>" << sizeof(sh) << endl;
	cout << "sizeof(i)>>" << sizeof(i) << endl;
	cout << "sizeof(d)>>" << sizeof(d) << endl;

	char* pc = nullptr;
	pc = &c;
	short* psh = nullptr;
	psh = &sh;
	int * pi = nullptr;
	pi = &i;
	double* pd = nullptr;
	pd = &d;

	cout << "sizeof(pc)>>" << sizeof(pc) << endl;
	cout << "sizeof(psh)>>" << sizeof(psh) << endl;
	cout << "sizeof(pi)>>" << sizeof(pi) << endl;
	cout << "sizeof(pd)>>" << sizeof(pd) << endl;

}



//주소 이동 : 포인터를 이용해서 메모리 주소를 이동할 수 있다.
//short +1 = 2byte +1 >> 2byte 증가
//int +1 = 2byte +1 >> 4byte 증가
//double +1 = 2byte +1 >> 8byte 증가
void add() {
	short shv = 10;
	short* pshv = &shv;
	int iv = 100;
	int* piv = &iv;
	double dv = 1.23;
	double* pdv = &dv;

	cout << "pshv>>" << pshv << endl;
	cout << "piv>>" << piv << endl;
	cout << "pdv>>" << pdv << endl;

	cout << "pshv + 1>>" << pshv + 1 << endl;
	cout << "piv + 1>>" << piv + 1 << endl;
	cout << "pdv + 1>>" << pdv + 1 << endl;
 }



//배열에서 포인터
//배열 및 배열의 요소는 포인터를 이용하여 간접 접근할 수 있다.
void arr() {
	int iArr[] = { 10,20,30,40,50 };
	int* piArr = iArr;

	cout << "iArr>>" << iArr << endl;
	cout << "iArr+0>>" << iArr+0 << endl;
	cout << "iArr+1>>" << iArr+1 << endl;
	cout << "iArr+2>>" << iArr+2 << endl;

	cout << "piArr>>" << piArr << endl;
	cout << "piArr+0>>" << piArr + 0 << endl;
	cout << "piArr+1>>" << piArr + 1 << endl;
	cout << "piArr+2>>" << piArr + 2 << endl;
}