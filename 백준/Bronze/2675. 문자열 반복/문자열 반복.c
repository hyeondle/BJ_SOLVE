#include <stdio.h>
#include <stdlib.h>

char *ms(int j, char *s)
{
    char *r;
    r = (char *)malloc(sizeof(char) * 161);
    int q = 0;
    int l = 0;
    for (int i=0;i<161;i++)
        r[i] = '\0';
    while (s[l] != '\0')
    {
        for (int i = 0; i<j; i++)
        {
            r[q] = s[l];
            q++;
        }
        l++;
    }
    return r;
}

int main()
{
    char s[21];
    char *n;
    int t;
    int repeat;
    for (int i=0;i<21;i++)
        s[i] = '\0';
    scanf("%d", &t);
    for (int i=0;i<t;i++)
    {
        scanf("%d %s", &repeat, s);
        n = ms(repeat, s);
        printf("%s\n", n);
    }
}