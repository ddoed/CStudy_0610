// 입력
// Scanf 함수의 실습
// 변수 미리 선언 (입력을 받아서 저장할 변수를 미리 선언)
// 기본 사용법 : scanf("%d", &변수의 이름);
// scanf_s("%d", &num);
#include <stdio.h>

int main(void)
{
	int num;
	printf("예제\n");
	printf("숫자를 입력해 주세요 : ");
	scanf_s("%d", &num);
	printf("num에 들어간 숫자 : %d \n\n", num);

	//문제1 두개의 정수를 입력받아서 두 수의 뺄셈과 곱셈의 결과 출력
	//변수의 이름 : Firstnum1, Firstnum2
	printf("문제1\n");
	int FirstNum1, FirstNum2;
	scanf_s("%d %d", &FirstNum1, &FirstNum2);
	printf("두 수의 뺄셈 : %d \n", FirstNum1 - FirstNum2);
	printf("두 수의 곱셈 : %d \n\n", FirstNum1 * FirstNum2);

	//문제2 3개의 정수를 입력받아서 SecondNum1 + SecondNum2 + SecondNum3
	printf("문제2\n");
	int SecondNum1, SecondNum2, SecondNum3;
	scanf_s("%d %d %d", &SecondNum1, &SecondNum2, &SecondNum3);
	printf("결과 : %d \n\n", SecondNum1+SecondNum2+SecondNum3);

	//문제3 두개의 정수를 입력받아서 몫과 나머지를 출력
	//a%b 나머지
	printf("문제3\n");
	int ThiredNum1, ThiredNum2;
	scanf_s("첫번째 문자 : %d", &ThiredNum1);
	scanf_s("두번째 문자 : %d", &ThiredNum2);
	printf("몫 : %d", ThiredNum1 / ThiredNum2);
	return 0;
}