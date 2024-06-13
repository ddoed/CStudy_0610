#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main1() {
    int number, guess, attempts = 0;
    srand(time(NULL)); // ���� ������ �õ� ����

    number = rand() % 100 + 1; // 1���� 100������ ���� ����

    printf("1���� 100 ������ ���ڸ� ���纸����.\n");

    do {
        printf("������ ���ڸ� �Է��ϼ���: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("�ʹ� Ů�ϴ�.\n");
        }
        else if (guess < number) {
            printf("�ʹ� �۽��ϴ�.\n");
        }
        else {
            printf("�����մϴ�! %d������ ���ڸ� ������ϴ�.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
