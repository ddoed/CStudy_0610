#include "FileFunc.h"

void WriteFile()
{
	FILE* fp = fopen(filename, "w"); // a.txt파일과 운영체제 파일 스트림과 연결

	// fopen 스트림을 연결해주는 함수가 정상적으로 실행되지 않을 때
	if (fp == NULL) {
		printf("Write Error!\n");
		return 0;
	}

	fputs("Hello world!\n", fp); // fputs (입력하고 싶은 값, 스트림);
	// FILE* 파일 스트림을 저장하는 구조체
	fputs("Hello world!\n", stdout); // stdout : 모니터에 연결해주는 스트림

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
		{"이순신", 31},
		{"강감찬", 32},
		{"장보고", 33}
	};

	for (int i = 0; i < 3; ++i) {
		printf("이름 : %s, 나이 : %d\n", People[i].name, People[i].age);
	}

	FILE* fp = fopen(filename, "w");

	if (fp == NULL) {
		printf("Write Error!\n");
		return 0;
	}

	for (int i = 0; i < 3; ++i)
	{
		fprintf(fp, "이름 : %s, 나이 : %d\n", People[i].name, People[i].age);
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

	fscanf_s(fp, "이름 : %s, 나이 : %d", People[0].name, 30, &People[0].age);

	printf("이름 : %s, 나이 : %d", People[0].name, People[0].age);

	fclose(fp);
}