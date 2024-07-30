#include <stdio.h>
#include <string.h>
#include "Function.h"

//typedef struct Monster {
//	char name[30];
//	char region[30];
//	char grade[30];
//	int level[30];
//}Monster;

//int SearchMonster();
//int ShowAllMonster(Monster (*monster)[100]);
//int DeleteMonster();





int main()
{
	int playerInput = 0;

	char monster_name[100][30];
	char monster_region[100][30];
	char monster_grade[100][30];
	int monster_level[100];

	int totalMonsterCount = 0;

	Monster monsterGroup[100];

	while (1)
	{
		printf("\n1. ���� ������ �߰�\n");
		printf("2. ���� ������ �̸����� �˻�\n");
		printf("3. ���� ������ ����\n");
		printf("4. ���� ������ ����\n");
		printf("5. ���α׷� ����\n\n");
		// 1. ���� ������ �߰�
		// 2. ���� ������ ����
		// 3. ���� ������ ����
		// 4. ���α׷� ����
		scanf_s("%d", &playerInput);

		if (playerInput==1)
		{
			AddMonsterInfo(monsterGroup, &totalMonsterCount);
		}
		
		if (playerInput == 2)
		{
			SearchMonsterByName(monsterGroup, totalMonsterCount);
		}

		if (playerInput == 3)
		{
			ShowAllMonsterData(monsterGroup, totalMonsterCount);
		}
		
		if (playerInput == 4)
		{
			DeleteMonsterByName(monsterGroup, &totalMonsterCount);
		}

		if (playerInput == 5)
			break;
	}
}