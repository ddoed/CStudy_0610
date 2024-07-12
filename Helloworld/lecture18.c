/* �ۼ��� : 2024-07-12
*  �ۼ��� : �ӳ���
*  �н���ǥ : �������� ����
*/

// 1. ������ �ּҿ� ������ �غ���

#include "lectures.h"

void lecture18()
{
	printf("18�� ����\n");

	int num = 10;
	int* numptr = &num;
	(*numptr)++;
	printf("%d\n", *numptr); // num�� �� 11

	int* numptrA = 0x100000;
	int* numptrB = 0x100000;

	numptrA = numptrA + 1;
	numptrB = numptrB + 2;

	printf("ptrA�� �� : %p\n", numptrA);
	printf("ptrB�� �� : %p\n", numptrB);

	// �ּ��� ũ��
	printf("������ ������ ũ�� : %d\n", sizeof(numptrA)); // x86 : 4
	printf("������ ������ ũ�� : %d\n", sizeof(numptrA)); // x64 : 8

	// ������ ������ ũ�Ⱑ �ٸ� ����
	// �ּҸ� �����ϴ� ����. ũ�⸦ ������
	// 16������ 1���� ����Ʈ ����. 8�� 4��Ʈ * 8 = 32
	// x86 : 32��Ʈ

	// �����Ϳ� �迭
	int numArr[5] = { 11, 22, 33, 44, 55 };

	int index = 0;

	printf("%d\n", numArr[index+2]); // �迭�� ���� 0����

	// index�� ���� ���ϱ� �Ǵ� ���� �����ڸ� ����ؼ� numArr�� �ݺ������� ����غ�����
	printf("numArr ������ ���\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\n", numArr[i]);
	}
	printf("\nnumArr ������ ���\n");
	for (int i = 4; i >= 0; i--)
	{
		printf("%d\n", numArr[i]);
	}

	int arr1[3] = { 0, 1, 2 };
	printf("�迭�� �̸� : %p\n", arr1);

	for (int i = 0; i < 3; i++)
	{
		printf("�迭�� ��� %d ��� : %p\n", i, &arr1[i]);
	}

	// ����
	// �迭�� ù��° ����� ���� �ּҸ� ��ȯ�ߴ���
	// �� ������� �迭�� �̸��� �ּҿ� ����
	// �迭�� �̸��� ������

	// �迭���� ������ ������ & *

	//����
	// int ������ ���� + 1 : �ּ��� ���� 4��ŭ ũ�Ⱑ Ŀ��

	char* charPtr = 0x1000000;
	charPtr++;
	printf("%p\n", charPtr);//0x1000001 1����Ʈ

	// �������� ������ sizeof(��������) x n(������ ��) ũ�Ⱑ �����Ѵ�.


	int arr2[3] = { 0, 1, 2 };
	// �迭�� ������, ������ ���� ���� �迭�� ����
	int* s_ptr = arr2;
	int* s_ptr2 = &arr2[0];

	&arr2[0]; // �迭 1��° �ּ�
	&arr2[1]; // �迭 2��° �ּ�
	&arr2[2]; // �迭 3��° �ּ�

	printf("%d\n", *(s_ptr+1)); // s_ptr ������ ����. s_ptr ����Ű�� �ִ� �ּ� 4�� ������Ŵ

	printf("%d\n", *(s_ptr2)++);

	//printf("%d\n", (*s_ptr)++);

	// ���� ���� 1
	// ���̰� 5�� �迭 ���� firstArr {1,2,3,4,5}
	// firstArr �̸��� ������ ������ �ֱ�
	// firstArrptr ������ �̿��ؼ� �ش� �ּ��� ���� 3����
	// �ݺ��� �̿�
	printf("\n����1\n");
	int firstArr[5] = { 1,2,3,4,5 };
	int* firstArrPtr = firstArr;

	for (int i = 0; i < 5; i++)
	{
		*firstArrPtr += 3;
		firstArrPtr++;
	}

	for (int i = 0; i < 5; i++)
	{
		printf("�迭�� ��ҿ� 3�� ������Ų �� %d\n", firstArr[i]);
	}

	// ����
	int exArr[5] = { 0 };
	int* arrPtr2 = exArr;
	printf("�迭�� ũ�� : %d\n", sizeof(exArr));
	printf("�������� ũ�� : %d\n", sizeof(arrPtr2));

	// �������� 2. ������ ������ �����̿�
	int secondArr[5] = { 1, 2, 3, 4, 5 };
	int* secondArrPtr = secondArr;

	for (int i = 0; i < 5; i++)
	{
		*secondArrPtr += 3;
		secondArrPtr++;
	}

	for (int i = 4; i >= 0; i--)
	{
		printf("�迭�� ��ҿ� 3�� ������Ų �� %d\n", secondArr[i]);
	}
	
	// ���� ����3. ���̰� 6�� �迭�� ���� 1, 2, 3, 4, 5, 6 => 6, 5,4,3,2,1�� ���
	
}