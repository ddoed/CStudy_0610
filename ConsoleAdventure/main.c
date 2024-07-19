#include <stdio.h>
#include "Console.h";
#include <stdbool.h>

#define ROWS 30

#define COLS 30

char map[COLS][ROWS] = { 0 };
char mapString[(COLS * (ROWS+1)) + 1]; //Rows+1 -> ���๮�� // ������ ���ϱ�� ���鹮

void InputProcess(int* x, int* y)
{
		if (GetAsyncKeyState(VK_LEFT) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (*x < 2) *x = 2;
			*x -= 1;
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 8001) // ������Ű�� �������� �Ʒ��ڵ� ����
		{
			if (*x > 28) *x = 28;
			*x += 1;
		}

		else if (GetAsyncKeyState(VK_DOWN) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (*y > 28) *y = 28;
			*y += 1;
		}

		else if (GetAsyncKeyState(VK_UP) & 8001) // �Ʒ���Ű�� �������� �Ʒ��ڵ� ����
		{
			if (*y < 2) *y = 2;
			*y -= 1;
		}
	
}

void InteractOther(int* playerX, int* playerY, int* itemX, int* itemY, bool* item)
{
	if (*playerX == *itemX && *playerY == *itemY)
	{
		*item = true;
	}
}

void GotoTargetPos(int a, int b, char* s)
{
	GotoXY(a, b);
	printf("%s", s);
}

void Map()
{
	for (int i = 0; i < COLS; ++i)
	{
		for (int j = 0; j < ROWS; ++j)
		{
			map[i][j] = ' ';
		}
	}

	for (int i = 0; i < COLS; ++i)
	{
		map[i][0] = '#';
		map[i][ROWS - 1] = '#';
	}

	for (int j = 0; j < ROWS; ++j)
	{
		map[0][j] = '#';
		map[COLS - 1][j] = '#';
	}

	int mapIndex = 0;

	for (int i = 0; i < COLS; ++i)
	{
		for (int j = 0; j < ROWS; ++j)
		{
			mapString[mapIndex++] = map[i][j];
		}
		mapString[mapIndex++] = '\n';
	}
	mapString[mapIndex] = '\0';

	GotoTargetPos(0, 0, mapString);
}

void MakeMap(char wall, char(*map)[ROWS])
{

}

int main()
{
	printf("Hello world!\n");
	Clear();

	SetConsoleSize(50,50);
	SetConsoleCursorVisibility(0);

	int playerX = 15, playerY = 15;
	bool itemFound = false;

	int itemX = 8, itemY = 8;

	bool CanMove = true;

	

	while (1)
	{
		Clear();
		
		Map();
		
		GotoTargetPos(playerX, playerY, "@");

		if (!itemFound)
			GotoTargetPos(itemX, itemY, "$");
		else
			GotoTargetPos(1, 31, "�������� ȹ���߽��ϴ�");

		InputProcess(&playerX, &playerY, &CanMove); // �÷��̾��� �Է��� �޾Ƽ� �����̴� �Լ�
		InteractOther(&playerX, &playerY, &itemX, &itemY, &itemFound);
		

		
		Sleep(50);
	}
}