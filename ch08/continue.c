#include <stdio.h>

int main(void) {
    int num;
    printf("start ! \n");

    for (num = 1 ; num < 20 ; num++) {
        if (num % 2 == 0 || num % 3 == 0)
            continue;
        printf("%d ", num);
    }
    printf("\n");

    return 0;
}