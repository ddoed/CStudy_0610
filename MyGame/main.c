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
	
	
	printf("�����Է� : ");
	scanf_s("%d", &userValue);

	//��ǻ���� ����� ~���Դϴ�.
	printf("��ǻ���� �� : %d\n", computerValue);
	

	// �÷��̾��� ���� ~�Դϴ�.
	printf("�÷��̾��� �� : %d\n", userValue);

	int score = 0;
	int playNum = 10;

	if (computerValue == userValue)
	{
		printf("����\n\n");
		score += 10;
	}

	else
	{
		printf("����\n\n");
		main();
	}

	if (score >= 90)
		printf("A���");
	else if (score >= 80)
		printf("B���");
	else if (score >= 70)
		printf("C���");
	else if (score >= 60)
		printf("D���");
	else
		printf("F���");

	return 0;
}