#include <stdio.h>
#include "Console.h" // ������Ʈ �ȿ� �ִ� ���� ã�Ƽ� ����
#include <stdbool.h>

int main()
{
	// �ܼ�â�� ������ ���� ũ�⸦ ������ �Ѵ�
	SetConsoleSize(30, 30);
	SetConsoleCursorVisibility(0);

	//�÷��̾��� �Ѿ� ����
	//gotoXY printf

	int x = 14, y = 28; //�÷��̾��� xy��ǥ
	int bx = 0, by = 0; //�Ѿ��� xy��ǥ
	bool bullet = false; // ���� �Ѿ��� �������� �ʾ����� false, ���������� true

	GotoXY(x, y);
	printf("��");
	


	while (true)
	{
		Clear();


#if true //�÷��̾��� �̵� ����
		if (GetAsyncKeyState(VK_LEFT) & 8001) // ����Ű�� �������� �Ʒ��ڵ� ����
		{
			if (x <= 1) x = 1;
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
				bullet == true;
			}


			if (bullet) // �Ѿ��� �����Ǿ� ��������
			{
				by--;
				GotoXY(bx, by);
				printf("��");
			}

			if (by < 1) //�Ѿ��� ȭ�� ���� ���� �Ѿ�� �� ��Ȱ��ȭ�ȴ�
				bullet = false;
		}
#endif
		Sleep(100);
	}
}