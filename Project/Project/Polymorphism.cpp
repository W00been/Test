//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-20
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-20
*/

#include <iostream>
#include <string>
#include "Polymorphism.h"

using namespace std;

void virtualpolymorphism();
void abstractClass();
/*
	다형성 : 객체가 다양한 형태로 동작할 수 있는 상태
	이동 >> 강아지(네발로 이동), 사람(두 발로 이동), 자동차(네 바퀴로 이동), 자전거(두 바퀴로 이동)
*/
void virtualpolymorphism() {
	CallClass* bell = new Bell;// <다형성의 기본> 상위클래스 타입의 자식클래스 객체 생성
	bell->call();

	cout << endl;

	CallClass* vibration = new Vibration;// <다형성의 기본> 상위클래스 타입의 자식클래스 객체 생성
	vibration->call();

	
	// 부모 클래스의 call함수를 호출
	
}



//--------------단점-------------------
// 항상 상위멤버가 호출된다.
// 하위 클래스의 멤버에 접근할 수 없다. >>> 부모 클래스의 call함수를 호출
// 따라서, 가상함수 필요!

// 가상함수 : 상위클래스의 멤버를 가사암수로 정의해서 하위 클래스의 멤버가 호출되도록 함



// 추상 클래스 : 함수 헤더만 존재하고, 하위 클래스에서 함수 정의(구현)하도록 한 클래스
// parentClass(함수헤더)>>childClass1(함수 정의) / childClass2(함수 정의)
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