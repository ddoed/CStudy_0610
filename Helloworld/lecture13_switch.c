/*
* if ~ else if ~ else
* switch ~ break
* 
* switch(����)
* {
*		case ������ ��:
*		����Ǵ� �ڵ�;
*		break;
* }
*/

/*
* ������ ������ ó���ؾ� �� ������ �پ��Ҷ�
*/
#include "lectures.h";

void lecture13_2()
{
	int num;
	scanf_s("%d", &num);

	switch (num) // case : case�� �ܷ� ���̿� ���� ���� ������ �ƴϰ� ������ ������ ��ȯ�Ǵ� ���̿��� �������
				 // �������� ���� ���
	{
		case 0:
			printf("num�� 0");
		case 1<<2:
			printf("0,1�� ���� ���� Ȯ��");
			break;
		case 2:
		case 3:
		case 66:
			printf("2,3,4�� ���� ���� Ȯ��");
		default:
			printf("num�� 0~4�̿��� ��");
			
	}

	// switch( )
	// ( ) �ȿ� �� �� �ִ� ������ Ÿ���� ������
	// float, double -> ���� �߻�
}