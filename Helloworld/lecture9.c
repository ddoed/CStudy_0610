/*
*  �ۼ��� : �ӳ���
*  �ۼ��� : 20240620
*  �н���ǥ : C��� �⺻ �ڷ��� + ���
*/

// Question : �ڷ����� �����ΰ���?
// -> ����. (�ڷ���) (�����̸�)
// ���� ������ �ʿ䰡 �ִ�. <����, �Ǽ�>
// char �����̸� = 0b00000001;
// int �����̸� = 0b 00000000 00000000 00000000 00000001; 4byte
// long long �����̸� = 0b 00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000001; 8byte
// �����Ͱ� ����� �޸��� ũ�⸦ �����ϱ� ���� ���
// � ������ Ÿ�� ������� ���� �� �� �������� ũ�⸦ ������ Ű���� -> �ڷ���
// int : 4����Ʈ ���� ������ ������ ���� ����

/* 
*  �⺻ �ڷ����� ������ �������� ǥ������
*  (1) ������
*  char : 1����Ʈ(8��Ʈ) 2e8(256) -2e7 ~ 2e7 -1 / -128 ~ 127
*  short : 2����Ʈ(16��Ʈ) -2e15 ~ 2e15 -1
*  int : 4����Ʈ(32��Ʈ) -2e31 ~ 2e31 -1
*  long : 4����Ʈ(32��Ʈ)
*  long long : 8����Ʈ(64��Ʈ)
* 
*  ANSI : C����� ǥ���� ���ϴ� ��ȸ -> �����Ϸ��� ������ ���� �ּ� ũ�⸦ ���Ѷ�
* 
*  (2) �Ǽ���
*  float : 4����Ʈ. �Ҽ��� 6�ڸ� ǥ��
*  double : 8����Ʈ. �Ҽ��� 15�ڸ� ǥ��
*  long double : 8����Ʈ. �Ҽ��� 18�ڸ� ǥ��
*/

/*
*  1��ȣ(MSN) 0, 1, ����, ���
*  ��ȣ�� �ʿ���� unsigned(���)
*  unsigned char ���� �̸� : 0 ~ 2e8�� ����. 
*  unsigned int �����̸� : 0 ~ 2e32��
*/

/*
*  sizeof ������
*  int i_num = sizeof(int);
*  int i_num = sizeof a;
*  int i_num = sizeof (a);
*/

/*
*  ���
*  ������ �ʴ� ��
*  ���� - �ڷ���
* 
*  ���� : �̸��� ���� ���, �̸��� ���� �ʴ� ���
*  literal ��� -> ���� �״�� ������ �ʴ� ��
*  double my_double = 3.15;
*  
* 
*  int my_int = 10; // int
*  char my_char = 5; // int
*  short my_short = 7; // int
*  int my_int = 30�ﺸ�� ū�� //long long
* 
*  ���ͷ� ������� ������ �⺻ �ڷ����� int
*  int���� ū ���� �Է��� �Ǹ� int ���� ū ���������� ����
* 
*  ��ǻ�Ͱ� ó���� �� �ִ� ���� ���� ���� int
*  
*  �Ǽ��� �⺻ �ڷ����� double
*  my_double = 3.15;
*  float my_float = 3.15f;
* 
*  my_long = 3.15L;
*  UL : unsigned Long
*  LL : long long
*  ULL :  unsigned long long
* 
*  F : float
*  L : long
*/
/*
*  �̸� �ִ� ��� : �ɺ��� ���
*  3, 3.14, A ...
*  �߷��� ũ�� : -9.8f;
*  
*  const float gravity = -9.8f;
* 
* ��ó���Ⱑ �������ϱ� ���� ������ ���� -9.8�� ��ȯ
* #define GRAVITY = -9.8f
* 
* ����� �ۼ��Ҷ� �̸�
* �빮�ڷ� �ۼ�, ����� _�� ǥ��
*/

#include "lectures.h";

void lecture9()
{
	printf("�⺻ �ڷ��� ���� ����\n");

	// sizeof �����ڸ� ����ؼ� ���������� ����ϱ�
	//int num = sizeof 3;

	// ��� �ذ��ϴ� ���
	int sizeNum = sizeof(char);
	printf("char ������ ũ�� : %d\n", sizeNum);

	sizeNum = sizeof(short);
	printf("short ������ ũ�� : %d\n", sizeNum);
	printf("int ������ ũ�� : %d\n", sizeNum);
	printf("long ������ ũ�� : %d\n", sizeNum);
	printf("float ������ ũ�� : %d\n", sizeNum);

	int num = 9;
	printf("%d\n", sizeof num);

	// ����2. literal ����� sizeof �����ڷ� ���
	// �Ǽ� ���� (3.15, 3.15f, 10)
	sizeNum = sizeof 10;
	printf("������ ���ͷ� ��� ũ�� : % d\n", sizeNum);
	sizeNum = sizeof 3.14;
	printf("�Ǽ��� ���ͷ� ��� ũ�� : % d\n", sizeNum); // double 8����Ʈ
	sizeNum = sizeof 'A';
	printf("int ������ ũ�� : % d\n", sizeNum);

	// ����3. ���簢���� ���̸� ���ϴ� ���α׷� �ۼ�
	// ��ǥ�� �ΰ� �������� (xpos1, ypos1) (xpos2, ypos2)
	// �ι�° ���� : xpos2�� xpos1���� Ŀ����
	// xpos2 - xpos1
	// (4,6) (6.8) 2x2 = 4
	int xpos1, ypos1, xpos2, ypos2;
	printf("�ι�° �ۼ��� x,y�� ù��° ���� Ŀ����\n");
	scanf_s("%d %d %d %d", &xpos1, &ypos1, &xpos2, &ypos2);
	int width = xpos2 - xpos1;
	int height = ypos2 - ypos1;
	int calArea = width * height;
	printf("%d x %d = %d\n", width, height, calArea);

	
	//�ɺ��� ��� ����1.
	// const Ű���带 ����Ͽ� ���̸� PI�� �����ϰ� �� ���� 3.14�� �Ѵ�.
	// ���� ���̸� ���ϴ� �ڵ带 ����� ����Ͽ� ǥ���ϼ���
	const float PI = 3.14;
	int r = 3;
	float Area = (float)r*r * PI;
	printf("%f", Area);
	}