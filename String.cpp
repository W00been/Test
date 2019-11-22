//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-18
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-18
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
C와 C++의 문자열 스타일

1. C 스타일(배열 또는 포인터 사용
	char *S1 = "Hello";
	char *S2 = "World";
	cout << S1 << S2 << endl;
	
	*'문자열 더하기' 할 수 없음!>> 각자 출력


2. C++ 스타일(객체 사용)
	String S3 = "Hello";
	String S4 = "World";
	cout << S1 + S5 << endl;
*/

void String() {
	Tindex();
}

void Tcstyle() {
	//포인터 이용
	char *S1 = "Hello";
	char *S2 = "World";
	cout << S1 << S2 << endl;

	//배열 이용
	char sa1[6] = "Hello";
	char sa2[] = "World";

	//문자 합치기 불가능
	cout << sa1 << sa2 << endl;
}

void Tcpstyle() {
	//문자 합치기 가능
	string S3 = "Hello";
	string S4 = "World";
	cout << S3 + S4 << endl;

	//string 선언 및 초기화 방법
	string str1;
	str1 = "str1 : Hello";
	cout << str1 << endl;

	string str2 = "str2 : World!";
	cout << str2 << endl;

	string str3{"str3 : Hello world" };
	cout << str3 << endl;

	//string 문자는 비교도 가능
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
	//공백문자를 포함한 문자열 입력
/*
	1. get() : 입력스트림에 개행문자를 남김 >> 버퍼를 비워야 함! 
		char s5[100];
		cout <<"input string: ";
		cin.get(s5,100);
		cout << s5<,endl;
		cin.ignore();

	2. getline() : 입력스트림에 개행문자를 버림
		cout <<"input string: ";
		cin.getline(s5,100); //cin 객체의 getline >> 배열 사용
		cout << s5<<endl;

*/

	
	string str6;
	cout << "input string: ";
	cin >> str6;
	cout << "str6 : "<< str6 << endl;
	//cin 입력은 문자열에 공백이 있는 경우, 공백 이후 문자 손실
	cin.ignore(100, '\n');

	char s5[100];
	cout << "input string: ";
	cin.get(s5, 100);
	cout << "s5 : "<< s5 << endl;
	//get 입력은 문자열 공백에도 문자손실은 없지만, 개행문자를 남김
	cin.ignore();

	string s51;
	cout << "input string: ";
	getline(cin, s51);//스트링에서 지원하는 getline함수
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
	string sArr[] = { "박찬호", "이승엽", "황재균", "박용택", "선동열"};
	//string sArr[]{ "박찬호", " 이승엽", "황재균", "박용택", "선동열"};
	for (int i = 0; i < 5; i++) {
		cout << "sArr["<<i<<"]:"<<sArr[i] <<endl;
	}
}