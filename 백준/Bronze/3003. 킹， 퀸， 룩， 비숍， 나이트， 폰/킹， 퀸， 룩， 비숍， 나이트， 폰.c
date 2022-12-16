#include <stdio.h>
int main()
{
	int K,Q,R,B,k,P;
	scanf("%d %d %d %d %d %d",&K,&Q,&R,&B,&k,&P);
	printf("%d %d %d %d %d %d", 1-K,1-Q,2-R,2-B,2-k,8-P);
}