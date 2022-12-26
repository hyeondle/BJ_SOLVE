#include <stdio.h>

int main()
{
    int i;
    int sum = 1, j = 0;
    int count = 1;
    scanf("%d",&i);
    while (1)
    {
        sum = sum + j * 6;
        if (i <= sum)
            break;
        count++;
        j++;
    }
    printf("%d",count);
}

