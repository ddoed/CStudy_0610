/*
* �ۼ��� : �ӳ���
* �ۼ��� : 2024-06-26
* �н���ǥ : break, continue
*/

/*
* for �ݺ���, while �ݺ���
* �ݺ����� ������ �����ϰ� ǥ��
* break continue
* for while do while swith���� ���
*/

/*
* break : �����帧���� ����� ���� ���. break ����Ǹ� �ش� ������� ���� ���´�
* continue : �����帧�� ������ ���·� �ش��ڵ��� ���ุ �ǳ� ��
*/


#include "lectures.h";

void lecture13()
{
	////printf 10�� �ݺ�
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Hi %d\n", i);
	//
	//	if (i == 7)
	//	{
	//		printf("i�� 7�϶� ���\n\n");
	//		break;
	//	}
	//}
	//
	//int index = 0;
	//for (;;)
	//{
	//	index++;
	//	printf("hi %d\n", index);
	//	if (index == 7)
	//	{
	//		printf("7�� ��µ�\n\n");
	//		break;
	//	}
	//}
	//
	////
	//int count = 0;
	//int targetNumber;
	//scanf_s("%d", &targetNumber);
	//
	//for (;;)
	//{
	//	count++;
	//	if (count == targetNumber)
	//	{
	//		printf("���ϴ� ��� ���� ��µǾ����ϴ�. %d\n\n", targetNumber);
	//		break;
	//	}
	//}
	//
	////
	//int w_counter = 0;
	//scanf_s("%d", &targetNumber);
	//
	//while (1)
	//{
	//	w_counter++;
	//	if (w_counter == targetNumber)
	//	{
	//		printf("���ϴ� ��� ���� ��µǾ����ϴ�. %d\n\n", targetNumber);
	//		break;
	//	}
	//}
	//
	//// continue ��뿹��
	//int w_num = 0;
	//while (w_num < 10)
	//{
	//	w_num++;
	//	if (w_num % 2 != 0)
	//	{
	//		printf("�ǳʶ� w_num�� �� : %d\n\n", w_num);
	//		continue;
	//	}
	//	printf("w_num�� �� : %d\n\n", w_num);
	//
	//}

	//
	int diceNum, gameMoney;
	printf("�ֻ��� ���� ����\n");
	printf("�ֻ����� ���� ����ּ���\n");
	scanf_s("%d", &diceNum);
	gameMoney = 1000;

	while (1)
	{
		if (diceNum <= 0 | diceNum > 6)
		{
			printf("�߸��� �ֻ����� ũ�⸦ �Է��߽��ϴ�. \n �ֻ����� ũ�⸦ �ٽ� �Է����ּ���");
			scanf_s("%d\n", &diceNum);
		}
		else
			if (diceNum % 2 == 0)
			{
				gameMoney *= 2;
				printf("���� ���� ���� �ݾ� : %d\n", gameMoney);
				if (gameMoney > 5000)
				{
					printf("���ӿ��� �¸��߽��ϴ�. �����ݾ��� %d���Դϴ�", gameMoney);
					break;
				}
				else
				{ 
					printf("�ֻ����� ���� ����ּ���\n");
					scanf_s("%d", &diceNum);
				}
			}
			else
			{
				gameMoney = 0;
				printf("����� ���ӿ��� �����ϴ�. ���� �ݾ��� : %d\n", gameMoney);
				break;
			}
	}

	




}