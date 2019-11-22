#pragma once
#include <iostream>
#include <string>

void dynamicmem();
void dynamiccon();
void DyCondiMem();

using namespace std;

class Pstudent {
private:
	string Name;
	char Grade;
	int Cla;

public:

	Pstudent() {
		cout << "---------Student() START-----------" << endl;
	}
	~Pstudent() {
		cout << "---------Student() END-----------" << endl;
	}

	void setName(string n) {
		Name = n;
	}
	void setGrade(char g) {
		Grade = g;
	}
	void setCla(int i) {
		Cla = i;
	}
	
	string getName() {
		return Name;
	}
	char getGrade() {
		return Grade;
	}
	int getCla() {
		return Cla;
	}
};



class BookShelf {
private:
	string* name;
	int* no;
	string* loc;
public:
	BookShelf() {
		cout << "-------BookShelf() START-------" << endl;
		name = new string;
		no = new int;
		loc = new string;
	}
	~BookShelf() {
		cout << "-------BookShelf() END-------" << endl;
		delete name;
		delete no;
		delete loc;
	}

	void getBookInfo() {
		cout << "Name : " << *name << endl;
		cout << "No : " << *no << endl;
		cout << "Loc : " << *loc << endl;

	}
	void setName(string n) {
		*name = n;
	}
	void setNo(int i) {
		*no = i;
	}
	void setLoc(string l) {
		*loc = l;
	}
	string getName() {
		return *name;
	}
	int getNo() {
		return *no;
	}
	string getLoc() {
		return *loc;
	}
};