//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-13
개발자: 개발괴발자라우, dnffkffk0137gmail.com
최종 수정일 : 2019-11-13
*/

#include <iostream>
#include "DataType.h"
using namespace std;

/*
1. 정수형
	char: 1byte(-128 ~127)
	short: 2byte(-32768 ~ 32767)
	int : 4byte(-217483648 ~ 217483647)
	long : 4yte

2. 실수형
	flat: 4byte
	double: 8byte
	long double : 8byte

3. 논리형
	bool: 1byte 논리(참/거짓)
	0 이외의 경우 True >>>>> bool flag = false;

	>>>>>>>>>>>C>>>>>>>>>
	bool flag = 0//false
	bool flag = 1//True

4. 상수 : 한 번 값이 결정되면 프로세스가 종료될 때까지 변경할 수 없음.
	- 리터럴 상수 : 일상생활에서 주로 사용하는 데이터
	- 심볼릭 상수 : 상수를변수에 담은 것(const / 매크로 상수 이용 가능)
*/

void DataType() {
	
	int Num; //변수 선언
	Num = 10; // 변수 초기화

	int aNum = 10; //변수 선언 & 초기화

	cout << "Num: " << Num << endl;
	cout << "aNum: " << aNum << endl;

	int fint(123); // int fint = 123
	char fchar('c');
	cout << "fint: " << fint << endl;
	cout << "fchar: " << fchar << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "fint: " << sizeof(fint) << endl;
	cout << "char: " << sizeof(char) << endl;


	return;
}
