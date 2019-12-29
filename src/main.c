#include <stdio.h>
#include "testc.h"

#define THRAEX 10
#define HANZO "HANZO"

void triangle() {
    int n = 10;
    for (int i = 1; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        for (int k = 0; k < 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }
}

void multiplication() {
    for (int i = 9; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d*%d=%02d ", i, j, i * j);
        }
        printf("\n");
    }
}

void string() {
    char a[] = "鬼王";
    printf("%s\n", a);

//    char b[2] = {"g", "w"};
//    printf("%s\n", b);
//    puts(b);

//    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
//    char greeting[6] = "Hello";
    char greeting[] = "Hello";
    printf("%s\n", greeting);
}

enum DAY {
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};

void testEnum() {
    enum DAY day;
    day = THU;
    printf("%d\n", day);
}

int main(void) {
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

    triangle();

    multiplication();

    string();

    testEnum();

    testPrint();

    return 0;
}
