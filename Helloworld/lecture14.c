/*
* 작성자 : 임나빈
* 작성일 : 2024-06-27
* 학습목표 : 함수
*/

// 1. main 함수에 시작되는 프로그래밍에 코드 내용이 길어질수록
// 코드를 파악하기 힘들고, 유지하기 힘들다

// 함수의 선언

// 함수의 선언
// 반환값이 있는지 없는지
// 매개변수가 있는지 없는지

// (반환하고 싶은 데이터 형식)(함수의 이름)() : 함수의 선언
//{
//		함수의 본체;
//}

// 유형1. 반환값이 있고 매개변수도 있는 함수
// 매개 변수 작성 법 : 반환값 함수이름(데이터 형식)
// 데이터 형식 매개 변수의 이름을 작성
int AddTwoNumber(int a, int b)
{
	int result = a + b;
	// 함수의 목표를 원래 위치로 반환하는 방법 : return 사용
	return result;
}

// 유형2. 반환값이 없고 매개변수도 없는 함수
void ShowResult(void)
{
	printf("결과를 출력하겠습니다\n");
	printf("게임을 종료합니다.\n");
}

// 유형3. 반환값이 없고 매개변수는 있는 함수
void ChangeResult(int result)
{
	printf("결과가 변경되었습니다 %d\n", result);
}
#include "lectures.h";

// 유형4. 반환값이 있고 매개변수는 없는 함수
int InputNumber()
{
	int number;
	scanf_s("%d", &number);
	return number;
}

// 문제1. 두 수를 비교하는 함수
// 두개의 변수를 매개변수로 받음
// 큰값을 리턴
int Compare(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

// 문제2. 변수를 하나 받아서 그 수를 절대값으로 변경해수는 함수
int AbsoluteNum(int a)
{
	if (a >= 0)
		return a;
	else
		return -a;
}


// 문제3. 절대값으로 변경한 두 수를 비교하는 함수
int CompareAbs(int a, int b)
{
	a = AbsoluteNum(a);
	b = AbsoluteNum(b);
	return Compare(a, b);
}

void lecture14()
{
	printf("%d\n", AddTwoNumber(5, 7));
	ShowResult();
	ChangeResult(AddTwoNumber(5, 7));
	int c;
	c = InputNumber();
	printf("%d값이 출력됨\n\n", c);

	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d가 더 큽니다\n", CompareAbs(a, b));
}


