#include <stdio.h>

int main()
{
    int i, s;
    scanf("%d", &i);
    s = 0;
    for (int j = 1;j<=i;j++)
    {
        s = s + j;
    }
    printf("%d", s);
}