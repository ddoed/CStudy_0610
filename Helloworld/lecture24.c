/*
* �ۼ��� : 2024-07-23
* �ۼ��� : �ӳ���
* �н���ǥ : ����ü
*/

#include "lectures.h"
#include "stdbool.h"

// ����ü�� ��� ���� �ʱ�ȭ �ϴ¹�

// ����ü�� ������
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

	// typedef Ű���带 ����Ͽ� ����ü ����
	

	Player2 p2;

	// ����ü�� ��������� ����ϴ� ��� : . ������
	p1.playerX = 5;
	p1.playerY = 5;
	p1.isPlayerDead = true;

	printf("playerX : %d, playerY : %d, �÷��̾��� ���� ���� : %d\n", p1.playerX, p1.playerY, p1.isPlayerDead);


	ChangePlayerInfo(&playerX, &playerY, &isPlayerDead, 5);
	printf("playerX : %d, playerY : %d, �÷��̾��� ���� ���� : %d\n", playerX, playerY, isPlayerDead);
	ChangePlayerInfo(&playerX, &playerY, &isPlayerDead, 5);
	printf("playerX : %d, playerY : %d, �÷��̾��� ���� ���� : %d\n", playerX, playerY, isPlayerDead);

	ChangePlayerInfoByStruct(&p1, 5);
	printf("playerX : %d, playerY : %d, �÷��̾��� ���� ���� : %d\n", p1.playerX, p1.playerY, p1.isPlayerDead);


	//�÷��̾ ���� ���� �Ӽ��� �ϳ��� ��� ǥ��
	// �ּ�, ������ Ÿ��(4����Ʈ) n��
	// ���� �ٸ� ������ Ÿ���� ����� �� �ִ� �ϳ��� Ÿ���� ���� �� �ִ� ���


	//item�̶�� �̸����� ����ü �����

	//����ü �ȿ��� �ʱ�ȭ �Ұ���
	

	item item1;
	item1.itemX, item1.itemY = 0;
	int some = 1;
	item1.itemPtr = &some;
	*item1.itemPtr = 10;
	printf("some�� �� : %d\n", some);

	// item ����ü ������ ����Ű�� �ּҸ� �����ϴ� ���� ����
	item* itemPtr = &item1;

	// ����ü�� �ּҸ� �̿��ؼ� ����ü ������ ����
	(*itemPtr).itemX = 20; // item1.itemX �� 20�ֱ�

	// ȭ��ǥ ������
	itemPtr->itemX = 10; //(*itemPtr).itemX = 10;

	item1.itemX = 10;
	item1.itemY = 10;

	ChangeItemInfoBystruct(&item1, 5);

	printf("%d %d\n", item1.itemX, item1.itemY);
	
	Monster monster;
	monster.monsterGrade = "�Ϲ�";
	monster.monsterName = "���";

	printf("������ �̸� : %s ������ ��� : %s", monster.monsterName, monster.monsterGrade);
	
}

