#include <stdio.h>

int dn(int a)
{
    int res, chun, baek, sip, il;
    
    chun = a/1000;
    baek = (a%1000)/100;
    sip = (a%100)/10;
    il = a%10;

    res = a + chun + baek + sip + il;
    return res;
}

int main(void)
{
    int flag;
    int dns;

    for (int i=1;i<10001;i++)
    {
        flag = 0;
        for (int j=1;j<10001;j++)
        {
            dns = dn(j);
            if (i == dns)
                flag = 1;
        }
        if (flag != 1)
            printf("%d\n", i);
    }
}