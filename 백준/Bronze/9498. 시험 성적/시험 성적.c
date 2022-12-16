#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a>89)
		printf("A");
	else if (a>79 & a<90)
		printf("B");
	else if (a>69 & a<80)
		printf("C");
	else if (a>59 & a<70)
		printf("D");
	else
		printf("F");
}