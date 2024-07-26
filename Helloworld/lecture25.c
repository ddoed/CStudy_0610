#include "lectures.h"
#include <string.h>
#pragma pack(push,1)
#pragma pop

// ����ü
// �����͸� �ݺ������� ǥ��
// �ּ��� ���� ������ �پ��� ������ �ڷḦ ����� �� �ְ� ���ִ� ��
// ����� ������ �ڷ���

// 1. ����ü�� ���� : struct

typedef struct People {
	char name[25];
	int age;
}People;

typedef struct Point {
	int posX;
	int posY;
}Point;

typedef struct Rectangle {
	Point leftUpPos;
	Point rightDownPos;
}Rectangle;

typedef struct Circle {
	Point centerPos;
	double radius;
}Circle;

void ShowCircleInfo(Circle circle)
{
	printf("���� ���� ��ǥ : [%d, %d]\n", circle.centerPos.posX, circle.centerPos.posY);
	printf("���� ������ : %lf\n", circle.radius);
}

void ShowRectangleInfo(Rectangle rectangle)
{
	printf("�簢���� leftUp ��ǥ : [%d , %d]\n", rectangle.leftUpPos.posX, rectangle.leftUpPos.posY);
	printf("�簢���� leftDown ��ǥ : [%d , %d]\n", rectangle.leftUpPos.posX, rectangle.rightDownPos.posY);
	printf("�簢���� RightDown ��ǥ : [%d , %d]\n", rectangle.rightDownPos.posX, rectangle.rightDownPos.posY);
	printf("�簢���� RightUp ��ǥ : [%d , %d]\n", rectangle.rightDownPos.posX, rectangle.leftUpPos.posY);
}

void ShowPointInfo(Point* pPtr, int xValue, int yValue)
{
	pPtr->posX = xValue;
	pPtr->posY = yValue;
	printf("x��ǥ : %d y��ǥ : %d\n", pPtr->posX, pPtr->posY);
}

Point AddPoint(Point p1, Point p2)
{
	Point newPoint;
	newPoint.posX = p1.posX + p2.posX;
	newPoint.posY = p1.posY + p2.posY;
	return newPoint;
}

void lecture25()
{
	struct People p1;
	//p1.name = "ȫ�浿"; //������ �ߴ� ����. name : �迭 - "ȫ�浿" ���ͷ� ���ڿ� - �ּ�
	strcpy_s(p1.name, 20, "ȫ�浿");
	p1.age = 10;
	printf("%s %d\n", p1.name, p1.age);

	// 2. ����ü�� ����� ���ÿ� �ʱ�ȭ �ϴ� ���
	struct People p2 = {
		{"�̼���"},{11}
	};
	printf("%s %d\n", p2.name, p2.age);

	// 3. typedef struct People{} People
	People p3 = {
		{"������"}, {12}
	};
	printf("%s %d\n", p3.name, p3.age);

	Point point1 = {
		{1},{2}
	};

	point1.posX = 10;
	point1.posY = 10;
	printf("%d %d\n", point1.posX = 10, point1.posY = 10);

	// 4. ����ü�� �迭�� ǥ��
	Point pointArr[3] = {
		{1,2},
		{10,20},
		{30, 40}
	};

	for (int i = 0; i < 3; ++i)
	{
		printf("x��ǥ : %d y��ǥ : %d\n", pointArr[i].posX, pointArr[i].posY);
	}

	People peopleArr[3] = {
		{"�̼���", 21},
		{"������", 22},
		{"�̼���", 23}
	};

	Point point3 = { 1,2 };
	Point* pPtr = &point3;

	pPtr->posX = 5; // (*pPtr).posX = 10;
	point3.posX = 7;
	(*pPtr).posX = 9;

	printf("point3�� �� : %d\n", point3);

	People p4;
	People* peoplePtr = &p4;

	strcpy_s(peoplePtr->name, 20, "ȫ�浿");
	peoplePtr->age = 20;

	printf("%s %d \n", peoplePtr->name, peoplePtr->age);

	// �������� 1
	// Point ����ü�� ����ü �����ͷ� ���� �����ؼ� ���
	// void ShowPointInfo(����ü ������) ���� �����ϰ� printf ����ϴ� �Լ�

	Point point4 = { 2,4 };

	ShowPointInfo(&point4, 4, 8);

	// 6. �����Ҵ�. �ּ��� �޸𸮸� ���� �Ҵ� malloc - free
	People* newPeoplePtr = malloc(sizeof(People));
	// People char 20 - 20, int 4 - 24ũ��
	printf("People ����ü�� ũ�� : %d\n", sizeof(People));

	// ����ü �������� �����Ҵ��� �� ���� �ݵ�� sizeof ����ü �̸� ����
	strcpy_s(newPeoplePtr->name, 20, "�̼���");
	newPeoplePtr->age = 30;

	printf("%s %d\n", newPeoplePtr->name, newPeoplePtr->age);
	free(newPeoplePtr);

	Rectangle r1 = { {1,2}, {4,8} };
	ShowRectangleInfo(r1);

	Circle circle;
	circle.centerPos.posX = 0;
	circle.centerPos.posY = 0;
	circle.radius = 5;
	ShowCircleInfo(circle);

	Point c_p1 = { 1,1 };
	Point c_p2 = { 2,3 };
	Point c_p3 = AddPoint(c_p1, c_p2);

	printf("[%d, %d]\n", c_p3.posX, c_p3.posY);
}