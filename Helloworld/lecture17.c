/*
* �ۼ��� : 2024-07-11
* �ۼ��� : �ӳ���
* �н���ǥ : �����Ϳ� ���� ����
*/

//�������� ����
// (������Ÿ��)* �̸�;
// ������ ����. ���ϴ� ��(�ּ�)�� ����

// �޸� ���ϴ� ������ : �ּҿ����� &
// ���� : ������ ���� ���� &num
// �ǹ� : num�� ������ �ִ� �ּ� ��ȯ

// �ּҸ� 16���� 8�� or 16�� ��Ʈ ������ ����ؼ� �޸� �ּ� ǥ��
// �ּҸ� ǥ���Ҷ� [16���� 4��Ʈ]

// �޸��� �ּ� ����
// int * numPointer; (���� �� numPtr) ������ �̸�
// ������ ���� ����

// �츮�� �����͸� �� ����ϴ°�?


#include "lectures.h"

void lecture17()
{
	printf("���ǽ���\n");

	int num;
	scanf_s("%d", &num);
	printf("num�� �� ��� : %d\n", num);

	// ������
	int* numPtr = &num; // int* numPtr ������ ���� ����� �ʱ�ȭ
	int* numPtr2 = &num;
	int* numPtr3 = &num;

	printf("%p\n", numPtr);
	printf("%p\n", numPtr2);
	printf("%p\n", numPtr3);

	printf("%d\n", *numPtr);
	printf("%d\n", *numPtr2);
	printf("%d\n\n", *numPtr3);

	// �������� ��� - 16���� �ּҰ� ��µȴ�

	// �ּҿ� ����� ���� ����ϴ� ���
	// ������ ������
	// '*' ���׿����� : ���ϱ�
	// '*' int num = 2*4;
	// '*' ���׿����� : �̹� ����� ������ �����տ�. *numPtr
	// numPtr�� ����Ű�� �ִ� ���� �����Ѵ�
	// int sum = 2*4;


	//�ǽ�
	printf("�ǽ�\n");
	// ���� int number 20 �Ҵ�, ������ ���� numberPtr �����ϰ� number�� �ִ� �ּ� �Ҵ�
	
	// 0. ���� ���� �� �ʱ�ȭ
	int number = 20;

	// 1. ������ ���� �����ϴ¹�
	// 2. ������ �ּ� ��ȯ�ϴ� ������&
	int* numberPtr = &number;
	 
	printf("numberPtr���� �ּ� : %p\n", numberPtr);
	

	// 3. ������ ������ ����Ű�� �ִ� ���� ��ȯ *
	printf("numberPtr�� ������ : % d\n\n", *numberPtr);

	// ������ ����
	printf("���� number�� �� : %d\n", number);
	*numberPtr = 30;
	printf("number�� �� : %d\n", number);

	// �ѹ� �� ����
	// 1. ���� num1 = 10; ������ Ư¡ : �޸� �ּҸ� ���� ���� �������ų� ���� ����
	// 2. �ּ� ������& : ������ �޸� �ּҸ� ����.
	// 3. ������ ������ * : ������ ������ �����ϰ� �ִ�(�޸� �� ����Ű�� �ִ�) ���� ����
	
	// int * numPtr /  *numPtr ���� < numPtr�� ������ ����
	// *numPtr = 30; �����Ͱ� ����Ű�� �ִ� ������ ����

	int a_num = 10;
	int* a_numPtr = &a_num;
	int* b_numPtr = a_numPtr;

	(*a_numPtr)++;
	(*b_numPtr)++;

	printf("%d\n\n", a_num);

	// ���� ����
	// �����̸� e_num1 e_num2 �����ؼ� 10 20 �Ҵ�
	// ������ ����Ű�� ������ e_num1Ptr e_num2Ptr ���� �� ����
	// int* temp ������ ����
	// e_num1 �ּ� -> temp�� ����, e_num2 �ּ� -> e_num1�� ����
	int e_num1 = 10;
	int e_num2 = 20;
	int* e_num1Ptr = &e_num1;
	int* e_num2Ptr = &e_num2;
	int* temp;

	printf("%d %d\n", *e_num1Ptr, *e_num2Ptr);

	temp = e_num1Ptr;
	e_num1Ptr = e_num2Ptr;
	e_num2Ptr = temp;

	printf("%d %d\n", *e_num1Ptr, *e_num2Ptr);

	// ����
	int exam_num1 = 10, exam_num2 = 20, temp2;
	temp2 = exam_num1;
	exam_num1 = exam_num2;
	exam_num2 = temp2;

	printf("%d %d\n", exam_num1, exam_num2);




}