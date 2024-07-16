/*
*  작성일 : 2024-07-16
*  작상자 : 임나빈
*  학습목표 : 포인터의 인자를 함수에 사용, call by value 와 call by reference
*/

#include "lectures.h"

//배열의 선언하는 법 : int arr[10]

//값이 그 크기에 따라서 변함
//시작할 때 값을 초기화 해야함

void AddArrayElement(int* arr, int len, int add)
{
	for (int i = 0; i < len; ++i)
	{
		arr[i] += add;
		printf("%d\n", arr[i]);
	}
}

// Call by Value vs Call by Reference
void Call_by_Value(int num)
{
	num += 10;
}

void Call_by_Reference(int* numPtr)
{
	*numPtr = *numPtr + 10;
}

void SquareByValue(int num)
{
	num *= num;
}

void SqurareByRef(int* numPtr)
{
	*numPtr *= *numPtr;
}

void ChangeElement(int* a, int* b ,int* c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

int global_val_l20 = 30;

void DoublePointerCallByRef(int** ref)
{
	*ref = &global_val_l20; //주소
}

// 전역 변수, 지역변수
// 지역변수 : {}안에 작성되는 변수
// 전역변수

void DecimalToBinary(int num)
{
	int binary[20] = { 0 };
	int pos = 0;

	while (1)
	{
		
		binary[pos] = num % 2;
		num = num / 2;
		pos++;

		if (num == 0)
		{
			break;
		}
			
	}

	for (int i = pos - 1; i >= 0; --i)
	{
		printf("%d", binary[i]);
	}
	
}

void lecture20()
{
	int arr[3] = { 0,1,2 }; //5,6,7
	AddArrayElement(arr, 3, 5);

	int a = 10;
	int num = 10;

	Call_by_Value(num);
	printf("num의 값 : %d\n", num);
	Call_by_Reference(&num);
	printf("num의 값 : %d\n", num);

	printf("예제 문제 1\n");
	int b = 3;
	SquareByValue(b);
	printf("b의 값 : %d\n", b);
	SqurareByRef(&b);
	printf("b의 값 : %d\n", b);

	printf("예제 문제 2\n");
	int t1 = 10, t2 = 20, t3 = 30;
	ChangeElement(&t1, &t2, &t3);
	printf("%d %d %d\n", t1, t2, t3);

	printf("이중 포인터\n");
	int p1 = 10;
	int p2 = 20;
	int* p1Ptr = &p1;
	int* p2Ptr = &p2;
	int* p3Ptr = NULL;

	p3Ptr = &global_val_l20;

	DoublePointerCallByRef(&p1Ptr);
	printf("%d\n", *p1Ptr);


	printf("예제 문제 3\n");
	// 10진수를 2진수로 변환해서 출력하는 함수

	int input;
	scanf_s("%d", &input);

	

	DecimalToBinary(input);

	
}