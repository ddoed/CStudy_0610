/*
* �н� ��ǥ : while �ݺ���
* 
* for �ݺ���
* while �ݺ������ε� �ݺ��� ǥ���� �� �� ����
*/

/*
* while(���ǽ�) : ���ǽ��� true�̸� ���� ��ü�� �����ϰ� ���ǽ��� false�̸� ���� �ڵ� ����
* {
*		�ڵ� ����;
*		��ȭ��;
* }
* 
* do ~ while
* do
* {
*		�ݺ���ų �ڵ�;
* }while(���ǽ�);
*/

#include "lectures.h";

void lecture12_3()
{
	int i = 0;
	while (i < 10)
	{
		i += 2; //��ȭ��
		printf("helloworld\n");
	}

	//while (1) //���ѹݺ�
	//{
		
	//}

	int index;
	scanf_s("%d", &index);

	while (index != 3)
	{
		printf("Hello World!\n");
		scanf_s("%d", &index);
	}
	// while�ݺ����� ���� : ��� �ݺ����� �𸣴� ���

	// do while �ݺ���
	// �ѹ��� �ݵ�� �����
	int i_doNum = 10;
	do
	{
		printf("�ѹ��� �ݵ�� ����ϴ� do while��\n");
		i_doNum *= 3;
	} while (i_doNum < 10);

	
}