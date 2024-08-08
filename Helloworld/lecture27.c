// void�� ���� ���� (1) �Լ��� ��ȯ�� (2) void Pointer
// Enum�� ���� ���� (1) Enum�� �� �ʿ��Ѱ�

// void : ��ȯ���� ����
// ��ȯ���� �����ϴ� ���� : �����Ϸ��� �� �ڵ带 ������ ũ�⸦ �̸� �������ִ� ���
// int num

// void�� �޸� ������ �󸶳� ����Ǵ��� �� �� ��� void�� ������ ����Ұ�
// 

#include "lectures.h"
#define INT 1
#define DOUBLE 2
#define FLOAT 3

void Add_one(int* a)
{
	*a = *a + 1;
}

// ������ ENUM
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
			printf("�ش��ϴ� Ÿ���� �����ϴ�.\n");
	}
}

void lecture27()
{
	int num = 1;
	Add_one(&num);

	void* voidPtr;//������ ������ 64��Ʈ �ý����϶� 8����Ʈ�� ũ�⸦ Ȯ��
	printf("void*�� ũ�� : %d\n", sizeof(voidPtr));

	double a = 1.1;
	voidPtr = &a;

	printf("voidPtr�� ����Ű�� �� : %lf\n", *(double*)voidPtr);

	char c1 = 'a';
	char c2 = 'b';

	SwapValue(&c1, &c2, TYPE_Char);
	printf("�� Ȯ�� : %c %c\n", c1, c2);

	int a1 = 1;
	int a2 = 2;
	SwapValue(&a1, &a2, TYPE_INT);
	printf("�� Ȯ�� : %d %d\n", a1, a2);

	double d1 = 1.1;
	double d2 = 2.2;
	SwapValue(&d1, &d2, TYPE_Double);
	printf("�� Ȯ�� : %lf %lf\n", d1, d2);


}