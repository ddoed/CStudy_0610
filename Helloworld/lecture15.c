/*
* 작성자 : 임나빈
* 작성일 : 2024-06-28
* 학습목표 : 지역 변수와 전역변수의 이해
*/

/*
* 지역 변수(Local variable) : 중괄호 내부에서 생성되는 변수. 지역변수는 선언된 지역내에서만 유효하다.
*/

// 변수의 존재기간 : 중괄호가 끝날 때 변수가 사라진다. 지역 변수가 저장되는 공간(메모리 공간)을 스택(stack)이라고 한다

// 변수의 접근 범위 : 범위 밖에서 선언된 변수와 범위 안에서 선언된 변수의 이름을 같을 때 어떤 변수를 사용할까?

// 같은 지역 내에서 같은 이름의 변수를 선언할 수 있나요? No 컴파일러가 같은 이름의 변수에 대해서 어떤 변수를 사용해야 할 지 모르기 때문

// 범위가 다른 곳에서 같은 이름의 변수가 선언이 되었다면, 가장 가까운 범위의 변수를 사용한다.

/*
* 전역 변수(global variable) : { } 밖에 선언된 변수
*/

int count; // 전역 변수의 선언, 전역변수는 선언 시에 0으로 초기화 된다. 전역 변수의 사용 지양

#include "lectures.h"

int SimpleFunc()
{
	count++; // 전역 변수의 값을 변경
	int num = 10;
	num++;
	return num;
}

void PlusOne(int a, int b) // 호출할 때 마다 Count를 1증가 시키는 함수
{
	
	a++;
	b++;
}

void lecture15()
{
	
	printf("전역변수에 값을 안 입력함 : %d\n", count);
	count = 10;
	int num = 17; // 4byte
	printf("%d\n", num);
	SimpleFunc();
	printf("%d\n", num);

	int count1 = 4, count2 = 6;

	PlusOne(count1, count2);
	PlusOne(count1, count2);

	printf("count1의 값 : %d, count2의 값 %d\n", count1, count2);
	static int static_num; // lecture15 함수 내에서만 사용하는 변수

	printf("static_num 의 값 %d\n", static_num);
	printf("count : %d\n", count);
}

