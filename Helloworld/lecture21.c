/*
* �ۼ��� : 2024-07-17
* �ۼ��� : �ӳ���
* �н���ǥ : �޸� ������ ���� ����, ���� �޸� �Ҵ�, ������ ���
*/

/*
* �ڵ� ���� : CPU�� �о���� ������ �����Ų��. ��ɾ�� ����
* ������ ���� : ���� ����, static ���� ������ ������ ����
* �� ���� : �޸𸮸� �������� �����ؾ� �ϴ� �������
* ���� ���� : �޸𸮰� �ڵ����� �����Ǵ� ���� ����
*/

// 1. ���� ���� : �Լ��� ȣ�� call by value, ������ ǥ���� ��, ���� ���� ������ä�� �ٸ������ ǥ���ϰ� ���� ��
// 2. �� ���� : �迭�� ũ�⿡ ���ؼ� ����. �ʿ��� ������ ���� ��ŭ �������ҷ� ����

// ����, �� ������ ������ ����
// �޸� ������ �������̱� ����

// �����÷ο�
// �� ���� �÷ο� : ���� ������ ħ��
// ���� ���� �÷ο� : ������ �� ������ ħ��

// ����Լ� : �Լ��� �ڱ��ڽ��� ȣǮ�ϵ��� �� �� ���ѹݺ�
// �� ���� �÷ο� ���� : malloc, free ���� �޸� �Ҵ� �� ����.

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
	// �������� �޸𸮸� �Ҵ��ϴ� �Լ� malloc
	// memory + allocation : �޸� �Ҵ� �Լ� �ٿ��� malloc
	// ������ ���� = malloc(ũ��); ũ�� : �޸� ������ ũ��

	int num1 = 20;
	int* numptr = &num1;
	int* const numptr2 = malloc(4);

	*numptr2 = num1;
	printf("%d\n", *numptr2);

	// ���� �Ҵ��� �޸𸮴� �ݵ�� ���� ����� �Ѵ�
	// free
	printf("%d\n", numptr2);

	int arr[4] = { 1,2,3,4 };
	int* numptr3 = malloc(sizeof(int)*4); //16
	numptr3 = arr;

	printf("%d\n", *(numptr3 + 0));

	printf("���� ����\n");

	// �������� ������ ������ ũ�⸦ �����ϴ� �Լ��� �ۼ�
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

	// ���ͷ� ���ڿ� "@@@@" 
	// ������ �ÿ� 0x0000 �ּҸ� ��ȯ

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
	printf(" %c\n", *(s2 + 11)); // ���ڿ��� ���������� \ '0'= NULL����

	int index = 0;

	while (*(s2 + index) != 0)
	{
		printf("%c", *(s2 + index));
		index++;
	}
}