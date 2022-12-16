#include <stdio.h>
int main()
{
	int a;
	int b;
	int n1,n2,n3;
	
	scanf("%d",&a);
	scanf("%d",&b);
	n1 = b/100;
	n2 = (b%100)/10;
	n3 = b%10;
	printf("%d\n%d\n%d\n%d",a*n3,a*n2,a*n1,a*b);
}