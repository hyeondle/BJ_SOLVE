#include <stdio.h>

int main()
{
    int i,a,b;
    scanf("%d", &i);
    for (int j = 0;j<i;j++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n",a+b);
    }
}