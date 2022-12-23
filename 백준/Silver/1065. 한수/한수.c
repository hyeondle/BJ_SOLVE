#include <stdio.h>

int dn(int a)
{
    int res, chun, baek, sip, il;
    
    baek = (a%1000)/100;
    sip = (a%100)/10;
    il = a%10;

    if (a < 100)
        return 1;
    else
    {
        if (baek - sip == sip - il && a != 1000)
            return 1;
        else
            return 0;
    }

}

int main(void)
{
    int flag;
    int dns;
    int count = 0;

    scanf("%d", &dns);
    for (int i=1;i<dns+1;i++)
    {
        flag = dn(i);
        if (flag == 1)
            count++;
    }
    printf("%d",count);
}