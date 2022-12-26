#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    int count;

    scanf("%s", a);
    count = strlen(a);
    for (int i=0;a[i];i++)
    {
        if (a[i] == '=' || a[i] == '-')
            count--;
        else if (a[i] == 'l' || a[i] == 'n')
        {
            if (a[i+1] == 'j')
                count--;
        }
        else if (a[i] == 'd')
        {
            if (a[i+1] == 'z' && a[i+2] == '=')
                count--;
        }
    }
    printf("%d",count);
}