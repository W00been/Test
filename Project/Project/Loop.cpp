//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-18
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-18
*/

#include <iostream>
#include "Loop.h"

using namespace std;

void Tfor();
void Twhile();
void Tdowhile();
void Tgoto();
void Tbreak();
void Tcontinue();

void Loop() {


	//for(초기식, 종결식, 증감식{...}
	//while(종결식){초기식, 증감식}
	//do..while while과 비슷, 무조건 최초 한 번은 실행

	Tcontinue();

}
void Tfor() {
	//for (int i= 0; i < 5; i++){		
	//	for (int j = 0; j < 5; j++) {
	//		cout << "*";
	//	}
	//	cout << endl;
	//}

	for (int i = 10; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

void Twhile() {
	int x = 0;
	int y = 10;
	int result = 0;

	while (x <= y) {
		result += x;
		x++;
	}
	cout << result << endl;

}

void Tdowhile() {
	int x = 0;
	bool flag = true;
	do {
		cout << "*" << endl;
		if (x >= 3) flag = false;
		x++;
	} while (flag);
}

void Tgoto(){
	int x = 0;

	loopTemp:
		cout << " " << x << "\t";
		x++;
		if (x < 10) goto loopTemp;
		cout << endl;
}

void Tbreak() {
	for(int i= 0; i< true; i++) {
		cout << "*" << endl;
		if (i >= 3) break;
	}
}

void Tcontinue() {
	for (int i = 0; i< 10; i++) {
		int result = i % 3;
		if (result != 0) continue;
		cout << "i = " <<i<< endl;
	}
}