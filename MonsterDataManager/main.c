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
	printf("몬스터 이름 : ");
	scanf_s("%s", monster_name[*totalCount]);
	printf("몬스터 지역 : ");
	scanf_s("%s", monster_region[*totalCount]);
	printf("몬스터 등급 : ");
	scanf_s("%s", monster_grade[*totalCount]);
	printf("몬스터 레벨 : ");
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
		printf("1. 몬스터 데이터 추가\n");
		// 1. 몬스터 데이터 추가
		// 2. 몬스터 데이터 보기
		// 3. 몬스터 데이터 삭제
		// 4. 프로그램 종료
		scanf_s("%d", &playerInput);

		if (playerInput==1)
		{
			AddMonseter(monster_name, monster_region, monster_grade, monster_leve, &totalMonsterCount, &monsters);

			totalMonsterCount++;
		}
			
		
		
		
	}
}