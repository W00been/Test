//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-19
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-19
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
상속이란?(OOP_Object Oriented Programming)
	: 부모 클래스의 속성과 기능을물려받아 마치 나의 것처럼 사용할 수 있다.

	할아버지(집, 자동차, 돈)>>아빠(할아버지 재산 + 집, 자동차, 돈)>> 나(할아버지 재산 + 아빠 재산 + 집, 자동차, 돈)
	ParentClass			>>			ChildClass				>>					Child Class
	(SuperClass)
*/

// C++에서는 ":"를 이용해서 상속을 구현한다.(부모>>자식, 자식>>부모 불가)
// 타클래스에 이미 구현되어 있는 기능을 쉽게 이용할 수 있다.



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


// 접근제한자 : 부모클래스도 자식한테 물려주기 싫은 것이 있다.
// public (멤버 사용 가능) ParentClass >>> ChildClass
// private (멤버 사용 불가능) 상속을 받더라도 접근이 어려움!(외부에서 아예 접근 불가)
// protected(멤버 사용 가능) 상속을 받는 경우 접근 가능 !(외부에서 아예 접근 불가)

void calculator() {
	NewCalulator calc;
	cout << "calc.add(10,20) : " << calc.add(10, 20) << endl;
	calc.able();
	cout << "calc.mul(10,20) : " << calc.mul(10, 20) << endl;
	cout << "calc.div(10,20) : " << calc.div(10, 20) << endl;
}



// 생성자와 소멸자 : 부모 클래스와 자식클래스의 생성자와 소멸자의 실행 순서는 정해져 있다.
void Con_destructor() {
	CClass cClass;
}



// 오버라이딩 : 부모 클래스의 멤버함수를 자식 클래스에서 재정의
// UML >> ParentClass(맛있는 요리법) <- ChildClass('더' 맛있는 요리법)
void Toverwriting() {
	ChildJjajang chj;
	chj.makeJjajang();
	chj.ParentJjajang::makeJjajang();//범위지정
}



// 다중 상속 : 상속을 여러 개 할 수 있다.
// Parent1Class, Parent2Class, Parent3Class >>>ChildClass
// 부모클래스의 멤버이름이 같은경우, 모호함으로 컴파일 에러 발생
void multiInherit() {
	ChildMulti cm;
	cm.print1Func();
	cm.print2Func();
	cm.print3Func();
	cm.Parents1::ErrorFunc();
	cm.Parents2::ErrorFunc();
	cm.Parents3::ErrorFunc();
	// ErrorFunc >> 모호함 >> 범위지정 필수!! 
	// >> childClass.ParentClass::Func
}
