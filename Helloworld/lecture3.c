// 기본 환경 설정
// main함수 시작과 끝을 알리는 핵심 변수이다. 반드시 1개만 존재해야한다. 이름 대소문자 반드시 지켜야함
// main 이름의 함수가 2이상 존재하면 에러 발생
// 소스파일 - 우클릭 - 설정 - 빌드에서 제외 기능으로 원하는 파일만 빌드 가능


// 작성자   : 임나빈
// 작성일자 : 2024-06-12
// 학습목표 : 변수

// 컴퓨터 한테 명령을 하고, 그 명령한 내용을 저장하기 위해서 변수 사용

// 선언 : 변수를 어떻게 컴퓨터한테 알려주나요. 
// 컴파일러에게 변수가 무엇을 저장하고, 얼만큼 저장해야 하는지 알려주는 것.
// Int   : 무엇을(정수), 
// Float : 무엇을(실수), 

// 선언 방법
// 데이터 형태 작성(int, float) 변수 이름(a)
// 예시 int a;

// 할당(assignMent)
// 선언한 변수에 데이터를 넣는 것
// a이름의 변수에 정수 형태의 데이터를 넣을 수 있게 된다.
// int a = 10;

// 초기화(Initialize)
// 변수에 처음으로 데이터를 할당하는 것


#include "lectures.h"
void lecture3()
{
	int a = 3 + 4;
	a = 4 + 7;
	printf("%d \n", a);
	float b = 3.2f + 4.7f;
	printf("%f \n", b);

	// 문제 1-1
	int width = 12;
	int height = 10;
	int lenght = 8;


	// 문제 1-2 
	int volume = width * height * lenght;


	// 문제 1-3
	volume = (volume + 164) / 165;

	float volume_f = width * height * lenght;
	volume_f = volume_f / 165;

	printf("문제 3의 답은 %d \n", volume);
	printf("문제 3-의 답은 %f \n", volume_f);


	//문제 2
	float Celsius = 1;
	float Fahrenheit = 9.0f / 5.0f * Celsius + 32;

	printf("문제 2의 답은 %.8f \n", Fahrenheit);
}