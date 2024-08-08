// void에 대한 설명 (1) 함수의 반환형 (2) void Pointer
// Enum에 대한 설명 (1) Enum이 왜 필요한가

// void : 반환형이 없다
// 반환형이 존재하는 이유 : 컴파일러가 이 코드를 보고나서 크기를 미리 결정해주는 기능
// int num

// void는 메모리 공간에 얼마나 저장되는지 알 수 없어서 void형 변수는 선언불가
// 

#include "lectures.h"
#define INT 1
#define DOUBLE 2
#define FLOAT 3

void Add_one(int* a)
{
	*a = *a + 1;
}

// 열거형 ENUM
// 

typedef enum TYPE {TYPE_Char, TYPE_INT, TYPE_Double}Type;

void SwapValue(void* ptr1, void* ptr2, Type type)
{
	switch (type)
	{
		case TYPE_Char :
		{
			char temp;
			temp = (*(char*)ptr1);
			(*(char*)ptr1) = (*(char*)ptr2);
			(*(char*)ptr2) = temp;
			break;
		}

		case TYPE_INT:
		{
			int temp;
			temp = (*(int*)ptr1);
			(*(int*)ptr1) = (*(int*)ptr2);
			(*(int*)ptr2) = temp;
			break;
		}

		case TYPE_Double:
		{
			double temp;
			temp = (*(double*)ptr1);
			(*(double*)ptr1) = (*(double*)ptr2);
			(*(double*)ptr2) = temp;
			break;
		}
		default :
			printf("해당하는 타입이 없습니다.\n");
	}
}

void lecture27()
{
	int num = 1;
	Add_one(&num);

	void* voidPtr;//포인터 변수는 64비트 시스템일때 8바이트의 크기를 확보
	printf("void*의 크기 : %d\n", sizeof(voidPtr));

	double a = 1.1;
	voidPtr = &a;

	printf("voidPtr가 가르키는 값 : %lf\n", *(double*)voidPtr);

	char c1 = 'a';
	char c2 = 'b';

	SwapValue(&c1, &c2, TYPE_Char);
	printf("값 확인 : %c %c\n", c1, c2);

	int a1 = 1;
	int a2 = 2;
	SwapValue(&a1, &a2, TYPE_INT);
	printf("값 확인 : %d %d\n", a1, a2);

	double d1 = 1.1;
	double d2 = 2.2;
	SwapValue(&d1, &d2, TYPE_Double);
	printf("값 확인 : %lf %lf\n", d1, d2);


}