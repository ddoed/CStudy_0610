#include <stdio.h>
#include "Console.h";
#include <stdbool.h>

char map[100] = { "#" };



void InputProcess(int* x, int* y)
{
	if (GetAsyncKeyState(VK_LEFT) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
	{
		if (*x < 2) *x = 2;
		*x -= 1;
	}

	else if (GetAsyncKeyState(VK_RIGHT) & 8001) // ������Ű�� �������� �Ʒ��ڵ� ����
	{
		if (*x > 27) *x = 27;
		*x += 1;
	}

	else if (GetAsyncKeyState(VK_DOWN) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
	{
		if (*y > 27) *y = 27;
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
	GotoTargetPos(0, 0, "##############################");

	for (int i = 1; i < 29; i++)
	{
		GotoTargetPos(0, i, "#                            #");
	}
	GotoTargetPos(0, 29, "##############################");
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

	while (1)
	{
		Clear();

		Map();
		
		
		GotoTargetPos(playerX, playerY, "@");

		if (!itemFound)
			GotoTargetPos(itemX, itemY, "$");
		else
			GotoTargetPos(1, 30, "�������� ȹ���߽��ϴ�");

		InputProcess(&playerX, &playerY); // �÷��̾��� �Է��� �޾Ƽ� �����̴� �Լ�
		InteractOther(&playerX, &playerY, &itemX, &itemY, &itemFound);


		
		
		Sleep(50);
	}
}