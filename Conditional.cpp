//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-18
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-18
*/

#include <iostream>
#include "Conditional.h"
using namespace std;

void Tif();
void Tswitch();

// ���ǹ�(��������-if(���ǽ�), if(���ǽ�)else / ��������-if(���ǽ�) else if(���ǽ�), swith(���ǽ�))
// switch : �񱳴���� �Ǵ� ������� ���û����� ���� ��� ���


int num;

void Conditional() {
	cout << "input number: ";
	cin >> num;
	Tswitch();
}

void Tif() {
	if (num < 0) {
		cout << "num�� 0���� �۴�" << endl;
	}
	else if (num > 0) {
		cout << "num�� 0���� ũ��" << endl;
	}
	else if (num = 0) {
		cout << "num�� 0���� ����" << endl;
	}
}

void Tswitch() {
	switch (num) {
	case 100:
	case 90:
		cout << "��" << endl;
	case 80:
		cout << "��" << endl;
	case 70:
		cout << "��" << endl;
	default:
		cout << "�����" << endl;
	}
}

void TternaryOperator() {

}