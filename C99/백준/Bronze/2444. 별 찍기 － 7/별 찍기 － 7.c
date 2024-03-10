#include <stdio.h>

int main(void) {
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }
        printf(" ");
        printf("\n");
    }
    for (int i = a - 1; i >= 0; i--) {
        if (i == a - 1)
            continue;
        for (int j = 0; j < a - i - 1; j++) {
            printf(" ");
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}