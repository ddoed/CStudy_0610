/* �ۼ��� : �ӳ���
*  �ۼ��� : 2024-06-17
*  �н� ��ǥ : �����
* 
*  �����
*  - ������� �ؾ� �ϴ� ����
*/

#include "lectures.h";

void lecture6() {

	printf("����� ���� ����\n");
	char a, b, c;
	a = 100;
	b = 300;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);


	printf("\n\n����5\n");
	int fifthNum1, fifthNum2, fifthNum3;
	printf("ù��° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &fifthNum1);
	printf("�ι�° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &fifthNum2);
	printf("����° ���ڸ� �Է��� �ּ��� : ");
	scanf_s("%d", &fifthNum3);
	printf("{fifthNum1-fifthNum2} x {fifthNum2 + fifthNum3} x {fifthNum3 x fifthNum1} : %d \n\n", fifthNum1 - fifthNum2 * fifthNum2 + fifthNum3 * fifthNum3 * fifthNum1);
}