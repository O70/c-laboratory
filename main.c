#include <stdio.h>

#define THRAEX 10
#define HANZO "HANZO"

int main() {
    printf("Hello, World! %d, %s\n", THRAEX, HANZO);

    for (int i = 0; i < 10; i++) {
        printf("Current: %d, Next: %d \n", i, i + 1);
    }

    int a = 1;
    if (a < 0) {
        printf(" < 0\n");
    } else if (a > 0) {
        printf(" > 0\n");
    } else {
        printf("== 0\n");
    }

    int b = 0;
    while (b < 10) {
        printf("%d,", b++);
    }
    printf("\nFinal: %d\n", b);

    int b1 = 0;
    while (b1 < 10) {
        printf("%d,", ++b1);
    }
    printf("\nFinal: %d\n", b1);

    int c = 0;
    do {
        printf("%d,", ++c);
    } while (c < 10);
    printf("\nFinal: %d\n", c);

    return 0;
}
