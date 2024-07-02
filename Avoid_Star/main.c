#include <stdio.h>
#include "Console.h" // ������Ʈ �ȿ� �ִ� ���� ã�Ƽ� ����
#include <stdbool.h>
#include <time.h>

#define MAX 20 //��ó����� MAX ���ڿ� ���� ���� 10���� ġȯ�ϴ� �ڵ�


int main()
{
	srand(time(NULL)); // �ڴ��Լ��� seed���� ���� �ð��� ���� ����
	// �ܼ�â�� ������ ���� ũ�⸦ ������ �Ѵ�
	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	//�÷��̾��� �Ѿ� ����
	//gotoXY printf

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





#if true //�÷��̾��� �̵� ����
	while (true)
	{
		Clear(); //���� ��ġ�� ����� ���� �׸���

		if (GetAsyncKeyState(VK_LEFT) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (x < 1) x = 1;
			x--;
		}

		else if (GetAsyncKeyState(VK_RIGHT) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (x > 27) x = 27;
			x++;
		}

		else if (GetAsyncKeyState(VK_DOWN) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (y > 28) y = 28;
			y++;
		}

		else if (GetAsyncKeyState(VK_UP) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (y < 1) y = 1;
			y--;
		}

#endif

		GotoXY(x, y);
		printf("��");

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
			ex = (rand() % 14)*2;
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
				ex[i] = (rand() % 14)*2;
				ey[i] = 0;
				enemy[i] = true;
				break;
			}
		}
		
		for (int i = 0; i < MAX; i++)
		{
			if (enemy[i]) // �Ѿ��� �����Ǿ� ��������
			{
				ey[i]++;
				GotoXY(ex[i], ey[i]);
				SetColor(0, i);
				printf("��");

				if (ey[i] > 28) //�Ѿ��� ȭ�� ���� ���� �Ѿ�� �� ��Ȱ��ȭ�ȴ�
				{
					enemy[i] = false;
				}

			}

			if (ex[i] == bx & ey[i] == by)
			{
				enemy[i] = false;
				bullet = false;
			}
			
		}

		
		Sleep(100);
	}
}