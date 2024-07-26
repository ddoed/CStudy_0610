#include "lectures.h"
#include <string.h>
#pragma pack(push,1)
#pragma pop

// 구조체
// 데이터를 반복문으로 표현
// 주소의 시작 점에서 다양한 데이터 자료를 사용할 수 있게 해주는 것
// 사용자 정의형 자료형

// 1. 구조체를 선언 : struct

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
	printf("원의 원점 좌표 : [%d, %d]\n", circle.centerPos.posX, circle.centerPos.posY);
	printf("원의 반지름 : %lf\n", circle.radius);
}

void ShowRectangleInfo(Rectangle rectangle)
{
	printf("사각형의 leftUp 좌표 : [%d , %d]\n", rectangle.leftUpPos.posX, rectangle.leftUpPos.posY);
	printf("사각형의 leftDown 좌표 : [%d , %d]\n", rectangle.leftUpPos.posX, rectangle.rightDownPos.posY);
	printf("사각형의 RightDown 좌표 : [%d , %d]\n", rectangle.rightDownPos.posX, rectangle.rightDownPos.posY);
	printf("사각형의 RightUp 좌표 : [%d , %d]\n", rectangle.rightDownPos.posX, rectangle.leftUpPos.posY);
}

void ShowPointInfo(Point* pPtr, int xValue, int yValue)
{
	pPtr->posX = xValue;
	pPtr->posY = yValue;
	printf("x좌표 : %d y좌표 : %d\n", pPtr->posX, pPtr->posY);
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
	//p1.name = "홍길동"; //에러가 뜨는 이유. name : 배열 - "홍길동" 리터럴 문자열 - 주소
	strcpy_s(p1.name, 20, "홍길동");
	p1.age = 10;
	printf("%s %d\n", p1.name, p1.age);

	// 2. 구조체의 선언과 동시에 초기화 하는 방법
	struct People p2 = {
		{"이순신"},{11}
	};
	printf("%s %d\n", p2.name, p2.age);

	// 3. typedef struct People{} People
	People p3 = {
		{"강감찬"}, {12}
	};
	printf("%s %d\n", p3.name, p3.age);

	Point point1 = {
		{1},{2}
	};

	point1.posX = 10;
	point1.posY = 10;
	printf("%d %d\n", point1.posX = 10, point1.posY = 10);

	// 4. 구조체를 배열로 표현
	Point pointArr[3] = {
		{1,2},
		{10,20},
		{30, 40}
	};

	for (int i = 0; i < 3; ++i)
	{
		printf("x좌표 : %d y좌표 : %d\n", pointArr[i].posX, pointArr[i].posY);
	}

	People peopleArr[3] = {
		{"이순신", 21},
		{"강감찬", 22},
		{"이순신", 23}
	};

	Point point3 = { 1,2 };
	Point* pPtr = &point3;

	pPtr->posX = 5; // (*pPtr).posX = 10;
	point3.posX = 7;
	(*pPtr).posX = 9;

	printf("point3의 값 : %d\n", point3);

	People p4;
	People* peoplePtr = &p4;

	strcpy_s(peoplePtr->name, 20, "홍길동");
	peoplePtr->age = 20;

	printf("%s %d \n", peoplePtr->name, peoplePtr->age);

	// 예제문제 1
	// Point 구조체를 구조체 포인터로 값을 변경해서 출력
	// void ShowPointInfo(구조체 포인터) 값을 변경하고 printf 출력하는 함수

	Point point4 = { 2,4 };

	ShowPointInfo(&point4, 4, 8);

	// 6. 동적할당. 주소의 메모리를 직접 할당 malloc - free
	People* newPeoplePtr = malloc(sizeof(People));
	// People char 20 - 20, int 4 - 24크기
	printf("People 구조체의 크기 : %d\n", sizeof(People));

	// 구조체 포인터의 동적할당을 할 때는 반드시 sizeof 구조체 이름 선언
	strcpy_s(newPeoplePtr->name, 20, "이순신");
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