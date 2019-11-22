//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-19
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-20
*/

#include <iostream>
#include <string>
#include "Dynamicmemory.h"

using namespace std;


//동적메모리할당 : 프로그램 실행 중 필요한 메모리를 운영체제로부터 할당받는 것.

//-------
//|data |
//|stack|
//|heap |- 잉여메모리 >> 메모리 할당(특정 메모리 공간을 공유)
//-------

// 메모리를 동적으로 할당받으면, 메모리를 필요한 만큼 사용하고 반납할 수 있어 자원을 효율적으로 사용할 수 있다.
// 동적메모리는 포인터로 접근가능

/*
	int* pt = nullptr;
	pt = new int; //할당
	*pt = 10;
	delete pt; //반환

//========================

	int* pta = nullptr;
	pta = new int[10]; //할당
	delete[] pta; //반환
*/

void dynamicmem() {
	int * pt = nullptr; //C에서는 int* pt = NULL >> NULL == 0
	pt = new int; //포인터의 자료형과 메모리의 자료형은 같아야 한다.
	*pt = 10;
	cout << "*pt-->" << *pt << endl;
	cout << endl;
	delete pt;

	int* pta = nullptr;
	pta = new int[10]; //할당
	//cout << "*(pt+0)-->" << *(pt + 0) << endl;
	for (int i = 0; i < 10; i++) {
		*(pta + i) = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << "*(pta+["<<i<<")-->" << *(pta + i) << endl;
	}
	delete[] pta; //반환

}


//동적객체 생성 : 객체를 필요에 따라 동적으로 생성하고 제거할 수 있다.
void dynamiccon() {
	Pstudent* pStudent1 = new Pstudent;
	pStudent1->setName("홍길동");
	pStudent1->setGrade('B');
	pStudent1->setCla(6);

	cout << "(*pStudent1).getName() ===>" << (*pStudent1).getName() << endl;
	cout << "(*pStudent1).getGrade() ===>" << (*pStudent1).getGrade() << endl;
	cout << "(*pStudent1).getCla() ===>" << (*pStudent1).getCla() << endl;

	delete pStudent1;

	Pstudent* pStudent2 = new Pstudent;
	pStudent2->setName("홍길순");
	pStudent2->setGrade('A');
	pStudent2->setCla(3);

	cout << "(*pStudent2).getName() ===>" << (*pStudent2).getName() << endl;
	cout << "(*pStudent2).getGrade() ===>" << (*pStudent2).getGrade() << endl;
	cout << "(*pStudent2).getCla() ===>" << (*pStudent2).getCla() << endl;

	delete pStudent2;
}

//동적 객체멤버 생성 : 생성자에서 멤버를 생성할 수 있고, 소멸자에서 제거할 수 있다.

void DyCondiMem() {
	BookShelf* bookshelf1 = new BookShelf;
	bookshelf1->setName("프로그래밍");
	bookshelf1->setNo(1);
	bookshelf1->setLoc("k-001");

	cout << "bookshelf1->setName() ===>" << bookshelf1->getName() << endl;
	cout << "bookshelf1->setNo() ===>" << bookshelf1->getNo() << endl;
	cout << "bookshelf1->setLoca() ===>" << bookshelf1->getLoc() << endl;

	cout << endl;
	bookshelf1->getBookInfo();
	delete bookshelf1;

}

