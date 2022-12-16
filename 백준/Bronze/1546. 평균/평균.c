#include <stdio.h>

int main()
{
	int d;
	scanf("%d",&d);
	double a[d],f=0,s=0;
	for (int i = 0;i<d;i++)
		scanf("%lf",&a[i]);
	for (int i = 0;i<d;i++)
		if (f<a[i])
			f = a[i];
	for (int i = 0;i<d;i++)
		a[i] = a[i]/f*100;
	for (int i = 0;i<d;i++)
		s = s+a[i];
	printf("%lf",s/d);
}
