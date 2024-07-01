#include <stdio.h>
#include "Console.h" // 프로젝트 안에 있는 파일 찾아서 복사
#include <stdbool.h>

int main()
{
	// 콘솔창에 게임의 맵의 크기를 만들어야 한다
	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	//플레이어의 총알 구현
	//gotoXY printf

	int x = 14, y = 28; //플레이어의 xy좌표
	int bx = 0, by = 0; //총알의 xy좌표
	bool bullet = false; // 현재 총알이 생성되지 않았으면 false, 생성됬으면 true

	GotoXY(x, y);
	printf("♥");
	


	while (true)
	{
		Clear();


#if true //플레이어의 이동 조작
		if (GetAsyncKeyState(VK_LEFT) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (x <= 1) x = 1;
			x--;
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (x > 27) x = 27;
			x++;
		}

		else if (GetAsyncKeyState(VK_DOWN) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (y > 28) y = 28;
			y++;
		}

		else if (GetAsyncKeyState(VK_UP) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (y < 1) y = 1;
			y--;
		}

#endif

		GotoXY(x, y);
		printf("♥");

#if true // 총알
		if (GetAsyncKeyState(VK_SPACE) & 8001)
		{

			if (!bullet)
			{
				bx = x;
				by = y - 1;
				bullet == true;
			}


			if (bullet) // 총알이 생성되어 있을때만
			{
				by--;
				GotoXY(bx, by);
				printf("↑");
			}

			if (by < 1) //총알이 화면 가장 위로 넘어갔을 때 비활성화된다
				bullet = false;
		}
#endif
		Sleep(100);
	}
}