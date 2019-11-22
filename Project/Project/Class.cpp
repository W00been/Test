//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-18
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-19
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

// 객체지향 프로그래밍 : 인간의 세계와 동일하게 객체를 위주로 프로그래밍 하는 방법
/*
객체(인간세계)
예) 체중계
속성: 바늘,눈금
기능: 몸무게 측정

객체(프로그램)
예) 날씨프로그램
속성: 온도, 미세먼저
기능: 날씨예보

함수는 속성(소멸) 기능위주,
반면, 객체는 속성(데이터)를 가지고 있을 수 있다(객체는 속성과 기능을 유지)
클래스로부터 동일한 객체를 계속 생성 가능!
*/

// 클래스 - 객체를 생성하기 위한 틀_ 모든 객체는 클래스로 부터 생성됨
/*
클래스 만들기(멤버변수와 멤버함수로 구성)
예)
class Calculator{					//class 선언 키워드   class이름{
public:								//접근자
	int xNum;						//멤버 변수(속성)
	int yNum;

	int add(){						//멤버 함수(기능)
		return xNum + xNum;
	}
}
*/



//클래스 생성

void mkclass() {
	Calcurator cObj1;//객체(cObj1) 만들기
	cObj1.xNum = 10;
	cObj1.yNum = 12;

	cout << "cObj1.add()--------->" << cObj1.add() << endl;

	Calcurator cObj2;//객체(cObj2) 만들기
	cObj2.xNum = 30;
	cObj2.yNum = 48;

	cout << "cObj2.add()--------->" << cObj2.add() << endl;


	//cObj1과 cObj2는 다름!
}



// 중복 멤버함수 : 멤버함수도 일반 함수처럼 중복해서 여러 개 이용할 수 있다.
void overlapmember() {
	BMICal bc1;
	cout << "bc1.getBmi(180,50) ----->" << bc1.getBmi(180, 50) << endl;
	cout << "bc1.getBmi(180.5,50.5) ----->" << bc1.getBmi(180.5, 50.5) << endl;

}



// 생성자 : 클래스에서 객체를 생성할 때, 객체의 초기화를 담당하는 함수
void Constructor() {
	Student std1("홍길동", 10, 'C');
	std1.getStudentInfo();

	Student std2("홍길순", 12, 'A');
	std2.getStudentInfo();

}


//생성자 중복 : 생성자를 여러 개 정의할 수 있다.
void overConstructor() {
	Dog dog1("smile");
	dog1.getDogInfo();

	Dog dog2("happy", 5);
	dog2.getDogInfo();

}


//디폴트 매개변수 : 매개변수에 값을 지정하지 않을 시, 디폴트값 사용
void defualtparam() {
	Sum sum;
	sum.result(10, 100);
	sum.result();
}



// 정보은닉(1) - 접근제한자 : 멤버 변수에 접근 권한을 정할 수 있다.
//public(공개): 누구나 접근 가능
//pricate(비공개):클래스 외주에서 접근 불가
void access(void) {
	Salary s1("홍길동");
	s1.setMoney(1000);
	s1.printStatement();
}



// 정보은닉(2) - getter,setter:멤버변수를 은닉화해서 데이터를 외부로부터 보호하기 위한 방법이다
void Tgetset() {
	MyCar myCar("sorrento", "white", 2000, 2017);
	myCar.getInfo();
	
	myCar.setPrice(200);
	myCar.getInfo();

	myCar.setYear(2000);
	myCar.getInfo();
}



// 멤버함수 분리 :클래스의 멤버함수 정의부를 분리

double Area::calculatorArea()
{
	return width*height;
}
void divimember() {
	Area area(10.5, 12.5);
	cout << "area caculratorArea()---------->" << area.calculatorArea() << endl;
}
