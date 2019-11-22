//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-19
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-19
*/

#include <iostream>
#include <string>
#include "Point.h"

using namespace std;

//������ : �޸� �ּҸ� �����ϰ� �ִ� ����
int a = 10;
int* pa = &a; 

//& : �޸� �ּ�
//* : ������ ��
void point() {
	cout << "a>>" << a << endl; // a�� ��
	cout << "&a>>" << &a << endl;//a�� �޸� �ּ�
	cout << "pa>>" << pa << endl;//pa�� �� = a�� �޸� �ּ�
	cout << "&pa>>" << &pa << endl;//pa�� �޸� �ּ�
	cout << "*&pa>>" <<*&pa << endl;//*& =>> X, a�� �޸� �ּ�
	cout << "**&pa>>" << **&pa << endl;//*pa=>>pa�� ����Ű�� ������ ��
}

//������ ������ �޸� ũ��
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



//�ּ� �̵� : �����͸� �̿��ؼ� �޸� �ּҸ� �̵��� �� �ִ�.
//short +1 = 2byte +1 >> 2byte ����
//int +1 = 2byte +1 >> 4byte ����
//double +1 = 2byte +1 >> 8byte ����
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



//�迭���� ������
//�迭 �� �迭�� ��Ҵ� �����͸� �̿��Ͽ� ���� ������ �� �ִ�.
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