#include <stdio.h>
#include <string.h>

int rev(int n)
{
	int a,b,c;
	a = n/100;
	b = (n%100)/10;
	c = n%10;
	return c*100+b*10+a;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	a = rev(a);
	b = rev(b);
	if (a>b)
		printf("%d",a);
	else
		printf("%d",b);
}