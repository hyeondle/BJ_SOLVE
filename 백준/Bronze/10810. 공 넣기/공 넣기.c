#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b, f = 0;
    scanf("%d %d",&a,&b);
    int *c = (int *)malloc(sizeof(int) * a);
    while (f != a)
    {
        c[f] = 0;
        f++;
    }
    int i,j,k;
    while(b>0)
    {
        scanf("%d %d %d", &i, &j, &k);
        while(j-i >= 0)
        {
            c[j-1] = k;
            j--;
        }
        b--;
    }
    b = 0;
    while(a != b)
    {
        printf("%d ", c[b]);
        b++;
    }
}