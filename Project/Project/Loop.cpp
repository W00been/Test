//������ C++���α׷� �� �н��ϰ� �ֽ��ϴ�.
/*
���α׷� �ۼ��� : 2019-11-18
������: ���߱����ڶ��, dnffkffk0137gmail.com
���� ������ : 2019-11-18
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


	//for(�ʱ��, �����, ������{...}
	//while(�����){�ʱ��, ������}
	//do..while while�� ���, ������ ���� �� ���� ����

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