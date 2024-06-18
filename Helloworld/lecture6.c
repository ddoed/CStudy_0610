/* �ۼ���    : �ӳ���
*  �ۼ���    : 2024-06-17
*  �н� ��ǥ : �����
*
*  �����
*  - ������� �ؾ� �ϴ� ����
*  - ���α׷����� �ϸ鼭 �ۼ��� ������ ������ �ذ��ϱ� ���ؼ�
*  - ������ �ǽɰ��� �κп� �ڵ��� �ߴ����� �����ϰ� ������ ��ǻ���� ������� ������ Ȯ���� �� �ִ�.
*  - ������ �ذ� �ϱ� ���� ����̴�(With Computer Debuging System)
*  ����Ű
*/

// Operator ������
// ����, ��� ������
// '=', -, +, x, / , % 
// "=" : A = B ����.(�� ������ - ����)	(���� ������);
// int num = 30;   // Left Value = Right Value; ������ ���� ���� ������ �־��ִ� ���
// ���� ������ (a <- b ) �������ִ�.

/*���� ���� ������
* ���� :  a = a + b;	   a += b;
*        a = a - b;    a -= b;
*        a = a * b;    a *= b;
*        a = a >> b;   a >>= b;
*        a = a & b;    a &= b;
*        a = a | b;    a |= b;
*/

/* ����, ���� ������
*  num++;
* ++num;
* num--;
* --num;
*  ++ : ���� +=1�� ���� ��.
*  -- : ���� -=1�� ���� ��.
*
*  ���� ����(����) : ������ 1�� ���� �� ���� ��, ������ ������ �����Ѵ�.
*  ���� ����(����) : ������ ������ ���� ���� �� ������ ���� ��ȭ ��Ų��.
*
*/

/* ���� ������
*  �� ������. �� ���� ���� ���Ͽ� �� ���踦 ǥ���ϴ� ������.
*  a ,  b , result ;
*  a = 10, b = 12
*  ��� ���� True(��), False(����)���� ���ɴϴ�.
*  True : 1,  False : 0
*  result = (a > b);
*  result�� ���� true�� 1��, false�� 0�� ����.
*/

/* �� ������
*  AND, OR, NOT
*  AND : && (shift + 7)	       ->  A�� B�� ��� ���̸� ����� ���� ����� ��ȯ�Ѵ�. "1"
*  OR  : || (Shift + \(�޷�))  ->  A�� B�� �ϳ��� ���̸� 1�� ����� ��ȯ�Ѵ�.
*  NOT : !���� 	               -> A�� True�̸� False ��ȯ, False�̸� True ��ȯ�Ѵ�.
*/

// ���� ���� ����
// int A = (a == 10 && b == 12);
// int B = (a < 12 || b > 12);
// int C = !a; 


#include "lectures.h";

void lecture6() {

	printf("����� ���� ����\n");
	char a, b, c;
	a = 100;
	b = 300;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	printf("������ ���� ����\n");

	// 9 + 2 = 11, 9 - 2 = 7;

	int num1, num2, num3, result;
	result = 0;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("��� ���(L-Value) = %d x %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);
	printf("���մ��Կ�����(��� %d += %d)\n", result, num1);

	printf(" ����, ���� ������ ���� ����\n");
	int PlusA = 10;
	int PlusB = (PlusA++) + 2;
	printf("PlusB�� ���� ������ ���� ���? : %d\n", PlusB);
	printf("PlusA�� ���� �󸶰� ���� ���? : %d\n", PlusA);

	printf(" ��� �� = %d\n", num1 < num3);

	printf(" ������ �켱 ���� ������ ����\n");

	// ���� :   
	// ���� A�� ���� 3 + 4 x 5 �̸�,  ���� B�� ����  7 / 3 % 2 �̴�.
	// ���� A�� B�� ���� ���� ���� Result ������ �����Ͽ� ����Ͽ� ������.

	int variableA;  // 3 + 4 x 5;
	int variableB;  // 7 / 3 % 2;  
	int Final;      // variableA�� variableB�� ���迬���ڸ� ����Ͽ� Final �����غ�����.

	// scanf ���� ������ �Ҵ�.

	int cal1, cal2, cal3;
	scanf_s("%d %d %d\n", &cal1, &cal2, &cal3);
	variableA = cal1 + cal2 * cal3;
	printf("variableA�� �� : %d", variableA);
	variableB = 7 / 3 % 2;
	Final = (variableA < variableB);

	printf(" VariableA�� VariableB ���� �۳���? True�̸� 1�� ��� False�̸� 0�� ����մϴ� : %d\n", Final);
}