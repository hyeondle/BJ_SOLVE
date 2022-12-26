#include <stdio.h>

int main()
{
    int a,b,v,t,d;
    t = 0;
    scanf("%d %d %d",&a,&b,&v);
    if ((v-a)%(a-b) > 0)
        t = 1;
    printf("%d", (v-a)/(a-b) + t + 1);
}
