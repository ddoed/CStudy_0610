// 파일 입출력
// printf scanf
// 키보드의 입력을 모니터에 출력
#include "lectures.h"
#include "FileFunc.h"

#define filename2 "filemode.txt"

// 파일이 저장되는 위치
// 

// printf : 모니터에 출력
// scanf : 키보드로 부터 입력받은 값을 주소를 전달해서 주소에 저장
// fopen : 파일을 열거나 쓰기 위해서 운영체제가 지원해주는 함수
// 윈도우, 리눅스, 맥 - 운영체제가 여러개 있다.
// 키보드, 마우스, 모니터 - 하드웨어가 컴퓨터에서 작동하도록 관리
// 하드웨어도 회사가 정말 다양하고, 
// 스트림 : 모니터, 키보드, 마우스, 서로 다른 하드웨어를 연결해주는 것

// 변수를 저장 -> RAM : 휘발성 메모리 : 컴퓨터 또는 프로그램이 종료되면 사라지는 메모리
// 비휘발성 메모리 : 프로그램이 종료되고 컴퓨터가 종료되도 저장되는 메모리
// 데이터를 저장하고 싶다
// 운영체제가 다르고, 종류도 다 다른 이 데이터를 저장하려면, 파일 스트림 연결시켜야함
// File

// 파일입출력2
// 쓰기 "wt" Appendix 쓰기
// wt 모드
// 기능 : 파일을 읽고 쓰기 위한 모드. 파일이 존재하지 않으면 파일을 새로 생성, 파일이 존재하면 내용을 모두 지우고 다시 쓴다

// r+ 모드
// 
// 
// 
// 
// 
// fseek 함수 : 파일을 입출력할 때 파일의 크기만큼 file pointer 가리키는 값이 달라지게 된다
// fp를 이용해서 쓰기와 읽기를 동시에 한다면 처음에 쓰기를 fp 마지막 값을 가리키게 된다.
// fseek(fp, 0, SEEK_SET);
// SEEK_SET : 파일의 시작점
// SEEK_END : 파일의 끝
// SEEK_CUR : 파일의 현재 시작점

// 요약
// "w+" : 쓰기/읽기 가능한 모드, 파일이 존재하면 내용을 모두 지우고 새로 시작
// "r+" : 읽기/쓰기 가능한 모드, 파일을 읽은 후에 다시 쓰기가 가능한 모드
// "a" : 파일이 가리키는 마지막 위치에서 데이터 추가
// "a+" : 파일을 추가한 후에 읽기까지 가능한 모드

void WritePlus()
{
	FILE* fp = fopen(filename2, "w+");

	if (fp == NULL)
	{
		printf("파일 연결 실패!\n");
	}
	// 파일 입력(write)

	fputs("Hello World!\n", fp);

	fseek(fp, 0, SEEK_SET);
	//파일 출력(read)
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
		printf("파일 읽기 실패!\n");
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
		printf("파일 읽기 실패!\n");
	}
	//fgetc(fp);
	printf("현재 포인터가 가리키고 있는 문자 : %c\n", fgetc(fp));

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
	//WriteFile(); //파일을 써서 저장하는 함수
	//FILE* fp = fopen(filename, "r");

	//if (fp == NULL) {
	//	printf("Read Error!\n");
	//	return 0;
	//}

	//string, char

	//fgetc : 한개씩 읽어오는 함수
	//fgets : 문자열로 읽어오는 함수

	//char buffer[100]; // 버퍼 : 데이터를 임시적으로 보관했다가 필요할 때 꺼내서 쓰는 용도
	//
	//fgets(buffer, 100, fp);
	//
	//printf("%s\n", buffer);
	//
	//fclose(fp);

	// Test 폴더 안에 CProgram 이름으로 내용은 Today is 2024-07-31 텍스트 출력 파일 생성
	// 생성된 파일을 읽어와서 콘솔창에 출력

	//ReadFileByStruct();
	//WritePlus();
	
	//ReadPlus();
	//AppendixMode();
	AppendixPlusMode();
}