//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-18
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-19
*/

#include <iostream>
#include<string>
#include "Class.h"

using namespace std;
void mkclass();
void overlapmember();
void Constructor();
void overConstructor();
void defualtparam();
void access();
void Tgetset();
void divimember();
void Class();

void Class() {
	/*mkclass();
	overlapmember();
	Constructor();
	overConstructor();
	defualtparam();
	access();
	Tgetset();*/
	divimember();
}

// ��ü���� ���α׷��� : �ΰ��� ����� �����ϰ� ��ü�� ���ַ� ���α׷��� �ϴ� ���
/*
��ü(�ΰ�����)
��) ü�߰�
�Ӽ�: �ٴ�,����
���: ������ ����

��ü(���α׷�)
��) �������α׷�
�Ӽ�: �µ�, �̼�����
���: ��������

�Լ��� �Ӽ�(�Ҹ�) �������,
�ݸ�, ��ü�� �Ӽ�(������)�� ������ ���� �� �ִ�(��ü�� �Ӽ��� ����� ����)
Ŭ�����κ��� ������ ��ü�� ��� ���� ����!
*/

// Ŭ���� - ��ü�� �����ϱ� ���� Ʋ_ ��� ��ü�� Ŭ������ ���� ������
/*
Ŭ���� �����(��������� ����Լ��� ����)
��)
class Calculator{					//class ���� Ű����   class�̸�{
public:								//������
	int xNum;						//��� ����(�Ӽ�)
	int yNum;

	int add(){						//��� �Լ�(���)
		return xNum + xNum;
	}
}
*/



//Ŭ���� ����

void mkclass() {
	Calcurator cObj1;//��ü(cObj1) �����
	cObj1.xNum = 10;
	cObj1.yNum = 12;

	cout << "cObj1.add()--------->" << cObj1.add() << endl;

	Calcurator cObj2;//��ü(cObj2) �����
	cObj2.xNum = 30;
	cObj2.yNum = 48;

	cout << "cObj2.add()--------->" << cObj2.add() << endl;


	//cObj1�� cObj2�� �ٸ�!
}



// �ߺ� ����Լ� : ����Լ��� �Ϲ� �Լ�ó�� �ߺ��ؼ� ���� �� �̿��� �� �ִ�.
void overlapmember() {
	BMICal bc1;
	cout << "bc1.getBmi(180,50) ----->" << bc1.getBmi(180, 50) << endl;
	cout << "bc1.getBmi(180.5,50.5) ----->" << bc1.getBmi(180.5, 50.5) << endl;

}



// ������ : Ŭ�������� ��ü�� ������ ��, ��ü�� �ʱ�ȭ�� ����ϴ� �Լ�
void Constructor() {
	Student std1("ȫ�浿", 10, 'C');
	std1.getStudentInfo();

	Student std2("ȫ���", 12, 'A');
	std2.getStudentInfo();

}


//������ �ߺ� : �����ڸ� ���� �� ������ �� �ִ�.
void overConstructor() {
	Dog dog1("smile");
	dog1.getDogInfo();

	Dog dog2("happy", 5);
	dog2.getDogInfo();

}


//����Ʈ �Ű����� : �Ű������� ���� �������� ���� ��, ����Ʈ�� ���
void defualtparam() {
	Sum sum;
	sum.result(10, 100);
	sum.result();
}



// ��������(1) - ���������� : ��� ������ ���� ������ ���� �� �ִ�.
//public(����): ������ ���� ����
//pricate(�����):Ŭ���� ���ֿ��� ���� �Ұ�
void access(void) {
	Salary s1("ȫ�浿");
	s1.setMoney(1000);
	s1.printStatement();
}



// ��������(2) - getter,setter:��������� ����ȭ�ؼ� �����͸� �ܺηκ��� ��ȣ�ϱ� ���� ����̴�
void Tgetset() {
	MyCar myCar("sorrento", "white", 2000, 2017);
	myCar.getInfo();
	
	myCar.setPrice(200);
	myCar.getInfo();

	myCar.setYear(2000);
	myCar.getInfo();
}



// ����Լ� �и� :Ŭ������ ����Լ� ���Ǻθ� �и�

double Area::calculatorArea()
{
	return width*height;
}
void divimember() {
	Area area(10.5, 12.5);
	cout << "area caculratorArea()---------->" << area.calculatorArea() << endl;
}
