#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	// printf �Լ��� scanf �Լ��� ����ؼ� ������ ������ ����� ������ �սô�.

	//�÷��̾ ȯ���ϴ� �ؽ�Ʈ�� ��� (Ư������Ű)
	printf("�١١�ȯ���մϴ١ڡ١�\n\n");

	//printf(���ڸ� �Է��ϸ� ���� ����)
	//scanf -> �Է¹ޱ� -> Ŀ�� ���� ���·� ���
	printf("���ڸ� �Է��ϸ� ������ �����մϴ�.\n");

	//���� �Ǵ� �Ǽ� �����͸� ���� ��ǻ�Ͱ� �����ϴ� ����� ����ϰ�
	// ���� �����ϴ� ����� ���� ����ϴ� ���α׷�

	srand(time(NULL)); // �ð��� seed�� �������� ����
	int computerValue = rand() % 100 + 1; //1���� 100 ������ ���ڰ� ��
	int userValue;
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

	

	return 0;
}