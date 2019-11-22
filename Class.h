#pragma once
#include <iostream>
#include <string>

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

class Calcurator {
public:
	int xNum;
	int yNum;

	int add() {
		return xNum + yNum;
	}

};


class BMICal {
public:
	int getBmi(int h, int w) {
		return h * w;
	}
	double getBmi(double h, double w) {
		return h * w;
	}
};


class Student {
public:
	string name;
	int grade;
	int cla;

	Student(string n, int g, int c) { //생성자를 이용하면 객체의 생성과 초기화를 동시에 할 수 있다.
		name = n;
		grade = g;
		cla = c;
	}

	void getStudentInfo() {
		cout << "name: " << name << endl;
		cout << "grade: " << grade << endl;
		cout << "cla: " << cla << endl;
	}
};


class Dog {
public:
	string name;
	int age;

	Dog(string n) {//강아지가 태어난 경우
		name = n;
		age = 0;
	}
	Dog(string n, int a) {//강아지를 분양한 경우
		name = n;
		age = a;
	}
	void getDogInfo() {
		cout << "name: " << name << endl;
		cout << "age: " << age << endl;
	}
};


class Sum {
public:
	void result(int x = 5, int y = 10) {
		cout << "x+y: " << (x + y) << endl;
	}
};

class Salary {
public:
	string name;
private:
	int money;
public:
	Salary(string n) {
		name = n;
	}

	void printStatement() {
		cout << " name: " << name << endl;
		cout << " money: " << money << endl;
	}

	void setMoney(int s) {
		if (s < 0) {
			cout << "급여를 잘못 입력했습니다" << endl;
		}
		else		money = s;
	}
};


class MyCar {
private:
	string name;
	string color;
	int price;
	int year;
public:
	MyCar(string n, string c, int p, int y) {
		name = n;
		color = c;
		price = p;
		year = y;
	}

	void getInfo() {
		cout << "name : " << name << endl;
		cout << "color : " << color << endl;
		cout << "price : " << price << endl;
		cout << "year : " << year << endl;
	}

	void setName(string n) {
		name = n;
	}

	void setColor(string c) {
		color = c;
	}

	void setPrice(int p) {
		if (p < 1000) {
			cout << "Price Error!" << endl;
		}
		else {
			price = p;
		}
	}

	void setYear(int y) {
		if (y < 2016) cout << "Year Error!" << endl;
		else year = y;
	}

	string getName() {
		return name;
	}

	string setColor() {
		return color;
	}

	int getPrice() {
		return price;
	}

	int getYear() {
		return year;
	}
};


class Area {
public:
	double width;
	double height;

	Area(double w, double h) {
		width = w;
		height = h;
	}
	double calculatorArea();
};