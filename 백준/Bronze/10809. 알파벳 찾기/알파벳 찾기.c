#include <stdio.h>

int wa(char *a, int b)
{
    int num = b+97;
    for (int i = 0;i<101;i++)
    {
        if (a[i] == '\0')
            return -1;
        else if (a[i] == num)
            return i;
    }
    return -1;
}

int main()
{
    char a[101];
    int sum = 0;
    for (int i=0;i<101;i++)
        a[i] = '\0';
    scanf("%s", a);
    for (int i=0;i<26;i++)
        printf("%d ", wa(a, i));
}