/*
* 작성자 : 임나빈
* 작성일 : 2024-06-24
* 학습목표 : 코드의 흐름 제어를 학습한다.조건문
*/

/*
* 코드의 흐름 제어 왜 배워야 할까요
* 코드의 유연성을 추가하기 위해서
* 조건문
*/

/*
* 의사 코드(수도코드, 슈도코드, pseudo code)
* 사람의 언어로 프로그래밍 언어 작성
*/

/*
* if 조건문
* if(조건문)
* {
*     조건식이 참일때 실행되는 코드를 작성.
* }
*/

/*
* 주의해야할 점 1. if조건문과 세미클론
* if 조건문과 세미클론 -> (x)
* if(조건문);
* {
*		"코드내용";
* }
* 
* 주의해야할 점 2. =연산자와 ==연산자의 차이를 구분할것
* C언어는 0이외의 숫자는 if(조건식)안에서 참이라고 판정
* 0이면 거짓이라고 판정
*/

/*
* {} 중괄호 업슨 if 문
* if(조건식)
*     코드내용;
*/

/*
* if - else
* if(조건식) // 조검과 정확히 반대로 이루어진, 조건과 일치하지 않는 나머지
* {
*		코드내용;
* }
* else // 위의 조건식이 false일 때 실행
* {
*		코드내용;
* }
*/

/*
* else if // if 조건문이 false이면 else if를 사용할 수 있음
*         // else if 뒤에 조건문 필요
*         // else if 단독으로 사용 불가능
* 
* if(방향키 왼쪽)
*	왼쪽으로
* else if (방향키 오른쪽)
*	오른쪽으로
* else if (방향키 위쪽)
*	위쪽으로
* else
*	방향키 이외의 키를 눌렀을때는 무시
* 
*/
#include "lectures.h";

void lecture11()
{
	// 정수형 변수 num1을 선언하고 10을 할당
	int num1 = 5;
	
	if (num1 == 10) // 주의해야할 사항 1. if(조건문); 표현을 사용하면 안된다.
	{
		printf("10입니다.\n");
	}
	
	if (num1 == 10) // num1 = 10의 의미는 10을 num1에 넣어라(숫자 10과 같음)
	{
		printf("5입니다.\n");
	}

	if (num1 == 7) 
		printf("중괄호 없는 코드 출력\n"); // if 조건문에 실행할 코드가 한 줄이라면 중괄호 생략 가능
		printf("중괄호 없는 코드2 출력"); // 중괄호를 생략하는 방식은 1줄만 가능
	
	// 실수와 문자의 조건문 사용
	float f_num1 = 0.1f;
	if (f_num1 == 0.1f)
		printf("0.1입니다\n");

	if (f_num1 == 0.05f + 0.05f) // 근사치 조심해야 한다.
		printf("0.1이 출력될까요?\n");

	char c_num1 = 'A';

	if (c_num1 == 'A')
		printf("A입니다.\n");

	if (c_num1 == 65)
		printf("A입니다.\n");

	// scanf_s로 조건문 작성해보기
	int num2;
	int targetNumber = 40;

	scanf_s("%d", &num2);

	if (num2 == targetNumber)
	{
		printf("참\n");
	}
	else
		printf("거짓\n");
	


	//
	int c_num2 = 'k';

	// c_num2가 k와 일치하면 "k입니다"를 출력
	// 일치하지 않으면 c_num2를 k값으로 변경

	if (c_num2 == 'k')
		printf("k입니다\n");

	else
	{
		c_num2 = 107;
		printf("c_num2의 값은 %c", c_num2);
	}
	
	// 문제
	int score = 0;
	scanf_s("%d\n", &score);

	if (score >= 90)
		printf("A등급");
	else if (score >= 80)
		printf("B등급");
	else if (score >= 70)
		printf("C등급");
	else if (score >= 60)
		printf("D등급");
	else
		printf("F등급");




}