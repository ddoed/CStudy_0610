/*
* 작성일 : 2024-07-15
* 작성자 : 임나빈
* 학습 목표 : 배열과 포인터의 차이 -> 상수 포인터
*/

// 1. 배열과 포인터의 차이
// (1) sizeof(배열), sizeof(포인터변수)
// (2) 배열은 상수 포인터다

// 2. 포인터와 상수
// (1) 상수를 가르키는 포인터
// (2) 포인터 그 자체가 상수 constant pointer
// (30 상수를 가리키는 그 자체가 상수인 포인터 constant pointer to constant

#include "lectures.h"

void ShowData(const int* ptr) // const int* arr 의미 생각
{
	const int* rPtr = ptr;
	printf("%d\n", *rPtr);
	//*rPtr = 20;
}

void ShowAllData(int* const arr, int len)
{
	//for 반복문으로 arr의 길이 만큼 배열요소를 printf
	for (int i = 0; i < len; i++)
	{
		printf("%d\n", arr[i]);
	}
}

void lecture19()
{
	int testArr[3] = { 1,2,3 };
	ShowAllData(testArr, sizeof(testArr) / sizeof(int));

	const int s_num = 10;
	int* s_numPtr = &s_num;
	ShowData(s_numPtr);

	// (1) sizeof 연산자
	int arr[3] = { 1,2,3 };
	int* arrPtr = &arr[0];

	printf("배열의 크기 : %d ",sizeof(arr)); // sizeof(int) x 3 = 12
	printf("포인터의 크기 : %d", sizeof(arrPtr)); // 16진수. 32비트 64비트 8 x 4비트(32) 16 x 4비트 (64)

	// 포인터를 사용하면 메모리 더 적게 사용

	// (1) 상수를 가르키는 포인터
	// num의 값을 변경하지 못하게 막아준다
	// const int* 포인터 변수도 그 값을 변경하지 못한다 역참조 연산자로 값을 못바꾼다
	const int num = 10;
	const int* numPtr = &num; //
	// *numptr = 15;
	
	// (2) 포인터 그 자체가 상수
	int num1 = 20;
	int num2 = 30;
	int* const numcptr = &num1; //상수포인터의 선언
	// numCptr = &num2; 배열은 상수 포인터. 배열의 선언 이후 배열의 주소를 변경할 수 없다.

	// (3) 상수를 가리키는 그 자체가 상수인 포인터
	const int num3 = 40;
	const int num4 = 50;
	const int* const numCptr = &num3;

	// 포인터 선언
	// Const
	// 값 const, 주소 const
	// 값 const- 상수 포인터
	// 주소 const - 상수를 가리키는 포인터

}

