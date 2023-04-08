#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dp[41];
int dp0[41];
int dp1[41];

void fibo(int n)
{
    if (n == 0)
    {
        dp[0] = 0;
        dp0[0] = 1;
        return;
    }

    if (n == 1)
    {
        dp[1] = 1;
        dp1[1] = 1;
        return;
    }

    if (dp[n] != 0)
        return;
    
    else
    {
        fibo(n - 1);
        fibo(n - 2);
        dp0[n] = dp0[n - 1] + dp0[n - 2];
        dp1[n] = dp1[n - 1] + dp1[n - 2];
		dp[n] = dp[n-1] + dp[n-2];
        return;
    }
}


int main()
{
    int testnum;
    scanf("%d", &testnum);
    int k;

	memset(dp, 0, sizeof(dp));
    memset(dp0, 0, sizeof(dp0));
    memset(dp1, 0, sizeof(dp1));
    for (int i = 0; i < testnum; i++)
    {    
        scanf("%d", &k);
        fibo(k);
        printf("%d %d\n", dp0[k], dp1[k]);
    }

    return 0;
}