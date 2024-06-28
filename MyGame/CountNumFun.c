#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "CountNumFunc.h"
#include "windows.h"

// �Լ� �̸� ���� �����ϴ� ��� ctrl R R >> �̸� ���� �ٲ�

void GameWin()
{
	printf("\n��ǻ���� ���� ��ġ�մϴ�. �����մϴ�.\n");
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
	printf("�÷��̾��� HP�� �����ϼ��� : ");
	scanf_s("%d", &playerHP);
	return playerHP-1;
}

int InputPlayerValue(int* a)
{
	int userValue;
	printf("���� ��ȸ %d��\n", *a);
	printf("�÷��̾��� ���� �Է����ּ���. : ");
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