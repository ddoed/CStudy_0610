#include <stdio.h>
#include <string.h>
#include "Function.h"

//typedef struct Monster {
//	char name[30];
//	char region[30];
//	char grade[30];
//	int level[30];
//}Monster;

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
		system("cls");
		printf("1. ���� ������ �߰�\n");
		// 1. ���� ������ �߰�
		// 2. ���� ������ ����
		// 3. ���� ������ ����
		// 4. ���α׷� ����
		scanf_s("%d", &playerInput);

		if (playerInput==1)
		{
			AddMonsterInfo(monsterGroup, &totalMonsterCount);

			totalMonsterCount++;
		}
		
		
		
	}
}