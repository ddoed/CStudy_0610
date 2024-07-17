/*
* 작성일 : 2024-07-17
* 작성자 : 임나빈
* 학습목표 : 메모리 공간에 대한 이해, 동적 메모리 할당, 포인터 사용
*/

/*
* 코드 영역 : CPU가 읽어들인 파일을 실행시킨다. 명령어로 실행
* 데이터 영역 : 전역 변수, static 으로 선언한 변수가 저장
* 힙 영역 : 메모리를 수동으로 해제해야 하는 저장공간
* 스택 영역 : 메모리가 자동으로 해제되는 저장 공간
*/

// 1. 스택 영역 : 함수를 호출 call by value, 정보를 표현할 때, 기존 값은 유지한채로 다른결과를 표시하고 싶을 때
// 2. 힙 영역 : 배열의 크기에 대해서 고찰. 필요한 데이터 공간 만큼 적재적소로 넣음

// 스택, 힙 영역을 나누는 이유
// 메모리 공간이 한정적이기 때문

// 오버플로우
// 힙 오버 플로우 : 힙이 스택을 침법
// 스택 오버 플로우 : 스택이 힙 공간을 침범

// 재귀함수 : 함수가 자기자신을 호풀하도록 한 후 무한반복
// 힙 오버 플로우 예시 : malloc, free 직접 메모리 할당 및 해제.

#include "lectures.h"

void AllocateArray(int count)
{
	int* newPtr = malloc(sizeof(int) * count);

	for (int i = 0; i < count; ++i)
	{
		*(newPtr + i)= i;
		printf("%d\n", *(newPtr + i));
	}
	
}

void lecture21()
{
	// 동적으로 메모리를 할당하는 함수 malloc
	// memory + allocation : 메모리 할당 함수 줄여서 malloc
	// 포인터 변수 = malloc(크기); 크기 : 메모리 공간의 크기

	int num1 = 20;
	int* numptr = &num1;
	int* const numptr2 = malloc(4);

	*numptr2 = num1;
	printf("%d\n", *numptr2);

	// 동적 할당한 메모리는 반드시 해제 해줘야 한다
	// free
	printf("%d\n", numptr2);

	int arr[4] = { 1,2,3,4 };
	int* numptr3 = malloc(sizeof(int)*4); //16
	numptr3 = arr;

	printf("%d\n", *(numptr3 + 0));

	printf("예제 문제\n");

	// 동적으로 정수형 포인터 크기를 생성하는 함수를 작성
	int* a_ptr = NULL;
	int count;
	scanf_s("%d", &count);
	AllocateArray(count);

	char c = 69;
	char c2 = 'a';
	printf("%d\n", c2);
	printf("%c\n", c2);

	char* s = "Hello";
	printf("%s\n", s);

	// 리터럴 문자열 "@@@@" 
	// 컴파일 시에 0x0000 주소를 반환

	char sArr[5] = { 'H', 'e', 'l', 'l', 'o'};

	for (int i = 0; i < 5; ++i)
	{
		printf("%c", sArr[i]);
	}

	char* s2 = "Hello World!\n";
	printf("\n%s\n", s2);

	printf("e %c\n", *(s2 + 1));
	printf(" %c\n", *(s2 + 5));
	printf("w %c\n", *(s2 + 6));
	printf(" %c\n", *(s2 + 11)); // 문자열의 마지막에는 \ '0'= NULL문자

	int index = 0;

	while (*(s2 + index) != 0)
	{
		printf("%c", *(s2 + index));
		index++;
	}
}