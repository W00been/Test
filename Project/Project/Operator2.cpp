//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-13
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-13
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

	//++x, --x : ���� ����
	//x++, x-- : ���� ����

	x = 10;
	cout << " x : " << x << endl;
	cout << " x : " << x++ << endl;
	cout << x << endl;


	//&& ����(AND)
	//|| ����(OR)
	//! ������(NOT)

	bool c = true;
	bool d = false;

	cout << "c && d " << (c&&d) << endl;
	cout << "c || d " << (c||d) << endl;
	cout << "!c " << (!c) << endl;

	//���ǽ�? ��1:��2
	cout << "result : " << ((x+ y) ? 10: 20) << endl;

	//��Ʈ����
	//	&,|.^,~,<<,>>(2��Ʈ��ŭ �̵�)

	//������ �ĺ�������(::x)
	//������ ������(scope)�� ���� ������ ������ �� �ִ� ��ġ�� �����ȴ�. 


	cout << "x " << x << endl;
	cout << "::x" << ::x << endl;


	return;
}