//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-13
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-13
*/

#include <iostream>
#include "DataType.h"
using namespace std;

/*
1. ������
	char: 1byte(-128 ~127)
	short: 2byte(-32768 ~ 32767)
	int : 4byte(-217483648 ~ 217483647)
	long : 4yte

2. �Ǽ���
	flat: 4byte
	double: 8byte
	long double : 8byte

3. ����
	bool: 1byte ��(��/����)
	0 �̿��� ��� True >>>>> bool flag = false;

	>>>>>>>>>>>C>>>>>>>>>
	bool flag = 0//false
	bool flag = 1//True

4. ��� : �� �� ���� �����Ǹ� ���μ����� ����� ������ ������ �� ����.
	- ���ͷ� ��� : �ϻ��Ȱ���� �ַ� ����ϴ� ������
	- �ɺ��� ��� : ����������� ���� ��(const / ��ũ�� ��� �̿� ����)
*/

void DataType() {
	
	int Num; //���� ����
	Num = 10; // ���� �ʱ�ȭ

	int aNum = 10; //���� ���� & �ʱ�ȭ

	cout << "Num: " << Num << endl;
	cout << "aNum: " << aNum << endl;

	int fint(123); // int fint = 123
	char fchar('c');
	cout << "fint: " << fint << endl;
	cout << "fchar: " << fchar << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "fint: " << sizeof(fint) << endl;
	cout << "char: " << sizeof(char) << endl;


	return;
}
