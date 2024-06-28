#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int InputNumber(); // 함수를 미리 선언해두는 방식
                   // 사용 이유 : 컴파일러는 코드를 위에서 부터 읽기 때문에 미리 선언되어 있지 않은 호출 불가

// 지역 변수는 그 범위가 끝났을때 메모리에서 제거 됨
int main(void)
{
	SetColor(9, 13);
	int computerValue = StartNumberSetting();
	int userValue;
	int playerHP = SetPlayerHP(); // 지역변수로 사용되면 그 값이 사라지기 때문에
	                              // 함수의 리턴과 동시에 변수에 할당 해줘야 한다


	printf("★☆ 환영합니다. ☆★\n");
	printf("숫자를 입력하면 게임이 시작합니다.\n");
	ClearConsole();
	
	printf("게임 시작!\n\n");

	userValue = InputPlayerValue(&playerHP);
	
	while (1)
	{
		if (computerValue == userValue) // 1. 게임에서 승리했다 함수
		{
			GameWin();
			break;
		}
		else
		{
			if (computerValue > userValue)
			{
				ClearConsole();
				printf("작습니다\n\n");
			}
			
			else
			{
				ClearConsole();
				printf("큽니다\n\n");
				
			}

			if (playerHP <= 0)
			{
				printf("\n게임종료\n");
				break;
			}
				
			
			// 2. 플레이어의 체력을 감소 시키고 숫자를 다시 맞출 기회를 주는 함수
			
			userValue = Fail(&playerHP);

			
			
		}
	}


	return 0;
}

