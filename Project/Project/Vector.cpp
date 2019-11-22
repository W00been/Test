//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-20
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-20
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
//�迭 ũ�� ���� �Ұ� �Ѱ���!

//����:������ �迭�� ������ ������ �����迭�� �����͸� ���� ȿ�������� ������ �� �ִ�.

void Tvector() {
	vector<BankAccount> bankAccounts(5);
	cout << endl;
	cout << "BankAccount.size"<< bankAccounts.size()<<endl;
	cout << endl;

	bankAccounts[0].setName("����ȣ");
	bankAccounts[0].setNo(1);
	bankAccounts[1].setName("�̽¿�");
	bankAccounts[1].setNo(2);
	bankAccounts[2].setName("������");
	bankAccounts[2].setNo(3);
	bankAccounts[3].setName("�߽ż�");
	bankAccounts[3].setNo(4);
	bankAccounts[4].setName("�ں�ȣ");
	bankAccounts[4].setNo(5);

	for (BankAccount ac : bankAccounts) {
		cout << "ac.getName()" << ac.getName() << endl;
		cout << "ac.getNo()" << ac.getNo() << endl;
	}
	cout << endl;

	BankAccount ac;
	bankAccounts.push_back(ac); //�߰�
	cout << " bankAccounts.size() ---> " << bankAccounts.size() << endl;

	cout << endl;

	bankAccounts.pop_back(); //����
	cout << " bankAccounts.size() ---> " << bankAccounts.size() << endl;

	cout << endl;

	BankAccount tempF = bankAccounts.front();//ó��
	cout << " tempF.getName() ---> " << tempF.getName() << endl;
	cout << " tempF.getNo() ---> " << tempF.getNo() << endl;

	cout << endl;

	BankAccount tempB = bankAccounts.back();//������
	cout << " tempB.getName() ---> " << tempB.getName() << endl;
	cout << " tempB.getNo() ---> " << tempB.getNo() << endl;

	cout << endl;

	vector<BankAccount>::iterator iter; //�ݺ���
	//iter = bankAccounts.begin();//ó��
	iter = bankAccounts.end(); //������ +1
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
	bankAccounts.erase(iter + 1, iter + 3); //����
	for (BankAccount ac : bankAccounts)
	{
		cout << "ac.getName() --> " << ac.getName() << endl;
		cout << "ac.getNo() --> " << ac.getNo() << endl;
	}

	cout << endl;
}
