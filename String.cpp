//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-18
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-18
*/

#include <iostream>
#include <string> 
#include "String.h"
using namespace std;

void Tcstyle();
void Tcpstyle();
void Tgetline();
void Tsize();
void Tsindex();
void Tindex();

/* 
C�� C++�� ���ڿ� ��Ÿ��

1. C ��Ÿ��(�迭 �Ǵ� ������ ���
	char *S1 = "Hello";
	char *S2 = "World";
	cout << S1 << S2 << endl;
	
	*'���ڿ� ���ϱ�' �� �� ����!>> ���� ���


2. C++ ��Ÿ��(��ü ���)
	String S3 = "Hello";
	String S4 = "World";
	cout << S1 + S5 << endl;
*/

void String() {
	Tindex();
}

void Tcstyle() {
	//������ �̿�
	char *S1 = "Hello";
	char *S2 = "World";
	cout << S1 << S2 << endl;

	//�迭 �̿�
	char sa1[6] = "Hello";
	char sa2[] = "World";

	//���� ��ġ�� �Ұ���
	cout << sa1 << sa2 << endl;
}

void Tcpstyle() {
	//���� ��ġ�� ����
	string S3 = "Hello";
	string S4 = "World";
	cout << S3 + S4 << endl;

	//string ���� �� �ʱ�ȭ ���
	string str1;
	str1 = "str1 : Hello";
	cout << str1 << endl;

	string str2 = "str2 : World!";
	cout << str2 << endl;

	string str3{"str3 : Hello world" };
	cout << str3 << endl;

	//string ���ڴ� �񱳵� ����
	string str4{"Hello"};
	string str5{"hello"};
	if (str4 == str5) {
		cout << "str4 == str5" << endl;
	}
	else {
		cout << "str4 != str5" << endl;
	}
}

void Tgetline() {
	//���鹮�ڸ� ������ ���ڿ� �Է�
/*
	1. get() : �Է½�Ʈ���� ���๮�ڸ� ���� >> ���۸� ����� ��! 
		char s5[100];
		cout <<"input string: ";
		cin.get(s5,100);
		cout << s5<,endl;
		cin.ignore();

	2. getline() : �Է½�Ʈ���� ���๮�ڸ� ����
		cout <<"input string: ";
		cin.getline(s5,100); //cin ��ü�� getline >> �迭 ���
		cout << s5<<endl;

*/

	
	string str6;
	cout << "input string: ";
	cin >> str6;
	cout << "str6 : "<< str6 << endl;
	//cin �Է��� ���ڿ��� ������ �ִ� ���, ���� ���� ���� �ս�
	cin.ignore(100, '\n');

	char s5[100];
	cout << "input string: ";
	cin.get(s5, 100);
	cout << "s5 : "<< s5 << endl;
	//get �Է��� ���ڿ� ���鿡�� ���ڼս��� ������, ���๮�ڸ� ����
	cin.ignore();

	string s51;
	cout << "input string: ";
	getline(cin, s51);//��Ʈ������ �����ϴ� getline�Լ�
	cout << s51 << endl;
	}

void Tsize() {
	string s6{"Hello world"};
	int s6Size = s6.size();
	cout << "s6Size : " << s6Size << endl;
}

void Tsindex() {
	string s7{ "abcdefghijklmn" };
	for (int i = 0; i < s7.size(); i++) {
		cout << s7[i];
	}
	cout << endl;
	
	string s8{ "010-1234-5678" };
	for (int i = 0; i < s8.size(); i++) {
		if (s8[i] == '-') continue;
		cout << s8[i];
	}
}

void Tindex() {
	string sArr[] = { "����ȣ", "�̽¿�", "Ȳ���", "�ڿ���", "������"};
	//string sArr[]{ "����ȣ", " �̽¿�", "Ȳ���", "�ڿ���", "������"};
	for (int i = 0; i < 5; i++) {
		cout << "sArr["<<i<<"]:"<<sArr[i] <<endl;
	}
}