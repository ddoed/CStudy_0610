// 입력
// Scanf 함수의 실습
// 변수 미리 선언 (입력을 받아서 저장할 변수를 미리 선언)
// 기본 사용법 : scanf("%d", &변수의 이름);
// scanf_s("%d", &num);

#include "lectures.h"
void lecture4_2()
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
	printf("SecondNum1 + SecondNum2 + SecondNum3 : %d \n\n", SecondNum1 + SecondNum2 + SecondNum3);

	//문제3 두개의 정수를 입력받아서 몫과 나머지를 출력
	//a%b 나머지
	printf("문제3\n");
	int ThiredNum1, ThiredNum2;
	printf("첫번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &ThiredNum1);
	printf("두번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &ThiredNum2);
	
	printf("몫 : %d ",ThiredNum1/ThiredNum2 );
	printf("나머지 : %d \n\n", ThiredNum1 % ThiredNum2);

	//문제 4. 하나의 정수를 받아서 제곱을 출력하는 코드 작성
	printf("문제4\n");
	int fourthNum;
	printf("숫자를 입력해 주세요 : ");
	scanf_s("%d", &fourthNum);
	printf("제곱 : %d ", fourthNum*fourthNum);
	

	//문제 5. 세개의 정수를 입력을 받아서 {fifthNum1-fifthNum2} x {fifthNum2 + fifthNum3} x {fifthNum3*fifthNum1}
	printf("\n\n문제5\n");
	int fifthNum1, fifthNum2, fifthNum3;
	printf("첫번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &fifthNum1);
	printf("두번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &fifthNum2);
	printf("세번째 숫자를 입력해 주세요 : ");
	scanf_s("%d", &fifthNum3);
	printf("{fifthNum1-fifthNum2} x {fifthNum2 + fifthNum3} x {fifthNum3*fifthNum1} : %d \n\n", (fifthNum1 - fifthNum2 ) * ( fifthNum2 + fifthNum3 ) * ( fifthNum3 * fifthNum1 ));
}