//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-19
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-20
*/

#include <iostream>
#include <string>
#include "Dynamicmemory.h"

using namespace std;


//�����޸��Ҵ� : ���α׷� ���� �� �ʿ��� �޸𸮸� �ü���κ��� �Ҵ�޴� ��.

//-------
//|data |
//|stack|
//|heap |- �׿��޸� >> �޸� �Ҵ�(Ư�� �޸� ������ ����)
//-------

// �޸𸮸� �������� �Ҵ������, �޸𸮸� �ʿ��� ��ŭ ����ϰ� �ݳ��� �� �־� �ڿ��� ȿ�������� ����� �� �ִ�.
// �����޸𸮴� �����ͷ� ���ٰ���

/*
	int* pt = nullptr;
	pt = new int; //�Ҵ�
	*pt = 10;
	delete pt; //��ȯ

//========================

	int* pta = nullptr;
	pta = new int[10]; //�Ҵ�
	delete[] pta; //��ȯ
*/

void dynamicmem() {
	int * pt = nullptr; //C������ int* pt = NULL >> NULL == 0
	pt = new int; //�������� �ڷ����� �޸��� �ڷ����� ���ƾ� �Ѵ�.
	*pt = 10;
	cout << "*pt-->" << *pt << endl;
	cout << endl;
	delete pt;

	int* pta = nullptr;
	pta = new int[10]; //�Ҵ�
	//cout << "*(pt+0)-->" << *(pt + 0) << endl;
	for (int i = 0; i < 10; i++) {
		*(pta + i) = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << "*(pta+["<<i<<")-->" << *(pta + i) << endl;
	}
	delete[] pta; //��ȯ

}


//������ü ���� : ��ü�� �ʿ信 ���� �������� �����ϰ� ������ �� �ִ�.
void dynamiccon() {
	Pstudent* pStudent1 = new Pstudent;
	pStudent1->setName("ȫ�浿");
	pStudent1->setGrade('B');
	pStudent1->setCla(6);

	cout << "(*pStudent1).getName() ===>" << (*pStudent1).getName() << endl;
	cout << "(*pStudent1).getGrade() ===>" << (*pStudent1).getGrade() << endl;
	cout << "(*pStudent1).getCla() ===>" << (*pStudent1).getCla() << endl;

	delete pStudent1;

	Pstudent* pStudent2 = new Pstudent;
	pStudent2->setName("ȫ���");
	pStudent2->setGrade('A');
	pStudent2->setCla(3);

	cout << "(*pStudent2).getName() ===>" << (*pStudent2).getName() << endl;
	cout << "(*pStudent2).getGrade() ===>" << (*pStudent2).getGrade() << endl;
	cout << "(*pStudent2).getCla() ===>" << (*pStudent2).getCla() << endl;

	delete pStudent2;
}

//���� ��ü��� ���� : �����ڿ��� ����� ������ �� �ְ�, �Ҹ��ڿ��� ������ �� �ִ�.

void DyCondiMem() {
	BookShelf* bookshelf1 = new BookShelf;
	bookshelf1->setName("���α׷���");
	bookshelf1->setNo(1);
	bookshelf1->setLoc("k-001");

	cout << "bookshelf1->setName() ===>" << bookshelf1->getName() << endl;
	cout << "bookshelf1->setNo() ===>" << bookshelf1->getNo() << endl;
	cout << "bookshelf1->setLoca() ===>" << bookshelf1->getLoc() << endl;

	cout << endl;
	bookshelf1->getBookInfo();
	delete bookshelf1;

}

