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


void AddMonsterInfo(Monster monster[100], int* monsterIndexPtr)
{
	char newName[30];
	char grade[30];
	char region[30];

	printf("추가할 몬스터 이름 입력 : ");
	scanf_s("%s", newName, 30);


	printf("추가할 몬스터 등급 입력 : ");
	scanf_s("%s", grade, 30);

	printf("추가할 몬스터 지역 입력 : ");
	scanf_s("%s", region, 30);

	strcpy_s(monster[*monsterIndexPtr].name, 30, newName);
	strcpy_s(monster[*monsterIndexPtr].grade, 30, grade);
	strcpy_s(monster[*monsterIndexPtr].region, 30, region);

	
	(*monsterIndexPtr)++;
}

void SearchMonsterByName(Monster monster[100], int totalmonsterCount)
{
	char searchName[30];
	printf("검색하고 싶은 이름을 입력하세요 : ");
	scanf_s("%s", searchName, 30);

	for (int i = 0; i < totalmonsterCount; i++)
	{
		if (Compare(searchName, monster[i].name))
		{
			printf("\n해당하는 몬스터를 찾았습니다\n");
			printf("몬스터의 이름 : %s, 몬스터의 지역 : %s, 몬스터의 등급 : %s\n", monster[i].name, monster[i].region, monster[i].grade);
		}
	}
}

void ShowAllMonsterData(Monster monster[100], int totalMonsterCount)
{

	for (int i = 0; i < totalMonsterCount; i++)
	{
		printf("이름 : %s, ", monster[i].name);
		printf("등급 : %s, ", monster[i].grade);
		printf("지역 : %s\n", monster[i].region);
	}
}

void DeleteMonsterByName(Monster* monster, int* totalCount) {
	char deleteName[30];
	printf("삭제할 몬스터 이름 입력: ");
	scanf_s("%s", deleteName, 30);

	for (int i = 0; i < *totalCount; i++) {
		if (Compare(deleteName, monster[i].name)) {
			// 배열 요소를 왼쪽으로 이동
			for (int j = i; j < *totalCount - 1; j++) {
				monster[j] = monster[j + 1];
			}
			(*totalCount)--;
			printf("몬스터 %s가 성공적으로 삭제되었습니다.\n", deleteName);
			return;
		}
	}
	printf("이름이 %s인 몬스터를 찾을 수 없습니다.\n", deleteName);
}