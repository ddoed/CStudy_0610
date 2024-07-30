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


void AddMonsterInfo(Monster monster[100], int* monsterIndexPtr)
{
	char newName[30];
	char grade[30];
	char region[30];

	printf("�߰��� ���� �̸� �Է� : ");
	scanf_s("%s", newName, 30);


	printf("�߰��� ���� ��� �Է� : ");
	scanf_s("%s", grade, 30);

	printf("�߰��� ���� ���� �Է� : ");
	scanf_s("%s", region, 30);

	strcpy_s(monster[*monsterIndexPtr].name, 30, newName);
	strcpy_s(monster[*monsterIndexPtr].grade, 30, grade);
	strcpy_s(monster[*monsterIndexPtr].region, 30, region);

	
	(*monsterIndexPtr)++;
}

void SearchMonsterByName(Monster monster[100], int totalmonsterCount)
{
	char searchName[30];
	printf("�˻��ϰ� ���� �̸��� �Է��ϼ��� : ");
	scanf_s("%s", searchName, 30);

	for (int i = 0; i < totalmonsterCount; i++)
	{
		if (Compare(searchName, monster[i].name))
		{
			printf("\n�ش��ϴ� ���͸� ã�ҽ��ϴ�\n");
			printf("������ �̸� : %s, ������ ���� : %s, ������ ��� : %s\n", monster[i].name, monster[i].region, monster[i].grade);
		}
	}
}

void ShowAllMonsterData(Monster monster[100], int totalMonsterCount)
{

	for (int i = 0; i < totalMonsterCount; i++)
	{
		printf("�̸� : %s, ", monster[i].name);
		printf("��� : %s, ", monster[i].grade);
		printf("���� : %s\n", monster[i].region);
	}
}

void DeleteMonsterByName(Monster* monster, int* totalCount) {
	char deleteName[30];
	printf("������ ���� �̸� �Է�: ");
	scanf_s("%s", deleteName, 30);

	for (int i = 0; i < *totalCount; i++) {
		if (Compare(deleteName, monster[i].name)) {
			// �迭 ��Ҹ� �������� �̵�
			for (int j = i; j < *totalCount - 1; j++) {
				monster[j] = monster[j + 1];
			}
			(*totalCount)--;
			printf("���� %s�� ���������� �����Ǿ����ϴ�.\n", deleteName);
			return;
		}
	}
	printf("�̸��� %s�� ���͸� ã�� �� �����ϴ�.\n", deleteName);
}