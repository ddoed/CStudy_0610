#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//int InputNumber(); // �Լ��� �̸� �����صδ� ���
                   // ��� ���� : �����Ϸ��� �ڵ带 ������ ���� �б� ������ �̸� ����Ǿ� ���� ���� ȣ�� �Ұ�

// ���� ������ �� ������ �������� �޸𸮿��� ���� ��
int main(void)
{
	SetColor(9, 13);
	int computerValue = StartNumberSetting();
	int userValue;
	int playerHP = SetPlayerHP(); // ���������� ���Ǹ� �� ���� ������� ������
	                              // �Լ��� ���ϰ� ���ÿ� ������ �Ҵ� ����� �Ѵ�


	printf("�ڡ� ȯ���մϴ�. �١�\n");
	printf("���ڸ� �Է��ϸ� ������ �����մϴ�.\n");
	ClearConsole();
	
	printf("���� ����!\n\n");

	userValue = InputPlayerValue(&playerHP);
	
	while (1)
	{
		if (computerValue == userValue) // 1. ���ӿ��� �¸��ߴ� �Լ�
		{
			GameWin();
			break;
		}
		else
		{
			if (computerValue > userValue)
			{
				ClearConsole();
				printf("�۽��ϴ�\n\n");
			}
			
			else
			{
				ClearConsole();
				printf("Ů�ϴ�\n\n");
				
			}

			if (playerHP <= 0)
			{
				printf("\n��������\n");
				break;
			}
				
			
			// 2. �÷��̾��� ü���� ���� ��Ű�� ���ڸ� �ٽ� ���� ��ȸ�� �ִ� �Լ�
			
			userValue = Fail(&playerHP);

			
			
		}
	}


	return 0;
}

