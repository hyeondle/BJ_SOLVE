#include <stdio.h>

int main(void)
{
	int a,b=1,c,d[10];
	for (int i = 0;i<3;i++)
	{
		scanf("%d",&a);
		b = b * a;
	}
	for (int i = 0; i<10; i++)
		d[i]=0;
	for (int i = 0; b>10; b/=10)
	{
		c=b%10;
		d[c]++;
	}
	d[b]++;
	for (int i = 0; i<10; i++)
		printf("%d\n",d[i]);
}