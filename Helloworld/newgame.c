#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(NULL)); // ?œìˆ˜ ?ì„±ê¸??œë“œ ?¤ì •

    number = rand() % 100 + 1; // 1ë¶€??100ê¹Œì????œìˆ˜ ?ì„±

    printf("1ë¶€??100 ?¬ì´???«ìžë¥?ë§žì¶°ë³´ì„¸??\n");

    do {
        printf("ì¶”ì¸¡???«ìžë¥??…ë ¥?˜ì„¸?? ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("?ˆë¬´ ?½ë‹ˆ??\n");
        }
        else if (guess < number) {
            printf("?ˆë¬´ ?‘ìŠµ?ˆë‹¤.\n");
        }
        else {
            printf("ì¶•í•˜?©ë‹ˆ?? %dë²ˆë§Œ???«ìžë¥?ë§žì·„?µë‹ˆ??\n", attempts);
        }
    } while (guess != number);

    return 0;
}