#include <stdio.h>

int main()
{
	int n,max = -1000000,min = 1000000;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	for (int i=0;i<n;i++)
	{
		if (min>a[i])
			min = a[i];
		if (max<a[i])
			max = a[i];
	}
	printf("%d %d",min,max);
}
