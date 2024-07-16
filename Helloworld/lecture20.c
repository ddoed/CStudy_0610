/*
*  �ۼ��� : 2024-07-16
*  �ۻ��� : �ӳ���
*  �н���ǥ : �������� ���ڸ� �Լ��� ���, call by value �� call by reference
*/

#include "lectures.h"

//�迭�� �����ϴ� �� : int arr[10]

//���� �� ũ�⿡ ���� ����
//������ �� ���� �ʱ�ȭ �ؾ���

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
	*ref = &global_val_l20; //�ּ�
}

// ���� ����, ��������
// �������� : {}�ȿ� �ۼ��Ǵ� ����
// ��������

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
	printf("num�� �� : %d\n", num);
	Call_by_Reference(&num);
	printf("num�� �� : %d\n", num);

	printf("���� ���� 1\n");
	int b = 3;
	SquareByValue(b);
	printf("b�� �� : %d\n", b);
	SqurareByRef(&b);
	printf("b�� �� : %d\n", b);

	printf("���� ���� 2\n");
	int t1 = 10, t2 = 20, t3 = 30;
	ChangeElement(&t1, &t2, &t3);
	printf("%d %d %d\n", t1, t2, t3);

	printf("���� ������\n");
	int p1 = 10;
	int p2 = 20;
	int* p1Ptr = &p1;
	int* p2Ptr = &p2;
	int* p3Ptr = NULL;

	p3Ptr = &global_val_l20;

	DoublePointerCallByRef(&p1Ptr);
	printf("%d\n", *p1Ptr);


	printf("���� ���� 3\n");
	// 10������ 2������ ��ȯ�ؼ� ����ϴ� �Լ�

	int input;
	scanf_s("%d", &input);

	

	DecimalToBinary(input);

	
}