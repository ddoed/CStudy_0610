#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// printf 함수와 scanf 함수를 사용해서 게임의 느낌을 만들어 보도록 합시다.

	//플레이어를 환영하는 텍스트를 출력 (특수문자키)
	printf("☆☆★환영합니다★☆☆\n\n");

	//printf(숫자를 입력하면 게임 시작)
	//scanf -> 입력받기 -> 커서 멈춘 상태로 대기
	printf("숫자를 입력하면 게임이 시작합니다.\n");

	//정수 또는 실수 데이터를 만들어서 컴퓨터가 생각하는 결과를 출력하고
	// 내가 생각하는 결과를 같이 출력하는 프로그램

	srand(time(NULL)); // 시간을 seed로 랜덤숫자 생성
	int computerValue = rand() % 100 + 1; //1에서 100 랜덤한 숫자가 들어감
	int userValue;
	int score = 0;
	int playNum = 10;
	printf("숫자입력 : ");
	scanf_s("%d", &userValue);

	while (playNum > 0 & (computerValue != userValue))
	{
		
		
		if (computerValue > userValue)
		{
			printf("작습니다\n\n");
			playNum -= 1;
		}
		else
		{
			printf("큽니다\n\n");
			playNum -= 1;
			}
		printf("%d번 남음\n", playNum);
		printf("숫자를 다시 입력하세요 : ");
		scanf_s("%d", &userValue);

		
	}
	if (playNum < 0)
		printf("실패");
	else
		printf("성공");

	

	return 0;
}