#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(NULL)); // ?�수 ?�성�??�드 ?�정

    number = rand() % 100 + 1; // 1부??100까�????�수 ?�성

    printf("1부??100 ?�이???�자�?맞춰보세??\n");

    do {
        printf("추측???�자�??�력?�세?? ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("?�무 ?�니??\n");
        }
        else if (guess < number) {
            printf("?�무 ?�습?�다.\n");
        }
        else {
            printf("축하?�니?? %d번만???�자�?맞췄?�니??\n", attempts);
        }
    } while (guess != number);

    return 0;
}