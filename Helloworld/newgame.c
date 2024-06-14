#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(NULL)); // 난수 생성기 시드 설정

    number = rand() % 100 + 1; // 1부터 100까지의 난수 생성

    printf("1부터 100 사이의 숫자를 맞춰보세요.\n");

    do {
        printf("추측한 숫자를 입력하세요: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("너무 큽니다.\n");
        }
        else if (guess < number) {
            printf("너무 작습니다.\n");
        }
        else {
            printf("축하합니다! %d번만에 숫자를 맞췄습니다.\n", attempts);
        }
    } while (guess != number);

    return 0;
}