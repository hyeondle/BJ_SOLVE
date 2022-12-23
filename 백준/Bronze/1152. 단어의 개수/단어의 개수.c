#include <stdio.h>
#include <string.h>

int main()
{
	char a[1000000];
	int count = 1;
	for (int i=0;i<1000001;i++)
		a[i] = '\0';
	scanf("%[^\n]s", a);
	if (a[0] == ' ' && a[1] == '\0')
	{
		printf("0");
		return (0);
	}
	for (int i=1;i<strlen(a)-1;i++)
	{
		if (a[i] == ' ' && (a[i-1] != ' ' || a[i+1] != ' '))
			count++;
	}
	printf("%d", count);
}