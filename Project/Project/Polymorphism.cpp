//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-20
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-20
*/

#include <iostream>
#include <string>
#include "Polymorphism.h"

using namespace std;

void virtualpolymorphism();
void abstractClass();
/*
	������ : ��ü�� �پ��� ���·� ������ �� �ִ� ����
	�̵� >> ������(�׹߷� �̵�), ���(�� �߷� �̵�), �ڵ���(�� ������ �̵�), ������(�� ������ �̵�)
*/
void virtualpolymorphism() {
	CallClass* bell = new Bell;// <�������� �⺻> ����Ŭ���� Ÿ���� �ڽ�Ŭ���� ��ü ����
	bell->call();

	cout << endl;

	CallClass* vibration = new Vibration;// <�������� �⺻> ����Ŭ���� Ÿ���� �ڽ�Ŭ���� ��ü ����
	vibration->call();

	
	// �θ� Ŭ������ call�Լ��� ȣ��
	
}



//--------------����-------------------
// �׻� ��������� ȣ��ȴ�.
// ���� Ŭ������ ����� ������ �� ����. >>> �θ� Ŭ������ call�Լ��� ȣ��
// ����, �����Լ� �ʿ�!

// �����Լ� : ����Ŭ������ ����� ����ϼ��� �����ؼ� ���� Ŭ������ ����� ȣ��ǵ��� ��



// �߻� Ŭ���� : �Լ� ����� �����ϰ�, ���� Ŭ�������� �Լ� ����(����)�ϵ��� �� Ŭ����
// parentClass(�Լ����)>>childClass1(�Լ� ����) / childClass2(�Լ� ����)
void abstractClass() {
	Toy* robot = new RobotToy;
	robot->pushBtn();

	cout << endl;

	Toy* duck = new DuckToy;
	duck->pushBtn();


	delete robot;
	delete duck;
	cout << endl;

}