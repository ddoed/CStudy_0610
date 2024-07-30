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
		printf("\n1. 몬스터 데이터 추가\n");
		printf("2. 몬스터 데이터 이름으로 검색\n");
		printf("3. 몬스터 데이터 보기\n");
		printf("4. 몬스터 데이터 삭제\n");
		printf("5. 프로그램 종료\n\n");
		// 1. 몬스터 데이터 추가
		// 2. 몬스터 데이터 보기
		// 3. 몬스터 데이터 삭제
		// 4. 프로그램 종료
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