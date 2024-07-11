/*
* 작성일 : 2024-07-11
* 작성자 : 임나빈
* 학습목표 : 포인터에 대한 이해
*/

//포인터의 이해
// (데이터타입)* 이름;
// 포인터 변수. 변하는 값(주소)를 저장

// 메모리 구하는 연산자 : 주소연산자 &
// 사용법 : 변수를 먼저 선언 &num
// 의미 : num이 가지고 있는 주소 반환

// 주소를 16진수 8개 or 16개 비트 공간을 사용해서 메모리 주소 표현
// 주소를 표현할때 [16진수 4비트]

// 메모리의 주소 저장
// int * numPointer; (줄인 말 numPtr) 변수의 이름
// 포인터 변수 선언

// 우리가 포인터를 왜 써야하는가?


#include "lectures.h"

void lecture17()
{
	printf("강의시작\n");

	int num;
	scanf_s("%d", &num);
	printf("num의 값 출력 : %d\n", num);

	// 포인터
	int* numPtr = &num; // int* numPtr 포인터 변수 선언과 초기화
	int* numPtr2 = &num;
	int* numPtr3 = &num;

	printf("%p\n", numPtr);
	printf("%p\n", numPtr2);
	printf("%p\n", numPtr3);

	printf("%d\n", *numPtr);
	printf("%d\n", *numPtr2);
	printf("%d\n\n", *numPtr3);

	// 포인터의 출력 - 16진수 주소가 출력된다

	// 주소에 저장된 값을 출력하는 방법
	// 역참조 연산자
	// '*' 이항연산자 : 곱하기
	// '*' int num = 2*4;
	// '*' 단항연산자 : 이미 선언된 포인터 변수앞에. *numPtr
	// numPtr이 가리키고 있는 값을 참조한다
	// int sum = 2*4;


	//실습
	printf("실습\n");
	// 정수 int number 20 할당, 포인터 변수 numberPtr 선언하고 number에 있는 주소 할당
	
	// 0. 변수 선언 및 초기화
	int number = 20;

	// 1. 포인터 변수 선언하는법
	// 2. 변수의 주소 반환하는 연산자&
	int* numberPtr = &number;
	 
	printf("numberPtr안의 주소 : %p\n", numberPtr);
	

	// 3. 포인터 변수가 가리키고 있는 참조 변환 *
	printf("numberPtr의 참조값 : % d\n\n", *numberPtr);

	// 참조값 수정
	printf("기존 number의 값 : %d\n", number);
	*numberPtr = 30;
	printf("number의 값 : %d\n", number);

	// 한번 더 정리
	// 1. 변수 num1 = 10; 변수의 특징 : 메모리 주소를 몰라도 값을 가져오거나 저장 가능
	// 2. 주소 연산자& : 변수의 메모리 주소를 구함.
	// 3. 역참조 연산자 * : 포인터 변수가 참조하고 있는(메모리 상에 가리키고 있는) 값에 접근
	
	// int * numPtr /  *numPtr 구분 < numPtr이 포인터 변수
	// *numPtr = 30; 포인터가 가리키고 있는 참조값 변경

	int a_num = 10;
	int* a_numPtr = &a_num;
	int* b_numPtr = a_numPtr;

	(*a_numPtr)++;
	(*b_numPtr)++;

	printf("%d\n\n", a_num);

	// 예제 문제
	// 변수이름 e_num1 e_num2 선언해서 10 20 할당
	// 변수를 가리키는 포인터 e_num1Ptr e_num2Ptr 선언 후 대입
	// int* temp 포인터 선언
	// e_num1 주소 -> temp에 저장, e_num2 주소 -> e_num1에 저장
	int e_num1 = 10;
	int e_num2 = 20;
	int* e_num1Ptr = &e_num1;
	int* e_num2Ptr = &e_num2;
	int* temp;

	printf("%d %d\n", *e_num1Ptr, *e_num2Ptr);

	temp = e_num1Ptr;
	e_num1Ptr = e_num2Ptr;
	e_num2Ptr = temp;

	printf("%d %d\n", *e_num1Ptr, *e_num2Ptr);

	// 복습
	int exam_num1 = 10, exam_num2 = 20, temp2;
	temp2 = exam_num1;
	exam_num1 = exam_num2;
	exam_num2 = temp2;

	printf("%d %d\n", exam_num1, exam_num2);




}