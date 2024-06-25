/*
* �ۼ��� : �ӳ���
* �ۼ��� : 2024-06-25
* �н���ǥ : �ݺ����� ���ؿ� �ǽ�
*/

/*
* �ݺ����� ����ϴ� ����
* ���ʿ��� �ݺ����� �ڵ带 �����ϰ� ǥ���� �� �ִ�.
*/

// ���� : for �ݺ���, while �ݺ��� 

/*
* for( �ʱ�� ; ���ǽ� ; ��ȭ�� )  //loop statement
* {
*		�ڵ峻��; //loop body
* }
* 
* �ʱ�� :  int x = 0, int y = 0; �ݺ����� ������ �� �ʿ��� ������ ���� �� �Ҵ��� �̷������ ����
* ���ǽ� : i < 10  : ���ǽ��� ���̸� ���� ��ü�� �ڵ带 ������ �� ��ȭ�� ����
* ��ȭ�� : i++; �ʱ���� ���� ���� ��ȭ���Ѽ� ������ Ż���� �� �ֵ��� �ϴ� ��
*/

#include "lectures.h";

void lecture12()
{
	//1. for �ݺ���
	//for �ݺ��� ����

	// i++ : i = i + 1; (���Կ����ں��� �ʰ� ó��)
	// ++i : i = i + 1; (���Կ����ں��� ���� ó��)

	// Hello World 10�� ���
	for (int i = 0; i < 10; i++)
	{
		printf("Hello World!\n");
	}

	// �ʱ��, ��ȭ���� ��ȭ�� �ش�
	int index;
	for (index = 10; index > 0; index--)
	{
		printf("Index print %d\n", index);
	}

	for (int i_num = 0; i_num < 10; i_num += 2)
	{
		printf("i_num print %d\n", i_num);
	}
	
	// for( ; ; ); ���� �ڿ� �����ݷ� ���̸� �ٵ�� ������ �۵�
	//{
	//	printf("���ڵ�� ��� �۵��� �ɱ��\n");
	//}

	for (;;)
	{
		printf("Hi\n"); // ���ѹݺ� ctrl c
	}

}

void lecture12_2()
{
	// scanf ��� �ݺ����� �����ֱ�
	printf("�� �� �ݺ����� ������ ���̰���? ���� �Է�\n");
	int i_scanfNum;
	scanf_s("%d", &i_scanfNum);

	// for���� printf ����ؼ� i_scanfNm�� ���� ���� "�ݺ��� �ǽ�"
	for (int i = 0; i < i_scanfNum; i++)
	{
		printf("�ݺ��� �ǽ�, i_scanfNum : %d\n", i_scanfNum);
	}

	// for �ݺ����� �ݺ� Ƚ���� �������ִ� �ڵ带 �ۼ��Ҷ� ����

	// for ����2
	printf("�ݺ��� ���� ����2\n");
	
	// 1�̻� 100�̸��� ������ �߿��� 7�� ����� 9�� ��� ���

	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0 | i % 9 == 0)
			printf("%d\n", i);
	}
	
	// ���� 3 while������ ����
	int w_num;
	scanf_s("%d", &w_num);
	while (w_num > 0)
	{
		printf("w_num �ݺ� %d \n", w_num);
		w_num--;
	}
}