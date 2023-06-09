#include <stdio.h>
#include <string.h>

int main(void)
{
	int a,b,c,d,e;
	int num;
	scanf("%d",&num);
	while (num != 0)
	{
		e=num%10;
		d=(num%100-e)/10;
		c=(num%1000-d-e)/100;
		b=(num%10000-c-d-e)/1000;
		a=(num%100000-b-c-d-e)/10000;
		if (a==0 && b==0 && c == 0 &&d==0)
			printf("yes\n");
		else if (a==0 && b==0 && c==0 && d!=0)
		{
			if (d==e)
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (a==0 && b==0 && c != 0)
		{
			if (c==e)
				printf("yes\n");
			else
				printf("no\n");
		}
		else if (a==0 && b!=0)
		{
			if (b==e && c==d)
				printf("yes\n");
			else
			 	printf("no\n");
		}
		else {
			if (a==e && b==d)
				printf("yes\n");
			else
			 	printf("no\n");
		}
		scanf("%d",&num);
	}
}