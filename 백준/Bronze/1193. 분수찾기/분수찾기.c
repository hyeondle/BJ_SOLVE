#include <stdio.h>

int main()
{
    int i,k;
    int sum = 0, count = 1;
    scanf("%d",&i);
    while(1)
    {
        sum = sum + count;
        if (i<=sum)
            break;
        count++; //n번째 줄
    }
    i = sum - i + 1;
    k = count + 1 - i;
    if (count % 2 == 1)
        printf("%d/%d",i,k);
    else
        printf("%d/%d",k,i);
}