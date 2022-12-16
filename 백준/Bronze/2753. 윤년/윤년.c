#include <stdio.h>
int main()
{
	int a;
	int t400, t100, t4;
	scanf("%d",&a);
	t400 = a%400;
	t100 = a%100;
	t4 = a%4;
	if (t400 == 0)
		printf("1");
	else if (t100 != 0 & t4 == 0)
		printf("1");
	else
		printf("0");
}