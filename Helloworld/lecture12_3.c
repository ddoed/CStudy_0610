/*
* 학습 목표 : while 반복문
* 
* for 반복문
* while 반복문으로도 반복을 표현을 할 수 있음
*/

/*
* while(조건식) : 조건식이 true이면 루프 본체를 실행하고 조건식이 false이면 다음 코드 실행
* {
*		코드 내용;
*		변화식;
* }
* 
* do ~ while
* do
* {
*		반복시킬 코드;
* }while(조건식);
*/

#include "lectures.h";

void lecture12_3()
{
	int i = 0;
	while (i < 10)
	{
		i += 2; //변화식
		printf("helloworld\n");
	}

	//while (1) //무한반복
	//{
		
	//}

	int index;
	scanf_s("%d", &index);

	while (index != 3)
	{
		printf("Hello World!\n");
		scanf_s("%d", &index);
	}
	// while반복문의 장점 : 몇번 반복할지 모르는 경우

	// do while 반복문
	// 한번은 반드시 출력함
	int i_doNum = 10;
	do
	{
		printf("한번은 반드시 출력하는 do while문\n");
		i_doNum *= 3;
	} while (i_doNum < 10);

	
}