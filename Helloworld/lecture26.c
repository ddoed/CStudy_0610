// ���� �����
// printf scanf
// Ű������ �Է��� ����Ϳ� ���
#include "lectures.h"
#include "FileFunc.h"

#define filename2 "filemode.txt"

// ������ ����Ǵ� ��ġ
// 

// printf : ����Ϳ� ���
// scanf : Ű����� ���� �Է¹��� ���� �ּҸ� �����ؼ� �ּҿ� ����
// fopen : ������ ���ų� ���� ���ؼ� �ü���� �������ִ� �Լ�
// ������, ������, �� - �ü���� ������ �ִ�.
// Ű����, ���콺, ����� - �ϵ��� ��ǻ�Ϳ��� �۵��ϵ��� ����
// �ϵ��� ȸ�簡 ���� �پ��ϰ�, 
// ��Ʈ�� : �����, Ű����, ���콺, ���� �ٸ� �ϵ��� �������ִ� ��

// ������ ���� -> RAM : �ֹ߼� �޸� : ��ǻ�� �Ǵ� ���α׷��� ����Ǹ� ������� �޸�
// ���ֹ߼� �޸� : ���α׷��� ����ǰ� ��ǻ�Ͱ� ����ǵ� ����Ǵ� �޸�
// �����͸� �����ϰ� �ʹ�
// �ü���� �ٸ���, ������ �� �ٸ� �� �����͸� �����Ϸ���, ���� ��Ʈ�� ������Ѿ���
// File

// ���������2
// ���� "wt" Appendix ����
// wt ���
// ��� : ������ �а� ���� ���� ���. ������ �������� ������ ������ ���� ����, ������ �����ϸ� ������ ��� ����� �ٽ� ����

// r+ ���
// 
// 
// 
// 
// 
// fseek �Լ� : ������ ������� �� ������ ũ�⸸ŭ file pointer ����Ű�� ���� �޶����� �ȴ�
// fp�� �̿��ؼ� ����� �б⸦ ���ÿ� �Ѵٸ� ó���� ���⸦ fp ������ ���� ����Ű�� �ȴ�.
// fseek(fp, 0, SEEK_SET);
// SEEK_SET : ������ ������
// SEEK_END : ������ ��
// SEEK_CUR : ������ ���� ������

// ���
// "w+" : ����/�б� ������ ���, ������ �����ϸ� ������ ��� ����� ���� ����
// "r+" : �б�/���� ������ ���, ������ ���� �Ŀ� �ٽ� ���Ⱑ ������ ���
// "a" : ������ ����Ű�� ������ ��ġ���� ������ �߰�
// "a+" : ������ �߰��� �Ŀ� �б���� ������ ���

void WritePlus()
{
	FILE* fp = fopen(filename2, "w+");

	if (fp == NULL)
	{
		printf("���� ���� ����!\n");
	}
	// ���� �Է�(write)

	fputs("Hello World!\n", fp);

	fseek(fp, 0, SEEK_SET);
	//���� ���(read)
	char buffer[100];
	fgets(buffer, sizeof(buffer), fp);
	printf("Read from this file : %s", buffer);
	fclose(fp);
}

void ReadPlus()
{
	FILE* fp = fopen(filename2, "r+");

	if (fp == NULL)
	{
		printf("���� �б� ����!\n");
	}

	char buffer[100];
	fgets(buffer, sizeof(buffer), fp);
	printf("Read from this file : %s", buffer);

	fseek(fp, 0, SEEK_END);
	fputs("Append text \n", fp);
	fclose(fp);
}

void FileIndicater()
{
	FILE* fp = fopen(filename2, "r");
	if (fp == NULL)
	{
		ferror(fp);
		printf("���� �б� ����!\n");
	}
	//fgetc(fp);
	printf("���� �����Ͱ� ����Ű�� �ִ� ���� : %c\n", fgetc(fp));

	fclose(fp);
}

void AppendixMode()
{
	FILE* fp = fopen(filename2, "a");
	if (fp == NULL)
	{
		printf("append Mode Error!\n");
	}

	fputs("Append More Text\n", fp);

	fclose(fp);

}

void AppendixPlusMode()
{
	FILE* fp = fopen(filename2, "a+");
	if (fp == NULL)
	{
		perror("append Plus Error!\n");
	}

	fputs("Append even More Text\n", fp);

	fseek(fp, 0, SEEK_SET);

	char buffer[100];
	fgets(buffer, sizeof(buffer), fp);
	printf("Read from file %s\n", fp);

	fclose(fp);
}
void lecture26()
{
	//WriteFile(); //������ �Ἥ �����ϴ� �Լ�
	//FILE* fp = fopen(filename, "r");

	//if (fp == NULL) {
	//	printf("Read Error!\n");
	//	return 0;
	//}

	//string, char

	//fgetc : �Ѱ��� �о���� �Լ�
	//fgets : ���ڿ��� �о���� �Լ�

	//char buffer[100]; // ���� : �����͸� �ӽ������� �����ߴٰ� �ʿ��� �� ������ ���� �뵵
	//
	//fgets(buffer, 100, fp);
	//
	//printf("%s\n", buffer);
	//
	//fclose(fp);

	// Test ���� �ȿ� CProgram �̸����� ������ Today is 2024-07-31 �ؽ�Ʈ ��� ���� ����
	// ������ ������ �о�ͼ� �ܼ�â�� ���

	//ReadFileByStruct();
	//WritePlus();
	
	//ReadPlus();
	//AppendixMode();
	AppendixPlusMode();
}