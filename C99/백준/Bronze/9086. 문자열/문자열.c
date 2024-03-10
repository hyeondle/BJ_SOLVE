#include <stdio.h>
#include <string.h>
int main(void) {
    char a[1000];
    int count;

    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%s", a);
        printf("%c%c\n", a[0], a[strlen(a) - 1]);
    }
}