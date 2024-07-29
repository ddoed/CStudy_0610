#include "Function.h"

int Compare(char* str1, char* str2) // ��ȯ�ϴ� ���� 0�̸� �ٸ���. 1�̸� ����.
{
	while (*str1)
	{
		if (*str1 != *str2)
		{
			return 0;
		}
		str1++;
		str2++;
	}
	if (*str2 == '\0') return 1;

	return 0;
}

void SearchMonsterByName(Monster monster)
{
	char searchName[30];
	printf("�˻��ϰ� ���� �̸��� �Է��ϼ���\n");
	scanf_s("%s", searchName, 30);

	if (Compare(monster.name, searchName))
	{
		printf("�ش��ϴ� ���͸� ã�ҽ��ϴ�\n");
		printf("������ �̸� : %s, ������ ���� : %s, ������ ��� : %s", monster.name, monster.region, monster.grade);
	}
}

void AddMonsterInfo(Monster(*monster)[100], int* monsterIndexPtr)
{
	char newname[30];
	char grade[30];
	char region[30];

	printf("�߰��� ���� �̸� �Է� : ");
	scanf_s("%s", newname, 30);


	printf("�߰��� ���� ��� �Է� : ");
	scanf_s("%s", grade, 30);

	printf("�߰��� ���� ���� �Է� : ");
	scanf_s("%s", region, 30);

	strcpy_s(monster[*monsterIndexPtr]->name, 30, newname);
	strcpy_s(monster[*monsterIndexPtr]->grade, 30, grade);
	strcpy_s(monster[*monsterIndexPtr]->region, 30, region);

}

void ShowMonsterInfo(Monster monster)
{
	printf("���� �̸� : %s\n", monster.name);
	printf("���� ��� : %s\n", monster.grade);
	printf("���� ���� : %s\n", monster.region);
}