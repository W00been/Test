//지금은 C++프로그램 언어를 학습하고 있습니다.
/*
프로그램 작성일 : 2019-11-13
개발자: 개발괴발자라우, dnffkffk0137gmail.com	
최종 수정일 : 2019-11-13
*/


#include "HelloWorld.h" //입출력
#include "DataType.h" //자료형
#include "Operator.h" //연산자
#include "Operator2.h"
#include "Loop.h" //반복문
#include "Conditional.h" //조건문
#include "String.h" //문자열
#include "Array.h" //배열
#include "Function.h" //함수
#include "Class.h" //클래스
#include "Inheritance.h" //상속
#include "Point.h" //포인터
#include "Dynamicmemory.h" //동적메모리 할당
#include "Polymorphism.h" //다형성
#include "Vector.h" //벡터

#include <iostream> // <iostream>은 입출력 객체 정의한 헤더파일(cout,cin, endl 등)

using namespace std; // 표준라이브러리활용, std::cout << "Hello World" << std: endl;

int main()// 필수 요소
{
	Tvector();

	return 0; //함수의 종료를 알리며, 호출부 쪽으로 값 전달
}

//콘솔창이 안나오는 경우, 프로젝트 속성- 링커- 시스템- 하위시스템 - 콘솔