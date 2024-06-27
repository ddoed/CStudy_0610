#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// printf 함수와 scanf 함수를 사용해서 게임의 느낌을 만들어 보도록 합시다.

	// 플레이어를 ★☆ 환영하는 텍스트를 출력해주세요 ☆★

	// printf( 숫자를 입력하면 게임이 시작합니다.) 
	// scanf -> 입력을 받는다.. 커서가 멈춘상태로 대기하고 있다.

	// 정수 또는 실수 데이터를 만들어서 컴퓨터가 생각하는 결과를 출력하고,
	// 내가 생각하는 결과를 같이 출력하는 프로그램을 만들어 보세요.

	srand(time(NULL));
	int computerValue = rand() % 100 + 1; // 1 ~ 100 랜덤한 숫자가 computerValue에 입력이 됩니다.
	int userValue;
	int playerHP = 5;


	printf("★☆ 환영합니다. ☆★\n");
	printf("숫자를 입력하면 게임이 시작합니다.\n");
	printf("게임 시작!\n");

	printf("플레이어의 값을 입력해주세요. ");
	scanf_s("%d", &userValue);
	// 컴퓨터의 벨류는 ~ 값입니다.
	printf("컴퓨터의 값은 %d 입니다.", computerValue);
	// 플레이어의 값은 ~ 입니다.

	printf("플레이어의 값은 %d 입니다.", userValue);

	while (1)
	{
		if (computerValue == userValue) // 1. 게임에서 승리했다 함수
		{
			GameWin();
			break;
		}
		else
		{
			if (playerHP <= 0)
			{
				printf("게임종료\n");
				break;
			}
			// 2. 플레이어의 체력을 감소 시키고 숫자를 다시 맞출 기회를 주는 함수
			
			playerHP--;
			printf("플레이어의 값 입력\n");
			scanf_s("%d", &userValue);
			
			
		}
	}


	return 0;
}