#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(NULL)); // ?ģ ?ģ±źø??ė ?¤ģ 

    number = rand() % 100 + 1; // 1ė¶??100ź¹ģ????ģ ?ģ±

    printf("1ė¶??100 ?¬ģ“???«ģė„?ė§ģ¶°ė³“ģø??\n");

    do {
        printf("ģ¶ģø”???«ģė„??ė „?ģø?? ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("?ė¬“ ?½ė??\n");
        }
        else if (guess < number) {
            printf("?ė¬“ ?ģµ?ė¤.\n");
        }
        else {
            printf("ģ¶ķ?©ė?? %dė²ė§???«ģė„?ė§ģ·?µė??\n", attempts);
        }
    } while (guess != number);

    return 0;
}