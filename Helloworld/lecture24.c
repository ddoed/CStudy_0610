/*
* 작성일 : 2024-07-23
* 작성자 : 임나빈
* 학습목표 : 구조체
*/

#include "lectures.h"
#include "stdbool.h"

// 구조체의 멤버 변수 초기화 하는법

// 구조체와 포인터
typedef struct item {
	int itemX;
	int itemY;
	int* itemPtr;
}item;

typedef struct Player2 {
	int playerX;
	int playerY;
	bool isPlayerDead;
}Player2;

typedef struct Monster {
	char* monsterName;
	char* monsterGrade;
}Monster;

void ChangePlayerInfoByStruct(Player2* p2, int addValue)
{
	p2->playerX += addValue;
	p2->playerY += addValue;
	p2->isPlayerDead != (p2->isPlayerDead);
}

void ChangeItemInfoBystruct(item* p3, int addValue)
{
	p3->itemX += addValue;
	p3->itemY += addValue;
}

void ChangePlayerInfo(int* playerX, int* playerY, bool* isPlayerDead, int addValue)
{
	*playerX += addValue;
	*playerY += addValue;
	*isPlayerDead = !*isPlayerDead;
}

void ChangePlayerInfo(int* playerX, int* playerY, bool* isPlayerDead, int addValue);

void lecture24()
{
	int playerX = 5, playerY = 5;
	bool isPlayerDead = false;

	struct Player {
		int playerX;
		int playerY;
		bool isPlayerDead;
	};

	struct Player p1;

	// typedef 키워드를 사용하여 구조체 선언
	

	Player2 p2;

	// 구조체의 멤버변수를 사용하는 방법 : . 연산자
	p1.playerX = 5;
	p1.playerY = 5;
	p1.isPlayerDead = true;

	printf("playerX : %d, playerY : %d, 플레이어의 생존 여부 : %d\n", p1.playerX, p1.playerY, p1.isPlayerDead);


	ChangePlayerInfo(&playerX, &playerY, &isPlayerDead, 5);
	printf("playerX : %d, playerY : %d, 플레이어의 생존 여부 : %d\n", playerX, playerY, isPlayerDead);
	ChangePlayerInfo(&playerX, &playerY, &isPlayerDead, 5);
	printf("playerX : %d, playerY : %d, 플레이어의 생존 여부 : %d\n", playerX, playerY, isPlayerDead);

	ChangePlayerInfoByStruct(&p1, 5);
	printf("playerX : %d, playerY : %d, 플레이어의 생존 여부 : %d\n", p1.playerX, p1.playerY, p1.isPlayerDead);


	//플레이어가 갖는 공통 속성을 하나로 묶어서 표현
	// 주소, 데이터 타입(4바이트) n개
	// 서로 다른 데이터 타입을 사용할 수 있는 하나의 타입을 만들 수 있는 기능


	//item이라는 이름으로 구조체 만들기

	//구조체 안에서 초기화 불가능
	

	item item1;
	item1.itemX, item1.itemY = 0;
	int some = 1;
	item1.itemPtr = &some;
	*item1.itemPtr = 10;
	printf("some의 값 : %d\n", some);

	// item 구조체 변수를 가리키는 주소를 저장하는 변수 선언
	item* itemPtr = &item1;

	// 구조체의 주소를 이용해서 구조체 변수에 접근
	(*itemPtr).itemX = 20; // item1.itemX 에 20넣기

	// 화살표 연산자
	itemPtr->itemX = 10; //(*itemPtr).itemX = 10;

	item1.itemX = 10;
	item1.itemY = 10;

	ChangeItemInfoBystruct(&item1, 5);

	printf("%d %d\n", item1.itemX, item1.itemY);
	
	Monster monster;
	monster.monsterGrade = "일반";
	monster.monsterName = "고블린";

	printf("몬스터의 이름 : %s 몬스터의 등급 : %s", monster.monsterName, monster.monsterGrade);
	
}

