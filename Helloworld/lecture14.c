/*
* �ۼ��� : �ӳ���
* �ۼ��� : 2024-06-27
* �н���ǥ : �Լ�
*/

// 1. main �Լ��� ���۵Ǵ� ���α׷��ֿ� �ڵ� ������ ���������
// �ڵ带 �ľ��ϱ� �����, �����ϱ� �����

// �Լ��� ����

// �Լ��� ����
// ��ȯ���� �ִ��� ������
// �Ű������� �ִ��� ������

// (��ȯ�ϰ� ���� ������ ����)(�Լ��� �̸�)() : �Լ��� ����
//{
//		�Լ��� ��ü;
//}

// ����1. ��ȯ���� �ְ� �Ű������� �ִ� �Լ�
// �Ű� ���� �ۼ� �� : ��ȯ�� �Լ��̸�(������ ����)
// ������ ���� �Ű� ������ �̸��� �ۼ�
int AddTwoNumber(int a, int b)
{
	int result = a + b;
	// �Լ��� ��ǥ�� ���� ��ġ�� ��ȯ�ϴ� ��� : return ���
	return result;
}

// ����2. ��ȯ���� ���� �Ű������� ���� �Լ�
void ShowResult(void)
{
	printf("����� ����ϰڽ��ϴ�\n");
	printf("������ �����մϴ�.\n");
}

// ����3. ��ȯ���� ���� �Ű������� �ִ� �Լ�
void ChangeResult(int result)
{
	printf("����� ����Ǿ����ϴ� %d\n", result);
}
#include "lectures.h";

// ����4. ��ȯ���� �ְ� �Ű������� ���� �Լ�
int InputNumber()
{
	int number;
	scanf_s("%d", &number);
	return number;
}

// ����1. �� ���� ���ϴ� �Լ�
// �ΰ��� ������ �Ű������� ����
// ū���� ����
int Compare(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

// ����2. ������ �ϳ� �޾Ƽ� �� ���� ���밪���� �����ؼ��� �Լ�
int AbsoluteNum(int a)
{
	if (a >= 0)
		return a;
	else
		return -a;
}


// ����3. ���밪���� ������ �� ���� ���ϴ� �Լ�
int CompareAbs(int a, int b)
{
	a = AbsoluteNum(a);
	b = AbsoluteNum(b);
	return Compare(a, b);
}

void lecture14()
{
	printf("%d\n", AddTwoNumber(5, 7));
	ShowResult();
	ChangeResult(AddTwoNumber(5, 7));
	int c;
	c = InputNumber();
	printf("%d���� ��µ�\n\n", c);

	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d�� �� Ů�ϴ�\n", CompareAbs(a, b));
}


