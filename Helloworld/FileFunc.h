#pragma once
#include <stdio.h>

// ~~~.h : �Լ��� ������ ����

// (������ Ÿ��) 1. void 2. (��ȯ�� ��������) <- int, double, char, char*, int*, double*, struct people

// int �Լ��̸�();
typedef struct Person {
	char name[30];
	int age;
}Person;

#define filename "Test\\People.txt"

void WriteFile();
void ReadFile();
void WriteFileByStruct();
void ReadFileByStruct();
