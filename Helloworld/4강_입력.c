// �Է�
// Scanf �Լ��� �ǽ�
// ���� �̸� ���� (�Է��� �޾Ƽ� ������ ������ �̸� ����)
// �⺻ ���� : scanf("%d", &������ �̸�);
// scanf_s("%d", &num);
#include <stdio.h>

int main(void)
{
	int num;
	printf("����\n");
	printf("���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &num);
	printf("num�� �� ���� : %d \n\n", num);

	//����1 �ΰ��� ������ �Է¹޾Ƽ� �� ���� ������ ������ ��� ���
	//������ �̸� : Firstnum1, Firstnum2
	printf("����1\n");
	int FirstNum1, FirstNum2;
	scanf_s("%d %d", &FirstNum1, &FirstNum2);
	printf("�� ���� ���� : %d \n", FirstNum1 - FirstNum2);
	printf("�� ���� ���� : %d \n\n", FirstNum1 * FirstNum2);

	//����2 3���� ������ �Է¹޾Ƽ� SecondNum1 + SecondNum2 + SecondNum3
	printf("����2\n");
	int SecondNum1, SecondNum2, SecondNum3;
	scanf_s("%d %d %d", &SecondNum1, &SecondNum2, &SecondNum3);
	printf("��� : %d \n", SecondNum1+SecondNum2+SecondNum3);

	//����3 �ΰ��� ������ �Է¹޾Ƽ� ��� �������� ���
	//a%b ������

	return 0;
}