/*
* 작성자 : 임나빈
* 작성일 : 2024-06-26
* 학습목표 : break, continue
*/

/*
* for 반복문, while 반복문
* 반복적인 내용을 간결하게 표현
* break continue
* for while do while swith에서 사용
*/

/*
* break : 제어흐름에서 벗어나기 위해 사용. break 선언되면 해당 제어문에서 빠져 나온다
* continue : 제어흐름을 유지한 상태로 해당코드의 실행만 건너 뜀
*/


#include "lectures.h";

void lecture13()
{
	////printf 10번 반복
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("Hi %d\n", i);
	//
	//	if (i == 7)
	//	{
	//		printf("i가 7일때 출력\n\n");
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
	//		printf("7이 출력됨\n\n");
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
	//		printf("원하는 결과 값이 출력되었습니다. %d\n\n", targetNumber);
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
	//		printf("원하는 결과 값이 출력되었습니다. %d\n\n", targetNumber);
	//		break;
	//	}
	//}
	//
	//// continue 사용예시
	//int w_num = 0;
	//while (w_num < 10)
	//{
	//	w_num++;
	//	if (w_num % 2 != 0)
	//	{
	//		printf("건너뛴 w_num의 값 : %d\n\n", w_num);
	//		continue;
	//	}
	//	printf("w_num의 값 : %d\n\n", w_num);
	//
	//}

	//
	int diceNum, gameMoney;
	printf("주사위 예제 시작\n");
	printf("주사위의 수를 골라주세요\n");
	scanf_s("%d", &diceNum);
	gameMoney = 1000;

	while (1)
	{
		if (diceNum <= 0 | diceNum > 6)
		{
			printf("잘못된 주사위의 크기를 입력했습니다. \n 주사위의 크기를 다시 입력해주세요");
			scanf_s("%d\n", &diceNum);
		}
		else
			if (diceNum % 2 == 0)
			{
				gameMoney *= 2;
				printf("현재 보유 중인 금액 : %d\n", gameMoney);
				if (gameMoney > 5000)
				{
					printf("게임에서 승리했습니다. 보유금액은 %d원입니다", gameMoney);
					break;
				}
				else
				{ 
					printf("주사위의 수를 골라주세요\n");
					scanf_s("%d", &diceNum);
				}
			}
			else
			{
				gameMoney = 0;
				printf("당신은 게임에서 졌습니다. 보유 금액은 : %d\n", gameMoney);
				break;
			}
	}

	




}