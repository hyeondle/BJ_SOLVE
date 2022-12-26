#include <stdio.h>
#include <string.h>

int main()
{
    char a[101];
    int count;
    int n, flag;
    scanf("%d", &n);
    count = n;
    for (int i=0;i<n;i++)
    {
        flag = 0;
        scanf("%s",a);
        for (int j=0;a[j];j++)
        {
            if (a[j+1] != a[j])
            {
                for (int k=j+1;a[k];k++)
                {
                    if (a[k] == a[j])
                    {
                        count--;
                        flag = 1;
                        break;
                    }
                }
            }
            if (flag == 1)
                break;
        }
    }
    printf("%d",count);
}