/* 작성일 : 2024-07-12
*  작성자 : 임나빈
*  학습목표 : 포인터의 연산
*/

// 1. 포인터 주소에 연산을 해보자

#include "lectures.h"

void lecture18()
{
	printf("18강 시작\n");

	int num = 10;
	int* numptr = &num;
	(*numptr)++;
	printf("%d\n", *numptr); // num의 값 11

	int* numptrA = 0x100000;
	int* numptrB = 0x100000;

	numptrA = numptrA + 1;
	numptrB = numptrB + 2;

	printf("ptrA의 값 : %p\n", numptrA);
	printf("ptrB의 값 : %p\n", numptrB);

	// 주소의 크기
	printf("포인터 변수의 크기 : %d\n", sizeof(numptrA)); // x86 : 4
	printf("포인터 변수의 크기 : %d\n", sizeof(numptrA)); // x64 : 8

	// 포인터 변수의 크기가 다른 이유
	// 주소를 저장하는 변수. 크기를 가진다
	// 16진수를 1개의 바이트 공간. 8개 4비트 * 8 = 32
	// x86 : 32비트

	// 포인터와 배열
	int numArr[5] = { 11, 22, 33, 44, 55 };

	int index = 0;

	printf("%d\n", numArr[index+2]); // 배열의 시작 0부터

	// index의 값에 더하기 또는 빼기 연산자를 사용해서 numArr을 반복문으로 출력해보세요
	printf("numArr 정방향 출력\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", numArr[i]);
	}
	printf("\nnumArr 역방향 출력\n");
	for (int i = 4; i >= 0; i--)
	{
		printf("%d\n", numArr[i]);
	}

	int arr1[3] = { 0, 1, 2 };
	printf("배열의 이름 : %p\n", arr1);

	for (int i = 0; i < 3; i++)
	{
		printf("배열의 요소 %d 요소 : %p\n", i, &arr1[i]);
	}

	// 정리
	// 배열의 첫번째 요소의 값의 주소를 반환했더니
	// 그 결과값이 배열의 이름의 주소와 같다
	// 배열의 이름은 포인터

	// 배열에서 포인터 연산자 & *

	//정리
	// int 포인터 변수 + 1 : 주소의 값이 4만큼 크기가 커짐

	char* charPtr = 0x1000000;
	charPtr++;
	printf("%p\n", charPtr);//0x1000001 1바이트

	// 포인터의 연산은 sizeof(데이터형) x n(더해준 수) 크기가 증가한다.


	int arr2[3] = { 0, 1, 2 };
	// 배열도 포인터, 포인터 변수 선언 배열을 연결
	int* s_ptr = arr2;
	int* s_ptr2 = &arr2[0];

	&arr2[0]; // 배열 1번째 주소
	&arr2[1]; // 배열 2번째 주소
	&arr2[2]; // 배열 3번째 주소

	printf("%d\n", *(s_ptr+1)); // s_ptr 포인터 변수. s_ptr 가리키고 있는 주소 4를 증가시킴

	printf("%d\n", *(s_ptr2)++);

	//printf("%d\n", (*s_ptr)++);

	// 예제 문제 1
	// 길이가 5인 배열 선언 firstArr {1,2,3,4,5}
	// firstArr 이름을 포인터 변수에 넣기
	// firstArrptr 연산을 이용해서 해당 주소의 값을 3증가
	// 반복문 이용
	printf("\n문제1\n");
	int firstArr[5] = { 1,2,3,4,5 };
	int* firstArrPtr = firstArr;

	for (int i = 0; i < 5; i++)
	{
		*firstArrPtr += 3;
		firstArrPtr++;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("배열의 요소에 3을 증가시킨 값 %d\n", firstArr[i]);
	}

	// 정리
	int exArr[5] = { 0 };
	int* arrPtr2 = exArr;
	printf("배열의 크기 : %d\n", sizeof(exArr));
	printf("포인터의 크기 : %d\n", sizeof(arrPtr2));

	// 예제문제 2. 포인터 연산의 뺄셈이용
	int secondArr[5] = { 1, 2, 3, 4, 5 };
	int* secondArrPtr = secondArr;

	for (int i = 0; i < 5; i++)
	{
		*secondArrPtr += 3;
		secondArrPtr++;
	}

	for (int i = 4; i >= 0; i--)
	{
		printf("배열의 요소에 3을 증가시킨 값 %d\n", secondArr[i]);
	}
	
	// 예제 문제3. 길이가 6인 배열을 선언 1, 2, 3, 4, 5, 6 => 6, 5,4,3,2,1로 출력
	
}