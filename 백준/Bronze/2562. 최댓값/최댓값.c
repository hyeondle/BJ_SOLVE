#include <stdio.h>

int main()
{
	int n,d=0,c;
	for (int i = 0;i<9;i++)
	{
		scanf("%d",&n);
		if (d<n)
		{
			d = n;
			c = i+1;
		}
	}
	printf("%d\n%d",d,c);
}
