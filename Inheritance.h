#pragma once
#include <iostream>
#include <string>


void Tinheritance();
void calculator();
void Con_destructor();
void Toverwriting();
void multiInherit();

using namespace std;

class ParentClass {
public:
	int xNum;
	int yNum;
	void getParentInfo() {
		cout << "xNum: " << xNum << endl;
		cout << "yNum: " << yNum << endl;
	}
};

class ChildClass : public ParentClass {
public:
	int zNum;
	void getChildInfo() {
		cout << "zNum: " << zNum << endl;
	}
};


class ParentCalculator {
public:
	int add(int x, int y) {
		return x + y;
	}
protected: 
	int sub(int x, int y) {
		return x - y;
	}
private:
	int mul(int x, int y) {
		return x * y;
	}
};

class NewCalulator : public ParentCalculator
{
public:
	int mul(int x, int y) {
		return x * y;
	}
	double div(double x, double y) {
		return x / y;
	}
	void able() {
		cout << "add(10,20) : " << add(10, 20) << endl;
		cout << "sub(10,20) : " << sub(10, 20) << endl;
	}
};



class PClass {
public:
	PClass() {
		cout << "PClass 생성자 !!" << endl;
	}
	~PClass() {
		cout << "PClass 소멸자 !!" << endl;
	}
};

class CClass : public PClass {
public:
	CClass() {
		cout << "CClass 생성자 !!" << endl;
	}
	~CClass() {
		cout << "CClass 소멸자 !!" << endl;
	}
};



class ParentJjajang {
public:
	void makeJjajang() {
		
		cout << "makeJjajang() of ParentJjajang" << endl;
	}
};

class ChildJjajang: public ParentJjajang{
public:
	void makeJjajang() {
		ParentJjajang::makeJjajang(); //부모 클래스 호출 시, 범위지정자를 활용하여 멤버함수 호출가능
		cout << "makeJjajang() of ChildJjajang" << endl;
	}
};

class Parents1{
public:
	void print1Func(){ cout << "Parents1 Class" << endl; }
	void ErrorFunc(){ cout << "Parents1 Class" << endl; }
};
class Parents2 {
public:
	void print2Func() { cout << "Parents2 Class" << endl; }
	void ErrorFunc() { cout << "Parents2 Class" << endl; }
};
class Parents3 {
public:
	void print3Func() { cout << "Parents3 Class" << endl; }
	void ErrorFunc() { cout << "Parents3 Class" << endl; }
};
class ChildMulti : public Parents1, public Parents2, public Parents3 {

};