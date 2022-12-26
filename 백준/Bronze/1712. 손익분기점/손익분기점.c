#include <stdio.h>

int main()
{
    int a,b,c;
    int sum=0;
    int i;
    int p;
    scanf("%d %d %d",&a,&b,&c);
    p = b - c;
    if (p >= 0)
    {
        printf("-1");
        return 0;
    }
    i = a / (-p) + 1;
    printf("%d", i);
}