/*
* 작성자 : 임나빈
* 작성일 : 2024-05-21
* 학습목표 : 자료형변환
* (1) 종류 : 자동형 변환, 강제형 변환
* (2) 정수의 승격
* (3) 연산자 자료형 불일치
* (4) 형변환 연산자
*/

// 자동으로 변수형 변환 (묵시적 변환), 수동으로 변수형 변환 (명시적 변환)

// 묵시적 변환
// 정수형 변수와 실수형 값을 더할 때

// 정수의 승격
// char1바이트, short 2바이트
// char a = 10;
// short b = 15;
// a + b = 25;

// 연산자 불일치에 의해 발생하는 바동 형 변환
// 서로 다른 데이터형의 연산이 발생했을 때 어떤 자료형으로 데이터를 맞추어 주어야하나?
// char, short => int
// (우선도 낮음) int => long => long long => float => double => long double

// 명시적 형 변환
// 3/4 = 0으로 출력됨
// 형 변환 연산자 ()
// (int) (double) (float) 데이터 형을 소괄호안에 작성 -> 형변환

// printf scanf
// scanf, scanf_s : 플레이어의 입력을 받을 수 있게 해준다. 게임의 기본적인 기능의 시작
// 




#include "lectures.h";

void lecture10()
{
	int num = 3 + 4.75 + 5.25;
	printf("%d\n", num); //결과는 13

	double num1 = 23;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로 : %f\n", num1);
	printf("실수 3.1415를 정수로 : %d\n", num2);
	printf("큰 정수 129를 작은 정수로 : %d\n", ch);

	//정수의 승격 예제

	short num11 = 15, num22 = 25;
	short num33 = num11 + num22;

	//예제문제

	int d_num1 = 3, d_num2 = 4;
	float  divresult = (float)d_num1 / d_num2; //실수와 정수 계산하면 실수로 값을 자동으로 맞춰줌
	printf("rusult = %f", divresult);
}