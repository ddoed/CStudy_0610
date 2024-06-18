/* 작성자 : 임나빈
*  작성일 : 2024-06-17
*  학습 목표 : 디버깅
* 
*  디버깅
*  - 디버깅을 해야 하는 이유
*/

#include "lectures.h";

void lecture6() {

	printf("디버깅 예제 문제\n");
	char a, b, c;
	a = 100;
	b = 300;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);


	printf("\n\n문제5\n");
	int fifthNum1, fifthNum2, fifthNum3;
	printf("첫번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &fifthNum1);
	printf("두번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &fifthNum2);
	printf("세번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &fifthNum3);
	printf("{fifthNum1-fifthNum2} x {fifthNum2 + fifthNum3} x {fifthNum3 x fifthNum1} : %d \n\n", fifthNum1 - fifthNum2 * fifthNum2 + fifthNum3 * fifthNum3 * fifthNum1);
}