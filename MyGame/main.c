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


	return 0;
}