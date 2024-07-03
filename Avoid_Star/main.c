#include <stdio.h>
#include "Console.h" // ������Ʈ �ȿ� �ִ� ���� ã�Ƽ� ����
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h> // console input output

#define MAX 20 //��ó����� MAX ���ڿ� ���� ���� 10���� ġȯ�ϴ� �ڵ�
#define BG 15

void StartMenu(void)
{
	while (true)
	{
		GotoXY(9, 9);
		printf("�����ϱ� ����");
		GotoXY(4, 20);
		printf("Ű�� �Է��Ͽ� �����ϼ���");

		if (_kbhit()) //�ƹ�Ű�� �Է��ϸ� True �ƴϸ� False
			break;
	}
}
void GameOver(score)
{
	int temp;
	printf("�÷��̾ ����߽��ϴ�.\n�������� : %d \n\n������ �����Ϸ��� �ƹ� ����Ű�� �Է��� ����\n",score);
	scanf_s("%d", &temp);
}


int main()
{
	SetTitle("�����ϱ�");
	SetColor(BG, 0);
	srand(time(NULL)); // �ڴ��Լ��� seed���� ���� �ð��� ���� ����
	// �ܼ�â�� ������ ���� ũ�⸦ ������ �Ѵ�
	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	//�÷��̾��� �Ѿ� ����
	//gotoXY printf

	int score = 0;
	bool playerAlive = true;
	int heart = 10;

	int x = 14, y = 28; //�÷��̾��� xy��ǥ
	int bx = 0, by = 0; //�Ѿ��� xy��ǥ
	bool bullet = false; // ���� �Ѿ��� �������� �ʾ����� false, ���������� true
#if false
	int ex = 10, ey = 0;
	bool enemy = false; // ���Ͱ� �����Ҷ� false, �����ɶ� true
#endif

	int ex[MAX] = { 0 };
	int ey[MAX] = { 0 };
	bool enemy[MAX] = { false };

	Clear();
	StartMenu();




#if true //�÷��̾��� �̵� ����
	while (true)
	{

		Clear(); //���� ��ġ�� ����� ���� �׸���
		GotoXY(0, 0);
		SetColor(15, 3);
		printf("Score %d ", score); // score ���
		score++;

		GotoXY(0, 1);
		SetColor(15, 3);
		printf("ü�� : %d",heart);

		GotoXY(0, 2);
		SetColor(15, 3);
		printf("Q : ��ź");

		if (GetAsyncKeyState(VK_LEFT) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (x < 2) x = 2;
			x -= 2;
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (x > 27) x = 27;
			x += 2;
		}

		else if (GetAsyncKeyState(VK_DOWN) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (y > 28) y = 28;
			y++;
		}

		else if (GetAsyncKeyState(VK_UP) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (y < 2) y = 2;
			y--;
		}

#endif
		if (playerAlive)
		{
			SetColor(BG, 12);
			GotoXY(x, y);
			printf("��");
		}
		else
		{
			GotoXY(x, y);
			printf("@");
			break;
		}


#if true // �Ѿ�
		if (GetAsyncKeyState(VK_SPACE) & 8001)
		{

			if (!bullet)
			{
				bx = x;
				by = y - 1;
				bullet = true;
			}


		}

		if (bullet) // �Ѿ��� �����Ǿ� ��������
		{
			by--;
			GotoXY(bx, by);
			printf("��");

			if (by < 1) //�Ѿ��� ȭ�� ���� ���� �Ѿ�� �� ��Ȱ��ȭ�ȴ�
				bullet = false;
		}
#endif


#if false
		if (!enemy)
		{
			srand(time(NULL)); // �ڴ��Լ��� seed���� ���� �ð��� ���� ����
			ex = (rand() % 14) * 2;
			ey = 0;
			enemy = true;
		}

		if (enemy) // �Ѿ��� �����Ǿ� ��������
		{
			ey++;
			GotoXY(ex, ey);
			printf("��");

			if (ey > 28) //�Ѿ��� ȭ�� ���� ���� �Ѿ�� �� ��Ȱ��ȭ�ȴ�
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
				printf("��");

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

				if (ey[i] > 28) //�Ѿ��� ȭ�� ���� ���� �Ѿ�� �� ��Ȱ��ȭ�ȴ�
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