#include <stdio.h>
#include "CountNumFunc.h"
#include "windows.h"

// �Լ� �̸� ���� �����ϴ� ��� : Ctrl + R + R

int InputNumber()
{
	int returnValue;
	scanf_s("%d", &returnValue);
}

void StartGameSetting() // StartGame(); 
{
	int playerHP = 5;   // �߸��� ������ �ֽ��ϴ�.
	printf("�ڡ� ȯ���մϴ�. �١�\n");
	printf("���ڸ� �Է��ϸ� ������ �����մϴ�.\n");
}

int SetPlayerHP()
{
	printf("Player�� ü���� �������ּ���\n");
	return InputNumber();
}

void GameWin()
{
	// �¸����� ���� ������ ���������� ǥ���Ѵ�.

	printf("��ǻ���� ���� ��ġ�մϴ�. �����մϴ�.\n");

}

void SetColor(unsigned char BGColor, unsigned char TextColor)
{
	if (BGColor > 15 || TextColor > 15) return;

	unsigned char ColorNum = (BGColor << 4) | TextColor;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), ColorNum);
}

int Fail(int playerHP)
{
	// � Ư���� ����, ü���� �����մϴ�.
	int currentPlayHp = playerHP - 1;
	return currentPlayHp;

}