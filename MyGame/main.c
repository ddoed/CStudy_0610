#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("�١١�ȯ���մϴ١ڡ١�\n\n");
	printf("���ڸ� �Է��ϸ� ������ �����մϴ�.\n");

	srand(time(NULL)); // �ð��� seed�� �������� ����
	int computerValue = rand() % 100 + 1; //1���� 100 ������ ���ڰ� ��
	int userValue;
<<<<<<< HEAD
	int score = 0;
	int playNum = 10;
	printf("�����Է� : ");
	scanf_s("%d", &userValue);

	while (playNum > 0 & (computerValue != userValue))
	{
		
		
		if (computerValue > userValue)
		{
			printf("�۽��ϴ�\n\n");
			playNum -= 1;
		}
		else
		{
			printf("Ů�ϴ�\n\n");
			playNum -= 1;
			}
		printf("%d�� ����\n", playNum);
		printf("���ڸ� �ٽ� �Է��ϼ��� : ");
		scanf_s("%d", &userValue);

		
	}
	if (playNum < 0)
		printf("����");
	else
		printf("����");

	
=======
	
	
	printf("�����Է� : ");
	scanf_s("%d", &userValue);

	printf("��ǻ���� �� : %d\n", computerValue);
	printf("�÷��̾��� �� : %d\n", userValue);

	int score = 0;
	int playNum = 10;

	while (playNum > 0)
	{
		if (computerValue == userValue)
			printf("����");
		else
			if (computerValue > userValue)

	}

>>>>>>> adb8b4139fe8e35154157abc94ec02a7349f3123

	return 0;
}