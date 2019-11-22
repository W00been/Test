//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-20
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-20
*/

#include <iostream>
#include <string>
#include <vector>
#include "Vector.h"



using namespace std;

void ConArr() {
	Book book1[5];

	Book book2[3] = {
		Book("C",1),
		Book("C++", 2),
		Book("JAVA", 3)
	};

	Book book3[] = {
		Book("2C",1),
		Book("2C++", 2),
		Book("2JAVA", 3),
		Book("2Python", 4),
		Book("2Jvascript", 5)
	};

	for (int i = 0; i < sizeof(book2) / sizeof(book2[0]); i++) {
		cout << "book2[" << i << "].getName :" << book2[i].getName() << endl;
		cout << "book2[" << i << "].getNo : " << book2[i].getNo() << endl;
	}

	for (Book book: book3) {
		cout << "book3.getName :" << book.getName() << endl;
		cout << "book3.getNo : " << book.getNo() << endl;
	}
}
//배열 크기 변경 불가 한계점!

//벡터:정적인 배열의 단점을 보완한 동적배열로 데이터를 쉽고 효율적으로 관리할 수 있다.

void Tvector() {
	vector<BankAccount> bankAccounts(5);
	cout << endl;
	cout << "BankAccount.size"<< bankAccounts.size()<<endl;
	cout << endl;

	bankAccounts[0].setName("박찬호");
	bankAccounts[0].setNo(1);
	bankAccounts[1].setName("이승엽");
	bankAccounts[1].setNo(2);
	bankAccounts[2].setName("류현진");
	bankAccounts[2].setNo(3);
	bankAccounts[3].setName("추신수");
	bankAccounts[3].setNo(4);
	bankAccounts[4].setName("박병호");
	bankAccounts[4].setNo(5);

	for (BankAccount ac : bankAccounts) {
		cout << "ac.getName()" << ac.getName() << endl;
		cout << "ac.getNo()" << ac.getNo() << endl;
	}
	cout << endl;

	BankAccount ac;
	bankAccounts.push_back(ac); //추가
	cout << " bankAccounts.size() ---> " << bankAccounts.size() << endl;

	cout << endl;

	bankAccounts.pop_back(); //제거
	cout << " bankAccounts.size() ---> " << bankAccounts.size() << endl;

	cout << endl;

	BankAccount tempF = bankAccounts.front();//처음
	cout << " tempF.getName() ---> " << tempF.getName() << endl;
	cout << " tempF.getNo() ---> " << tempF.getNo() << endl;

	cout << endl;

	BankAccount tempB = bankAccounts.back();//마지막
	cout << " tempB.getName() ---> " << tempB.getName() << endl;
	cout << " tempB.getNo() ---> " << tempB.getNo() << endl;

	cout << endl;

	vector<BankAccount>::iterator iter; //반복자
	//iter = bankAccounts.begin();//처음
	iter = bankAccounts.end(); //마지막 +1
	//iter += 1;
	iter -= 1;
	bankAccounts.erase(iter);
	for (BankAccount ac : bankAccounts)
	{
		cout << "ac.getName() --> " << ac.getName() << endl;
		cout << "ac.getNo() --> " << ac.getNo() << endl;
	}

	cout << endl;

	iter = bankAccounts.begin();
	bankAccounts.erase(iter + 1, iter + 3); //제거
	for (BankAccount ac : bankAccounts)
	{
		cout << "ac.getName() --> " << ac.getName() << endl;
		cout << "ac.getNo() --> " << ac.getNo() << endl;
	}

	cout << endl;
}
