#include <stdio.h>
#include <string.h>

typedef struct Monster {
	char name[30];
	char region[30];
	char grade[30];
	int level[30];
}Monster;

int AddMonseter(char(*monster_name)[30], char(*monster_region)[30], char(*monster_grade)[30], int* monster_level, int* totalCount, Monster* monsterPtr)
{
	printf("���� �̸� : ");
	scanf_s("%s", monster_name[*totalCount]);
	printf("���� ���� : ");
	scanf_s("%s", monster_region[*totalCount]);
	printf("���� ��� : ");
	scanf_s("%s", monster_grade[*totalCount]);
	printf("���� ���� : ");
	scanf_s("%s", monster_level[*totalCount]);
}
int SearchMonster();
int ShowAllMonster();
int DeleteMonster();

int main()
{
	int playerInput = 0;

	char monster_name[100][30];
	char monster_region[100][30];
	char monster_grade[100][30];
	int monster_level[100];

	int totalMonsterCount;

	Monster monsters;

	while (1)
	{
		system("cls");
		printf("1. ���� ������ �߰�\n");
		// 1. ���� ������ �߰�
		// 2. ���� ������ ����
		// 3. ���� ������ ����
		// 4. ���α׷� ����
		scanf_s("%d", &playerInput);

		if (playerInput==1)
		{
			AddMonseter(monster_name, monster_region, monster_grade, monster_leve, &totalMonsterCount, &monsters);

			totalMonsterCount++;
		}
			
		
		
		
	}
}