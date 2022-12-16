#include <stdio.h>

int main()
{
	int n,s,c;
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++)
		scanf("%d", &a[i]);
	scanf("%d",&s);
	c=0;
	for (int i = 0;i<n;i++)
	{
		if (a[i]==s)
			c++;
	}
	printf("%d",c);
}
