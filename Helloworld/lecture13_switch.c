/*
* if ~ else if ~ else
* switch ~ break
* 
* switch(변수)
* {
*		case 변수의 값:
*		실행되는 코드;
*		break;
* }
*/

/*
* 형식이 균일한 처리해야 할 조건이 다양할때
*/
#include "lectures.h";

void lecture13_2()
{
	int num;
	scanf_s("%d", &num);

	switch (num) // case : case와 콘론 사이에 들어가는 값은 정수가 아니고 정수의 값으로 반환되는 식이여도 상관없음
				 // 가독성을 위해 사용
	{
		case 0:
			printf("num은 0");
		case 1<<2:
			printf("0,1의 값이 나올 확률");
			break;
		case 2:
		case 3:
		case 66:
			printf("2,3,4의 값이 나올 확률");
		default:
			printf("num은 0~4이외의 값");
			
	}

	// switch( )
	// ( ) 안에 올 수 있는 데이터 타입은 정수형
	// float, double -> 에러 발생
}