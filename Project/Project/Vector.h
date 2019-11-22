#pragma once

#include <iostream>
#include <string>

void ConArr();
void Tvector();

using namespace std;
//��ü�迭 : �迭 ��Ұ� ��ü�� ������ �迭�� �Ϲ� �迭�� ���� ����Ѵ�.


class Book {
private:
	string name;
	int no;
public:
	Book(){
		cout << "---Constructor---" << endl; }
	Book(string s, int n) {
		cout << "---Constructor---" << endl;
		name = s;
		no = n;
	}
	~Book() {
		cout << "---Destructor---" << endl;
	}
	void setName(string s) { name = s; }
	void setNo(int i) { no = i; }

	string getName() {
		return name;
	}
	int getNo() {
		return no;
	}

};


class BankAccount {
private:
	string a_name;
	int a_no;
public:
	BankAccount() {
		cout << "-------Constructor----------" << endl;
	}
	BankAccount(string n, int a) {
		cout << "-------Constructor----------" << endl;
		a_name = n;
		a_no = a;
	}
	void setName(string n) {
		a_name = n;
	}
	void setNo(int a) {
		a_no = a;
	}
	string getName() {
		return a_name;
	}
	int getNo() {
		return a_no;
	}
};