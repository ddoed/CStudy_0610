#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// printf �Լ��� scanf �Լ��� ����ؼ� ������ ������ ����� ������ �սô�.

	// �÷��̾ �ڡ� ȯ���ϴ� �ؽ�Ʈ�� ������ּ��� �١�

	// printf( ���ڸ� �Է��ϸ� ������ �����մϴ�.) 
	// scanf -> �Է��� �޴´�.. Ŀ���� ������·� ����ϰ� �ִ�.

	// ���� �Ǵ� �Ǽ� �����͸� ���� ��ǻ�Ͱ� �����ϴ� ����� ����ϰ�,
	// ���� �����ϴ� ����� ���� ����ϴ� ���α׷��� ����� ������.

	srand(time(NULL));
	int computerValue = rand() % 100 + 1; // 1 ~ 100 ������ ���ڰ� computerValue�� �Է��� �˴ϴ�.
	int userValue;
	int playerHP = 5;


	printf("�ڡ� ȯ���մϴ�. �١�\n");
	printf("���ڸ� �Է��ϸ� ������ �����մϴ�.\n");
	printf("���� ����!\n");

	printf("�÷��̾��� ���� �Է����ּ���. ");
	scanf_s("%d", &userValue);
	// ��ǻ���� ������ ~ ���Դϴ�.
	printf("��ǻ���� ���� %d �Դϴ�.", computerValue);
	// �÷��̾��� ���� ~ �Դϴ�.

	printf("�÷��̾��� ���� %d �Դϴ�.", userValue);

	while (1)
	{
		if (computerValue == userValue) // 1. ���ӿ��� �¸��ߴ� �Լ�
		{
			GameWin();
			break;
		}
		else
		{
			if (playerHP <= 0)
			{
				printf("��������\n");
				break;
			}
			// 2. �÷��̾��� ü���� ���� ��Ű�� ���ڸ� �ٽ� ���� ��ȸ�� �ִ� �Լ�
			
			playerHP--;
			printf("�÷��̾��� �� �Է�\n");
			scanf_s("%d", &userValue);
			
			
		}
	}


	return 0;
}