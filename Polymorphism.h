#pragma once

#include <iostream>
#include <string>

using namespace std;

void virtualpolymorphism();
void abstractClass();

class CallClass {
public:
	virtual void call() { cout << "call ~~" << endl; }//virtual �����Լ� ��� ��, �ڽ� Ŭ������ ��� ȣ�� ����
};

class Bell : public CallClass {
public:
	void bellFun() { cout << "bellFunc()" << endl; }
	void call() { cout << "������~~" << endl; }
};

class Vibration : public CallClass {
public:
	void vibrationFun() { cout << "vibFunc()" << endl; }
	void call() { cout << "�帣��~~" << endl; }
};



class Toy {
public:
	virtual void pushBtn() = 0;
	// virtual ��ȯ�� �Լ���()= 0; 
	//�Լ� ����� ����
};
class RobotToy : public Toy {
public:
	void pushBtn() { cout << " I am robot" << endl; }
};

class DuckToy : public Toy {
public:
	void pushBtn() { cout << " I am duck" << endl; }
};