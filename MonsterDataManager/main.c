#include <stdio.h>
#include <string.h>
#include "Function.h"

#define filename "C:\\Users\\Administrator\\Desktop\\CStudy_0610\\MonsterDataManager\\MonsterData.txt"

void PrintMonsterList(Monster* monsterList, int totalCount)
{
	FILE* fp = fopen(filename, "w");

	if (fp == NULL)
	{
		perror("파일 연결 실패!\n");
	}

	for (int i = 0; i < totalCount; ++i)
	{
		fprintf(fp, "%s %s %s\n", monsterList[i].name, monsterList[i].grade, monsterList[i].region);
	}

	fclose(fp);
}
void LoadMonsterData(Monster* monsterList, int* totalCount)
{
	FILE* fp = fopen(filename, "r");

	if (fp == NULL)
	{
		perror("파일 읽기 실패!\n");
	}

	int count = 0;
	char ch;

	if (fgetc(fp) != EOF)
	{
		count = 1;
	}

	fseek(fp, 0, SEEK_SET);

	while (fgetc(fp) != EOF)
	{
		ch = fgetc(fp);
		if (ch == '\n') {
			count++;
		}
	}

	fseek(fp, 0, SEEK_SET);

	*totalCount = count;

	for (int i = 0; i < count; ++i)
	{
		fscanf_s(fp, "%s %s %s", (monsterList + i)->name, 30, (monsterList + i)->grade, 30, (monsterList + i)->region, 30);
	}

	fclose(fp);
}
int main()
{
	int playerInput = 0;

	char monster_name[100][30];
	char monster_region[100][30];
	char monster_grade[100][30];
	int monster_level[100];

	int totalMonsterCount = 0;

	Monster monsterGroup[100];

	LoadMonsterData(monsterGroup, &totalMonsterCount);

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
		{
			break;
		}
			
	}
	PrintMonsterList(monsterGroup, totalMonsterCount);

	return 0;
	
}