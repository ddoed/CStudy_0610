// �Է�
// Scanf �Լ��� �ǽ�
// ���� �̸� ���� (�Է��� �޾Ƽ� ������ ������ �̸� ����)
// �⺻ ���� : scanf("%d", &������ �̸�);
// scanf_s("%d", &num);

#include "lectures.h"
void lecture4_2()
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
	printf("SecondNum1 + SecondNum2 + SecondNum3 : %d \n\n", SecondNum1 + SecondNum2 + SecondNum3);

	//����3 �ΰ��� ������ �Է¹޾Ƽ� ��� �������� ���
	//a%b ������
	printf("����3\n");
	int ThiredNum1, ThiredNum2;
	printf("ù��° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &ThiredNum1);
	printf("�ι�° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &ThiredNum2);
	
	printf("�� : %d ",ThiredNum1/ThiredNum2 );
	printf("������ : %d \n\n", ThiredNum1 % ThiredNum2);

	//���� 4. �ϳ��� ������ �޾Ƽ� ������ ����ϴ� �ڵ� �ۼ�
	printf("����4\n");
	int fourthNum;
	printf("���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &fourthNum);
	printf("���� : %d ", fourthNum*fourthNum);
	

	//���� 5. ������ ������ �Է��� �޾Ƽ� {fifthNum1-fifthNum2} x {fifthNum2 + fifthNum3} x {fifthNum3*fifthNum1}
	printf("\n\n����5\n");
	int fifthNum1, fifthNum2, fifthNum3;
	printf("ù��° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &fifthNum1);
	printf("�ι�° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &fifthNum2);
	printf("����° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &fifthNum3);
	printf("{fifthNum1-fifthNum2} x {fifthNum2 + fifthNum3} x {fifthNum3*fifthNum1} : %d \n\n", (fifthNum1 - fifthNum2 ) * ( fifthNum2 + fifthNum3 ) * ( fifthNum3 * fifthNum1 ));
}