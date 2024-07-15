/*
* �ۼ��� : 2024-07-15
* �ۼ��� : �ӳ���
* �н� ��ǥ : �迭�� �������� ���� -> ��� ������
*/

// 1. �迭�� �������� ����
// (1) sizeof(�迭), sizeof(�����ͺ���)
// (2) �迭�� ��� �����ʹ�

// 2. �����Ϳ� ���
// (1) ����� ����Ű�� ������
// (2) ������ �� ��ü�� ��� constant pointer
// (30 ����� ����Ű�� �� ��ü�� ����� ������ constant pointer to constant

#include "lectures.h"

void ShowData(const int* ptr) // const int* arr �ǹ� ����
{
	const int* rPtr = ptr;
	printf("%d\n", *rPtr);
	//*rPtr = 20;
}

void ShowAllData(int* const arr, int len)
{
	//for �ݺ������� arr�� ���� ��ŭ �迭��Ҹ� printf
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

	// (1) sizeof ������
	int arr[3] = { 1,2,3 };
	int* arrPtr = &arr[0];

	printf("�迭�� ũ�� : %d ",sizeof(arr)); // sizeof(int) x 3 = 12
	printf("�������� ũ�� : %d", sizeof(arrPtr)); // 16����. 32��Ʈ 64��Ʈ 8 x 4��Ʈ(32) 16 x 4��Ʈ (64)

	// �����͸� ����ϸ� �޸� �� ���� ���

	// (1) ����� ����Ű�� ������
	// num�� ���� �������� ���ϰ� �����ش�
	// const int* ������ ������ �� ���� �������� ���Ѵ� ������ �����ڷ� ���� ���ٲ۴�
	const int num = 10;
	const int* numPtr = &num; //
	// *numptr = 15;
	
	// (2) ������ �� ��ü�� ���
	int num1 = 20;
	int num2 = 30;
	int* const numcptr = &num1; //����������� ����
	// numCptr = &num2; �迭�� ��� ������. �迭�� ���� ���� �迭�� �ּҸ� ������ �� ����.

	// (3) ����� ����Ű�� �� ��ü�� ����� ������
	const int num3 = 40;
	const int num4 = 50;
	const int* const numCptr = &num3;

	// ������ ����
	// Const
	// �� const, �ּ� const
	// �� const- ��� ������
	// �ּ� const - ����� ����Ű�� ������

}

