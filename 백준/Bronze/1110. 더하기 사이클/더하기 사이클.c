#include <stdio.h>

int main()
{
    int n,a,b,d,c;

    scanf("%d", &n);
    if (n<10)
        n = n * 10;
    d = n;
    c = 1;
    while(1)
    {
        a = d/10;
        b = d%10;
        d = a+b;
        a = d%10;
        d = b*10+a;
        if (d==n)
        {
            printf("%d",c);
            break;
        }
        c++;
    }
}