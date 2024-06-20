/*
*  작성자 : 임나빈
*  작성일 : 20240620
*  학습목표 : C언어 기본 자료형 + 상수
*/

// Question : 자료형이 무엇인가요?
// -> 변수. (자료형) (변수이름)
// 수를 구분할 필요가 있다. <정수, 실수>
// char 변수이름 = 0b00000001;
// int 변수이름 = 0b 00000000 00000000 00000000 00000001; 4byte
// long long 변수이름 = 0b 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001; 8byte
// 데이터가 저장될 메모리의 크기를 지정하기 위해 사용
// 어떤 데이터 타입 사용할지 지정 후 그 데이터의 크기를 지정한 키워드 -> 자료형
// int : 4바이트 공간 정수형 데이터 저장 공간

/* 
*  기본 자료형의 종류와 데이터의 표현범위
*  (1) 정수형
*  char : 1바이트(8비트) 2e8(256) -2e7 ~ 2e7 -1 / -128 ~ 127
*  short : 2바이트(16비트) -2e15 ~ 2e15 -1
*  int : 4바이트(32비트) -2e31 ~ 2e31 -1
*  long : 4바이트(32비트)
*  long long : 8바이트(64비트)
* 
*  ANSI : C언어의 표준을 정하는 협회 -> 컴파일러가 데이터 형의 최소 크기를 지켜라
* 
*  (2) 실수형
*  float : 4바이트. 소수점 6자리 표현
*  double : 8바이트. 소수점 15자리 표현
*  long float : 8바이트. 소수점 18자리 표현
*/

/*
*  1부호(MSN) 0, 1, 음수, 양수
*  부호가 필요없다 unsigned
*  unsigned char 변수 이름 : 0 ~ 2e8개 저장. 
*  unsigned int 변수이름 : 0 ~ 2e32개
*/

/*
*  sizeof 연산자
*  int i_num = sizeof(int);
*  int i_num = sizeof a;
*  int i_num = sizeof (a);
*/

/*
*  상수
*  변하지 않는 수
*  변수 - 자료형
* 
*  종류 : 이름을 갖는 상수, 이름을 갖지 않는 상수
*  literal 상수 -> 문자 그대로 변하지 않는 수
*  double my_double = 3.15;
*  
* 
*  int my_int = 10; // int
*  char my_char = 5; // int
*  short my_short = 7; // int
*  int my_int = 30억보다 큰수 //long long
* 
*  리터럴 상수에서 정수는 기본 자료형이 int
*  int보다 큰 수가 입력이 되면 int 보다 큰 데이터형이 선택
* 
*  컴퓨터가 처리할 수 있는 가장 빠른 단위 int
*  
*  실수는 기본 자료형이 double
*  my_double = 3.15;
*  float my_float = 3.15f;
* 
*  my_long = 3.15L;
*  UL : unsigned Long
*  LL : long long
*  ULL :  unsigned long long
* 
*  F : float
*  L : long
*/
/*
*  이름 있는 상수 : 심볼릭 상수
*  중력의 크기 : -9.8f;
*  
*  const float gravity = -9.8f;
* 
* 전처리기가 컴파일하기 전에 변수를 전부 -9.8로 변환
* #define GRAVITY = -9.8f
* 
* 상수를 작성할때 이름
* 대문자로 작성, 띄어쓰기는 _로 표시
*/

#include "lectures.h"

void lecture9()
{
	printf("기본 자료형 예제 문제\n");

	// sizeof 연산자를 사용해서 데이터형을 출력하기
	//int num = sizeof 3;
	printf("char 데이터 크기 : %d\n", sizeof(char));
	printf("short 데이터 크기 : %d\n", sizeof(short));
	printf("int 데이터 크기 : %d\n", sizeof(int));
	printf("long 데이터 크기 : %d\n", sizeof(long));
	printf("float 데이터 크기 : %d\n", sizeof(float));

	int num = 9;
	printf("%d\n", sizeof num);

	// 문제2. literal 상수를 sizeof 연산자로 출력
	// 실수 정수 (3.15, 3.15f, 10)
	printf("int 데이터 크기 : % d\n", sizeof(5));

	// 문제3. 직사각형의 넗이를 구하는 프로그램 작성
	// 좌표를 두개 지정받음 (xpos1, ypos1) (xpos2, ypos2)
	// 두번째 조건 : xpos2가 xpos1보다 커야함
	// xpos2 - xpos1
	// (4,6) (6.8) 2x2 = 4
	

	//심볼릭 상수 문제1.
	// const 키워드를 사용하여 파이를 PI로 저장하고 그 값을 3.14로 한다.
	// 원의 넓이를 구하는 코드를 상수를 사용하여 표현하세요
}