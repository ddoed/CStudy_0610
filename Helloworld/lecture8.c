/*
* 작성자 : 임나빈
* 작성일 : 2024-06-19
* 
* 첫번째 학습 목표 : 코드로 2진법 10진법 16진법 작성해서 데이터로 넘겨주기
*/

// 2진수, 8진수, 16진수로 표현하는 법
// 2진수 : "0b"2진수로 표현 : 0b(+)1010 => 10(2진수로 10을 표현)
// 8진수 : "0"17 8진수 표현
// 10진수 : 10진법 표현, 0. 10진법 표현한 값
// 16진수 : "0x"A

// printf로 8진수 표현 %o, 16진수 표현 %x

// float 실수, 소수점

// 소수를 표현하는 방법
// 첫번째 방식. 비트를 n : m으로 분할한 후, n만큼 정수로 사용하고, m만큼 소수 부분을 사용
// 문제점 : 소수를 자세히 표현하고자 하려면, 정수를 표현할 공간이 너무 적어짐
// 소수를 정수표현방식으로 사용하지 말고, 2e-1, 2e-2, 2e-3 자리수에 0또는 1 그 값을 더해서 표현하는 방식 도입.
// 고정 소수점 방식 Fixed Point 방식 : 정수를 표현하는 비트 수와 소수를 표현하는 비트 수를 고정시켜서 표현하는 방식
// 부동 소수점 방식(Float Point) : 소수를 표현하는 방식으로, 정수부분과 소수 부분의 비율에 따라 소수점을 출력하는 위치를 변경하는 방식

// 300.625를 정수로 표현 0b10000000.101
// 6.622555555555;
// 비트 표현방식

// 비트 부호 : &, |, ^, -
// 비트 이동 부호 : >>, <<
//
// a & b : AND 연산

// a | b : OR 연산

// a ^ b : XOR연산
// 0b1000
// 0b1100
// 0b0100

// a ~ 반전. 2의 보수 0b0001 -> 1110
// int num;
// num = ~num;

// 비트 간의 이동 연산자
// 8 <<2;(2e2) = 4
// char 0b00000100; <<2
//      0b00010000; 
// char 0b00000100; <<2
//      0b00010000; 



#include "lectures.h";

void lecture8() 
{
	// 변수 이름 정수(int) a_num 선언한 후, 숫자 15를 넣어서 출력
	int a_num = 15;
	printf("a_num의 값은 %d\n", a_num);

	a_num = 15;
	printf("a_num의 8진수 표현 값을 10진수로 출력 : %o\n", a_num);

	a_num = 15;
	printf("a_num의 16진수 표현 값을 10진수로 출력 : %x\n", a_num);
	printf("a_num의 16진수 표현 값을 10진수로 출력 : %X\n", a_num);

	a_num = 0b100;
	printf("a_num의 2진수 표현 값을 10진수로 출력 : %d\n", a_num);


	// 문제1. -255 (2진수로표현해보기)
	int b_num = -255; // 255를 2의 보수한 값
	// 255를 2진법으로 표현 0b 00000000 00000000 00000000 11111111
	// 255로 표현한 반전    0b 11111111 11111111 11111111 00000001
	b_num = 0b11111111111111111111111100000001;

	printf("b_num의 값 : %d", b_num);

	float a_float = 0.25;
	printf("a_float의 값 : % f\n", a_float);

	// 0.1 + 0.2 가 0.3과 같은지 관계 연산자로 표현을 해보세요
	// true면 1을 출력, false면 0을 출력.
	printf("부동 소수점의 에러");
	int Bool = (0.1) + (0.2) == 0.3;
	printf("참이면 1 거짓이면 0을 출력합니다 0.1 + 0.2 = 0.3 => %d\n", Bool);

	float c_num = 0.0;

	for(int number = 0; number < 10; number++)
		c_num += 0.1;
	printf("c_num에 0.1을 30번 더한 값이 무엇인가요 %f\n", c_num);


	printf("비트 연산 문제\n");

	int d = 0b00001111;
	int e = 0b00010010;

	int my_int = 0b00000010;
	int result = d & e;
	printf("내가 계산한 값 = %d 실제 값 = %d\n", my_int, result);

	d = 0b0001111;
	e = 0b0010010;
	my_int = 0b0011111;
	result = d | e;
	printf("내가 계산한 값 = %d 실제 값 = %d\n", my_int, result);

	d = 0b0001111;
	e = 0b0010010;
	my_int = 0b0011101;
	result = d ^ e;
	printf("내가 계산한 값 = %d 실제 값 = %d\n", my_int, result);

	char overFlowedValue = 0b01000000;
	// char 1바이트의 크기. 표현할 수 있는 수의 범위?
	// 1바이트 정수.. 표현할 수 있는 음수 범위, 양수 범위
	// 양의 정수 범위 : 0b[0][000][0000] : 0, 1 ~ 127
	// 음의 정수 범위 : 0b[1][000][0000] : -128 ~ -1
	//                 0b[1][111][1111] : -1
	
	// 0b01000000 << 2;
	// 0b100000000 -> 8자리까지

	overFlowedValue = overFlowedValue << 2;
	printf("%d\n", overFlowedValue);

	overFlowedValue = 0b0000100;
	overFlowedValue = overFlowedValue >> 5;
	printf("%d\n", overFlowedValue);

	// 10진수 하나를 입력받아서 해당 수의 2의 보수 값을 출력하는 코드 작성 (~)연산자 사용
	int twoComplement;
	scanf_s("%d", &twoComplement);
	twoComplement = ~twoComplement + 1;
	printf("2의 보수의 값을 출력 : %d\n", twoComplement);


	// 시프트 연산
	// 10진수 하나 입력 받아서 해당 수에 8을 곱한후 32로 나누는 코드를 x,/ 없이 작성해보기
	// 8과 32가 반드시 코드에 들어가도록. 비트 연산자 (>> <<) 사용할 것
	char shiftNum = 64;
	// 0b01000000
	//scanf_s("%d\n", &shiftNum);
	//shiftNum = (shiftNum << 3) >> 5;
	shiftNum = shiftNum << 3;
	shiftNum = shiftNum >> 5;
	printf("8을 곱한 후 32로 나눈 값 : %d", shiftNum);

	

}