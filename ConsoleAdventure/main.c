#include <stdio.h>
#include "Console.h";
#include <stdbool.h>

#define ROWS 30
#define COLS 30

char map[COLS][ROWS] = { 0 };
char mapString[(COLS * (ROWS+1)) + 1]; //Rows+1 -> 개행문자 // 마지막 더하기는 공백문자

typedef struct Player {
	int playerX;
	int playerY;
}Player;

typedef struct Item {
	int itemX;
	int itemY;
	bool item;
}Item;

void InputProcess(int* x, int* y,bool* canMove)
{
	if (*canMove)
	{
		if (GetAsyncKeyState(VK_LEFT) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (*x < 2) *x = 2;
			*x -= 1;
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 8001) // 오른쪽키를 눌렀을때 아래코드 실행
		{
			if (*x > 28) *x = 28;
			*x += 1;
		}

		else if (GetAsyncKeyState(VK_DOWN) & 8001) // 위쪽키를 눌렀을때 아래코드 실행
		{
			if (*y > 28) *y = 28;
			*y += 1;
		}

		else if (GetAsyncKeyState(VK_UP) & 8001) // 아래쪽키를 눌렀을때 아래코드 실행
		{
			if (*y < 2) *y = 2;
			*y -= 1;
		}
	}
	
}

void InteractOther(Player* p, Item* I)
{
	if (p->playerX == I->itemX && p->playerY == I->itemY)
	{
		I->item = true;
	}
}

void GotoTargetPos(int a, int b, char* s)
{
	GotoXY(a, b);
	printf("%s", s);
}

void MakeMap(char wall, char(*map)[ROWS])
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
		map[i][0] = wall;
		map[i][ROWS - 1] = wall;
	}

	for (int j = 0; j < ROWS; ++j)
	{
		map[0][j] = wall;
		map[COLS - 1][j] = wall;
	}

}

void RenderMap()
{
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
}

int main()
{
	printf("Hello world!\n");
	Clear();

	SetConsoleSize(50,50);
	SetConsoleCursorVisibility(0);

	Player p1;
	Item i1;

	p1.playerX = 2;
	p1.playerY = 2;
	i1.item = false;
	i1.itemX = 8;
	i1.itemY = 8;

	bool canMove = true;

	//게임 맵 세팅

	
	//외벽 설정
	MakeMap('#', map);

	//내벽 데이터 넣어주기
	for (int i = 0; i < 10; ++i)
	{
		map[4][i] = '#';
	}
	

	RenderMap();

	


	while (1)
	{
		Clear();

		

		GotoTargetPos(0, 0, mapString);

		if (map[playerX][playerY] == 35)
		{
			canMove = false;
		}
		else
			canMove = true;
		
		GotoTargetPos(playerX, playerY, "@");

		if (!itemFound)
			GotoTargetPos(itemX, itemY, "$");
		else
			GotoTargetPos(1, 30, "아이템을 획득했습니다");

		
		InputProcess(&playerX, &playerY, &canMove); // 플레이어의 입력을 받아서 움직이는 함수
		InteractOther(&p1, &i1);
		
		Sleep(50);
	}
}