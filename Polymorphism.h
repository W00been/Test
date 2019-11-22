#pragma once

#include <iostream>
#include <string>

using namespace std;

void virtualpolymorphism();
void abstractClass();

class CallClass {
public:
	virtual void call() { cout << "call ~~" << endl; }//virtual 가상함수 사용 시, 자식 클래스의 멤버 호출 가능
};

class Bell : public CallClass {
public:
	void bellFun() { cout << "bellFunc()" << endl; }
	void call() { cout << "따르릉~~" << endl; }
};

class Vibration : public CallClass {
public:
	void vibrationFun() { cout << "vibFunc()" << endl; }
	void call() { cout << "드르륵~~" << endl; }
};



class Toy {
public:
	virtual void pushBtn() = 0;
	// virtual 반환형 함수명()= 0; 
	//함수 헤더만 존재
};
class RobotToy : public Toy {
public:
	void pushBtn() { cout << " I am robot" << endl; }
};

class DuckToy : public Toy {
public:
	void pushBtn() { cout << " I am duck" << endl; }
};