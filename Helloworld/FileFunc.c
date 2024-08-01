#include "FileFunc.h"

void WriteFile()
{
	FILE* fp = fopen(filename, "w"); // a.txt���ϰ� �ü�� ���� ��Ʈ���� ����

	// fopen ��Ʈ���� �������ִ� �Լ��� ���������� ������� ���� ��
	if (fp == NULL) {
		printf("Write Error!\n");
		return 0;
	}

	fputs("Hello world!\n", fp); // fputs (�Է��ϰ� ���� ��, ��Ʈ��);
	// FILE* ���� ��Ʈ���� �����ϴ� ����ü
	fputs("Hello world!\n", stdout); // stdout : ����Ϳ� �������ִ� ��Ʈ��

	fclose(fp);
}

void ReadFile()
{
	FILE* fp2 = fopen(filename, "r");

	char buffer[100];

	fgets(buffer, 100, fp2);

	printf("%s\n", buffer);

	fclose(fp2);
}

void WriteFileByStruct() {
	Person People[3] = {
		{"�̼���", 31},
		{"������", 32},
		{"�庸��", 33}
	};

	for (int i = 0; i < 3; ++i) {
		printf("�̸� : %s, ���� : %d\n", People[i].name, People[i].age);
	}

	FILE* fp = fopen(filename, "w");

	if (fp == NULL) {
		printf("Write Error!\n");
		return 0;
	}

	for (int i = 0; i < 3; ++i)
	{
		fprintf(fp, "�̸� : %s, ���� : %d\n", People[i].name, People[i].age);
	}

	fclose(fp);
	fseek(fp, 0, SEEK_SET);
}

void ReadFileByStruct()
{
	WriteFileByStruct();
	

	FILE* fp = fopen(filename, "r");

	if (fp == NULL) {
		printf("READ ERROR!\n");
		return 0;
	}

	Person People[3];

	fscanf_s(fp, "�̸� : %s, ���� : %d", People[0].name, 30, &People[0].age);

	printf("�̸� : %s, ���� : %d", People[0].name, People[0].age);

	fclose(fp);
}