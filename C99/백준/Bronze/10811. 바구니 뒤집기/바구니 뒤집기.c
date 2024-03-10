#include <stdio.h>

int main(void) {
    int n[100];
    int num, count, k, l, temp, o;

    scanf("%d %d", &num, &count);
    for (int i = 0; i < num; i++) {
        n[i] = i + 1;
    }
    for (int i = 0; i < count; i++) {
        scanf("%d %d", &k, &l);
        o = l - k;
        if (o != 0) {
        if (o % 2 == 0)
            o = o / 2;
        else
            o = o / 2 + 1;
        }
        for (int j = 0; j < o; j++) {
            temp = n[l - j - 1];
            n[l - 1 - j] = n[k - 1 + j];
            n[k - 1 + j] = temp;
        }
    }
    for (int i = 0; i < num; i++) {
        printf("%d ", n[i]);
    }
}