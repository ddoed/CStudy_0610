/*
* 작성자 : 임나빈
* 작성일 : 2024-06-25
* 학습목표 : 반복문의 이해와 실습
*/

/*
* 반복문을 써야하는 이유
* 불필요한 반복적인 코드를 간결하게 표현할 수 있다.
*/

// 종류 : for 반복문, while 반복문 

/*
* for( 초기식 ; 조건식 ; 변화식 )  //loop statement
* {
*		코드내용; //loop body
* }
* 
* 초기식 :  int x = 0, int y = 0; 반복문이 시작할 때 필요한 변수의 선언 및 할당이 이루어지는 공간
* 조건식 : i < 10  : 조건식이 참이면 루프 본체의 코드를 실행한 후 변화식 실행
* 변화식 : i++; 초기식의 변수 값을 변화시켜서 조건을 탈출할 수 있도록 하는 식
*/

#include "lectures.h";

void lecture12()
{
	//1. for 반복문
	//for 반복문 예제

	// i++ : i = i + 1; (대입연산자보다 늦게 처리)
	// ++i : i = i + 1; (대입연산자보다 먼저 처리)

	// Hello World 10번 출력
	for (int i = 0; i < 10; i++)
	{
		printf("Hello World!\n");
	}

	// 초기식, 변화식의 변화를 준다
	int index;
	for (index = 10; index > 0; index--)
	{
		printf("Index print %d\n", index);
	}

	for (int i_num = 0; i_num < 10; i_num += 2)
	{
		printf("i_num print %d\n", i_num);
	}
	
	// for( ; ; ); 선언문 뒤에 세미콜론 붙이면 바디와 별개로 작동
	//{
	//	printf("이코드는 어떻게 작동이 될까요\n");
	//}

	for (;;)
	{
		printf("Hi\n"); // 무한반복 ctrl c
	}

}

void lecture12_2()
{
	// scanf 몇번 반복할지 정해주기
	printf("몇 번 반복문을 실행할 것이가요? 숫자 입력\n");
	int i_scanfNum;
	scanf_s("%d", &i_scanfNum);

	// for문과 printf 사용해서 i_scanfNm의 현재 값과 "반복문 실습"
	for (int i = 0; i < i_scanfNum; i++)
	{
		printf("반복문 실습, i_scanfNum : %d\n", i_scanfNum);
	}

	// for 반복문은 반복 횟수가 정해져있는 코드를 작성할때 유용

	// for 예제2
	printf("반복문 예제 문제2\n");
	
	// 1이상 100미만의 정수들 중에서 7의 배수와 9의 배수 출력

	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 | i % 9 == 0)
			printf("%d\n", i);
	}
	
	// 예제 3 while문으로 구현
	int w_num;
	scanf_s("%d", &w_num);
	while (w_num > 0)
	{
		printf("w_num 반복 %d \n", w_num);
		w_num--;
	}
}