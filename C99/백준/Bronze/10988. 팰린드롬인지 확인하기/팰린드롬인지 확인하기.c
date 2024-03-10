#include <stdio.h>
#include <string.h>
int main(void) {
    char str[101];
    scanf("%s", str);
    for (int i = 0; i < strlen(str) / 2 + 1; i++) {
        if (str[i] == str[strlen(str) - 1 - i])
            continue;
        else {
            printf("0\n");
            return 0;
        }
    }
    printf ("1\n");
}