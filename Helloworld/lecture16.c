/*
* 작성자 : 임나빈
* 작성일 : 2024-07-02
* 학습목표 : 배열
* - 목적 : 별피하기 게임에 별을 여러개 한번에 생성
*/

/*
* 배열의 선언
* 
* 변수의 선언 : (데이터형) (변수이름) = 값;
* 배열의 선언 : (데이터형) (배열이름)[];
* 
* - 배열을 선언하는 첫번째 방법
*  데이터형 배열이름[배열의 수]
* 
* - 베열을 선언하는 두번째 방법
*  
* 
*/


#include "lectures.h"
#include <stdbool.h>

void lecture16()
{
	//배열1
	int arr[10] = {0}; //나머지 9개 모두 0

	//배열2
	int arr2[] = { 0,1,2,3,4,5 };

	//배열3
	int arr3[10] = { 0,1,2,3,4,5,6,7,8,9 };

	for (int i = 0; i < 10; i++) {
		printf("배열에 들어간 요소 출력 : %d\n", arr[i]);
	}

	// ex, ey 10개
	int ex[10] = { 0 };
	int ey[10] = { 0 };
	bool enemy[10] = {false};

	for (int i = 0; i < 10; i++) {
		printf("ex : %d, ey : %d\n", ex[i], ey[i]);
	}
}