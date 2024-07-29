#include <stdio.h>
#include <string.h>

typedef int MyInt;
typedef int* MyIntPtr;

typedef struct Monster {
	char name[30];
	char grade[30];
	char region[30];
}Monster;

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

void ChangeMonsterInfo(Monster(*monster)[100], int* monsterIndexPtr)
{
	char newname[30];
	char grade[30];
	char region[30];
	
	printf("변경할 몬스터 이름 입력 : ");
	scanf_s("%s", newname, 30);
	
	
	printf("변경할 몬스터 등급 입력 : ");
	scanf_s("%s", grade, 30);
	
	printf("변경할 몬스터 지역 입력 : ");
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

int main()
{
	MyInt myInt = 4;
	printf("%d\n", myInt);

	MyIntPtr myIntPtr = &myInt;
	printf("%d\n", *myIntPtr);

	struct Monster m1;
	strcpy_s(m1.name, 30, "고블린");

	printf("몬스터 이름 : %s\n", m1.name);

	// 구조체 포인터 사용법
	// 구조체 변수에 주소연산자 값을 넣는다

	int totalMonsterCount = 0;

	Monster* monsterptr = &m1;

	Monster monsterGroup[100];

	ChangeMonsterInfo(monsterGroup, &totalMonsterCount);
	printf("몬스터 이름 : % s, 몬스터 등급 : % s, 몬스터 지역 : % s\n", monsterGroup[totalMonsterCount].name, 
		monsterGroup[totalMonsterCount].grade, monsterGroup[totalMonsterCount].region);

	//// Compare 함수
	//char name1[30] = "홍길동";
	//char name2[30] = "홍길동";
	//
	//if (Compare(name1, name2))
	//{
	//	printf("같다\n");
	//}
	//else
	//	printf("다르다\n");
	//
	//int monsterSize;
	//scanf_s("%d", monsterSize);
	//Monster* monsterGptr = malloc(sizeof(Monster) * monsterSize);
	//free(monsterSize);

	SearchMonsterByName(m1);
}