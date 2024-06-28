#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CountNumFunc.h"
#include "windows.h"

// 함수 이름 쉽게 변경하는 방법 ctrl R R >> 이름 전부 바뀜

void GameWin()
{
	printf("\n컴퓨터의 값과 일치합니다. 축하합니다.\n");
}

int StartNumberSetting()
{
	srand(time(NULL));
	return rand() % 100 + 1;
}

int Fail(int* playerHP)
{
	(*playerHP)--;
	return InputPlayerValue(playerHP);
}

int SetPlayerHP()
{
	int playerHP;
	printf("플레이어의 HP를 설정하세요 : ");
	scanf_s("%d", &playerHP);
	return playerHP-1;
}

int InputPlayerValue(int* a)
{
	int userValue;
	printf("남은 기회 %d번\n", *a);
	printf("플레이어의 값을 입력해주세요. : ");
	scanf_s("%d", &userValue);
	return userValue;
}
void SetColor(unsigned char BGColor, unsigned char TextColor)
{
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char ColorNum = (BGColor << 4) | TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}

void ClearConsole()
{
	system("cls");
}