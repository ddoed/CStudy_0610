#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("☆☆★환영합니다★☆☆\n\n");
	printf("숫자를 입력하면 게임이 시작합니다.\n");

	srand(time(NULL)); // 시간을 seed로 랜덤숫자 생성
	int computerValue = rand() % 100 + 1; //1에서 100 랜덤한 숫자가 들어감
	int userValue;
	
	
	printf("숫자입력 : ");
	scanf_s("%d", &userValue);

	printf("컴퓨터의 값 : %d\n", computerValue);
	printf("플레이어의 값 : %d\n", userValue);

	int score = 0;
	int playNum = 10;

	while (playNum > 0)
	{
		if (computerValue == userValue)
			printf("성공");
		else
			if (computerValue > userValue)

	}


	return 0;
}