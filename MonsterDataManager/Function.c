#include "Function.h"

int Compare(char* str1, char* str2) // 반환하는 값이 0이면 다르다. 1이면 같다.
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
	printf("검색하고 싶은 이름을 입력하세요\n");
	scanf_s("%s", searchName, 30);

	if (Compare(monster.name, searchName))
	{
		printf("해당하는 몬스터를 찾았습니다\n");
		printf("몬스터의 이름 : %s, 몬스터의 지역 : %s, 몬스터의 등급 : %s", monster.name, monster.region, monster.grade);
	}
}

void AddMonsterInfo(Monster(*monster)[100], int* monsterIndexPtr)
{
	char newname[30];
	char grade[30];
	char region[30];

	printf("추가할 몬스터 이름 입력 : ");
	scanf_s("%s", newname, 30);


	printf("추가할 몬스터 등급 입력 : ");
	scanf_s("%s", grade, 30);

	printf("추가할 몬스터 지역 입력 : ");
	scanf_s("%s", region, 30);

	strcpy_s(monster[*monsterIndexPtr]->name, 30, newname);
	strcpy_s(monster[*monsterIndexPtr]->grade, 30, grade);
	strcpy_s(monster[*monsterIndexPtr]->region, 30, region);

}

void ShowMonsterInfo(Monster monster)
{
	printf("몬스터 이름 : %s\n", monster.name);
	printf("몬스터 등급 : %s\n", monster.grade);
	printf("몬스터 지역 : %s\n", monster.region);
}