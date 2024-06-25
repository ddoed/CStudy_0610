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
	
	
	printf("숫자입력 : ");
	scanf_s("%d", &userValue);

	//컴퓨터의 밸류는 ~값입니다.
	printf("컴퓨터의 값 : %d\n", computerValue);
	

	// 플레이어의 값은 ~입니다.
	printf("플레이어의 값 : %d\n", userValue);

	int score = 0;
	int playNum = 10;

	if (computerValue == userValue)
	{
		printf("성공\n\n");
		score += 10;
	}

	else
	{
		printf("실패\n\n");
		main();
	}

	if (score >= 90)
		printf("A등급");
	else if (score >= 80)
		printf("B등급");
	else if (score >= 70)
		printf("C등급");
	else if (score >= 60)
		printf("D등급");
	else
		printf("F등급");

	return 0;
}