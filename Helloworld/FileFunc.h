#pragma once
#include <stdio.h>

// ~~~.h : 함수의 원형을 선언

// (데이터 타입) 1. void 2. (반환값 데이터형) <- int, double, char, char*, int*, double*, struct people

// int 함수이름();
typedef struct Person {
	char name[30];
	int age;
}Person;

#define filename "Test\\People.txt"

void WriteFile();
void ReadFile();
void WriteFileByStruct();
void ReadFileByStruct();
