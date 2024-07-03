#include <stdio.h>
#include "Console.h" // 프로젝트 안에 있는 파일 찾아서 복사
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h> // console input output

#define MAX 20 //전처리기로 MAX 숫자에 값을 전부 10으로 치환하는 코드
#define BG 15

void StartMenu(void)
{
	while (true)
	{
		GotoXY(9, 9);
		printf("별피하기 게임");
		GotoXY(4, 20);
		printf("키를 입력하여 시작하세요");

		if (_kbhit()) //아무키나 입력하면 True 아니면 False
			break;
	}
}
void GameOver(score)
{
	int temp;
	printf("플레이어가 사망했습니다.\n최종점수 : %d \n\n게임을 종료하려면 아무 숫자키를 입력후 엔터\n",score);
	scanf_s("%d", &temp);
}


int main()
{
	SetTitle("별피하기");
	SetColor(BG, 0);
	srand(time(NULL)); // 핸덤함수의 seed값을 현재 시간에 따라서 변경
	// 콘솔창에 게임의 맵의 크기를 만들어야 한다
	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	//플레이어의 총알 구현
	//gotoXY printf

	int score = 0;
	bool playerAlive = true;
	int heart = 10;

	int x = 14, y = 28; //플레이어의 xy좌표
	int bx = 0, by = 0; //총알의 xy좌표
	bool bullet = false; // 현재 총알이 생성되지 않았으면 false, 생성됬으면 true
#if false
	int ex = 10, ey = 0;
	bool enemy = false; // 몬스터가 시작할때 false, 생성될때 true
#endif

	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };

	Clear();
	StartMenu();




#if true //플레이어의 이동 조작
	while (true)
	{

		Clear(); //이전 위치를 지우고 새로 그리기
		GotoXY(0, 0);
		SetColor(15, 3);
		printf("Score %d ", score); // score 출력
		score++;

		GotoXY(0, 1);
		SetColor(15, 3);
		printf("체력 : %d",heart);

		GotoXY(0, 2);
		SetColor(15, 3);
		printf("Q : 폭탄");

		if (GetAsyncKeyState(VK_LEFT) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (x < 2) x = 2;
			x -= 2;
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (x > 27) x = 27;
			x += 2;
		}

		else if (GetAsyncKeyState(VK_DOWN) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (y > 28) y = 28;
			y++;
		}

		else if (GetAsyncKeyState(VK_UP) & 8001) // 왼쪽키를 눌렀을때 아래코드 실행
		{
			if (y < 2) y = 2;
			y--;
		}

#endif
		if (playerAlive)
		{
			SetColor(BG, 12);
			GotoXY(x, y);
			printf("♥");
		}
		else
		{
			GotoXY(x, y);
			printf("@");
			break;
		}


#if true // 총알
		if (GetAsyncKeyState(VK_SPACE) & 8001)
		{

			if (!bullet)
			{
				bx = x;
				by = y - 1;
				bullet = true;
			}


		}

		if (bullet) // 총알이 생성되어 있을때만
		{
			by--;
			GotoXY(bx, by);
			printf("↑");

			if (by < 1) //총알이 화면 가장 위로 넘어갔을 때 비활성화된다
				bullet = false;
		}
#endif


#if false
		if (!enemy)
		{
			srand(time(NULL)); // 핸덤함수의 seed값을 현재 시간에 따라서 변경
			ex = (rand() % 14) * 2;
			ey = 0;
			enemy = true;
		}

		if (enemy) // 총알이 생성되어 있을때만
		{
			ey++;
			GotoXY(ex, ey);
			printf("★");

			if (ey > 28) //총알이 화면 가장 위로 넘어갔을 때 비활성화된다
			{
				enemy = false;
			}

		}
#endif
		for (int i = 0; i < MAX; i++)
		{
			if (!enemy[i])
			{
				ex[i] = (rand() % 14) * 2;
				ey[i] = 0;
				enemy[i] = true;
				break;
			}
		}

		for (int i = 0; i < MAX; i++)
		{
			if (enemy[i])
			{
				ey[i]++;
				GotoXY(ex[i], ey[i]);
				SetColor(BG, i);
				printf("★");

				if (ex[i] == bx && ey[i] == by && bullet == true)
				{
					enemy[i] = false;
					bullet = false;
					score += 100;

				}

				if (x == ex[i] & y == ey[i])
				{
					score -= 100;
					heart--;
					if (heart==0)
						playerAlive = false;
				}

				if (ey[i] > 28) //총알이 화면 가장 위로 넘어갔을 때 비활성화된다
				{
					enemy[i] = false;
				}

			}
		}

		if (GetAsyncKeyState(0x51) & 8001)
		{
			for (int i = 0; i < 10; i++)
			{
				enemy[i] = false;
			}
		}

		Sleep(100);
	}

	Clear();
	GameOver(score);
	
	
}