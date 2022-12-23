#include <stdio.h>

int main()
{
    int s;
    char a[101];
    int sum = 0;
    for (int i=0;i<101;i++)
        a[i] = '\0';
    scanf("%d", &s);
    scanf("%s", a);
    for (int i=0;i<s && a[i] != '\0';i++)
        sum = sum + a[i] - 48;
    printf("%d",sum);
}