#include <stdio.h>

int main()
{
    int i,a,b;
    scanf("%d", &i);
    for (int j = 0;j<i;j++)
    {
        scanf("%d %d", &a, &b);
        printf("Case #%d: %d\n",j+1,a+b);
    }
}