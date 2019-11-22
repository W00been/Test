//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-19
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-19
*/

#include <iostream>
#include <string>
#include "Inheritance.h"

using namespace std;
void Tinheritance();
void calculator();
void Con_destructor();
void Toverwriting();
void multiInherit();

/*
����̶�?(OOP_Object Oriented Programming)
	: �θ� Ŭ������ �Ӽ��� ����������޾� ��ġ ���� ��ó�� ����� �� �ִ�.

	�Ҿƹ���(��, �ڵ���, ��)>>�ƺ�(�Ҿƹ��� ��� + ��, �ڵ���, ��)>> ��(�Ҿƹ��� ��� + �ƺ� ��� + ��, �ڵ���, ��)
	ParentClass			>>			ChildClass				>>					Child Class
	(SuperClass)
*/

// C++������ ":"�� �̿��ؼ� ����� �����Ѵ�.(�θ�>>�ڽ�, �ڽ�>>�θ� �Ұ�)
// ŸŬ������ �̹� �����Ǿ� �ִ� ����� ���� �̿��� �� �ִ�.



void Tinheritance() {
	ParentClass parentClass;
		parentClass.xNum = 100;
		parentClass.yNum = 100;
		parentClass.getParentInfo();

	ChildClass childClass;
		childClass.xNum = 10;
		childClass.yNum = 20;
		childClass.zNum = 30;
		childClass.getParentInfo();
		childClass.getChildInfo();

}


// ���������� : �θ�Ŭ������ �ڽ����� �����ֱ� ���� ���� �ִ�.
// public (��� ��� ����) ParentClass >>> ChildClass
// private (��� ��� �Ұ���) ����� �޴��� ������ �����!(�ܺο��� �ƿ� ���� �Ұ�)
// protected(��� ��� ����) ����� �޴� ��� ���� ���� !(�ܺο��� �ƿ� ���� �Ұ�)

void calculator() {
	NewCalulator calc;
	cout << "calc.add(10,20) : " << calc.add(10, 20) << endl;
	calc.able();
	cout << "calc.mul(10,20) : " << calc.mul(10, 20) << endl;
	cout << "calc.div(10,20) : " << calc.div(10, 20) << endl;
}



// �����ڿ� �Ҹ��� : �θ� Ŭ������ �ڽ�Ŭ������ �����ڿ� �Ҹ����� ���� ������ ������ �ִ�.
void Con_destructor() {
	CClass cClass;
}



// �������̵� : �θ� Ŭ������ ����Լ��� �ڽ� Ŭ�������� ������
// UML >> ParentClass(���ִ� �丮��) <- ChildClass('��' ���ִ� �丮��)
void Toverwriting() {
	ChildJjajang chj;
	chj.makeJjajang();
	chj.ParentJjajang::makeJjajang();//��������
}



// ���� ��� : ����� ���� �� �� �� �ִ�.
// Parent1Class, Parent2Class, Parent3Class >>>ChildClass
// �θ�Ŭ������ ����̸��� �������, ��ȣ������ ������ ���� �߻�
void multiInherit() {
	ChildMulti cm;
	cm.print1Func();
	cm.print2Func();
	cm.print3Func();
	cm.Parents1::ErrorFunc();
	cm.Parents2::ErrorFunc();
	cm.Parents3::ErrorFunc();
	// ErrorFunc >> ��ȣ�� >> �������� �ʼ�!! 
	// >> childClass.ParentClass::Func
}
