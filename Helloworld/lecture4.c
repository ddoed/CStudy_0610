// 4�� �̽������� ����
// �ۼ���   : �ӳ���
// �ۼ���   : 2024-06-13
// �н���ǥ : �̽������� ���� ���

#include "lectures.h"
void lecture4()
{
	int num = 500;
	printf("���� ������ �ݾ� : 450�� \n");
	printf("\"���� ������ �ݾ� : %d�� \n", num);
	// ��ӵ� ��Ģ���� ���� ����� �� �� ���� ���ڵ��� �ִ�.
	// �̷��� ���ڵ��� ����ϰ� ���� �� �̽������� : "\"
	// \ + (��ӵ� ����) : ���ο� ��� ����
	// ���� : \n, \a, \t, \b, \r, \\, \?, \", \'

	/*
	\n : �� ���� ����ش�. ����. newline
	\a : alarm, ������ ������� ����Ѵ�
	\t : tab���� ���ڻ����� ������ ����(tab) ���
	\b : backspace, �ܼ� Ŀ���� �� ĭ �ڷ� �̵���Ų��.
	\r : ĳ���� ����(return), ���콺 Ŀ���� �ش� ���� �� ó������ �̵���Ų��.
	\\, \?, \", \' : �ý��� ��� â �⺻�� ����� �� �ִ� ���
	*/

	// ������ �̿��� �������� ����
	// ������ �����ϴ� �پ��� ���
	// (1) ������ ����, ���� �Ҵ�
	int num1;
	num1 = 10;
	// (2) ������ �ʱ�ȭ, (����� �Ҵ�)
	int num2 = 20;
	// (3) ������ ���ÿ� ����, �� ������ ���� ���� �͸�
	int num3, num4, num5;
	num3 = 10, num4 = 20, num5 = 30;
	printf("%d %d %d", num3, num4, num5);
	// (4) ������ ���ÿ� ����� �Բ� �Ҵ�

	// ���� �̸� �ۼ� �� ���� ����

	// ������ ù ���ڿ� ���ڰ� ���� �ȵȴ�
	// int 776num;
	// #, $ Ư�� ��ȣ�� �̸��� ����� �� ����
	// int #num;
	// ���� �̸� ���̿� ����(���� ����)�� �� �� ����.
	// int your function;
	// Ű���嵵 �̸����� ����� �� ����.
	// int int;

	// ������ �̸��� �� ���� ���� ����
}