#include <stdio.h>

int main()
{
	int a, b;
    int max = 0;
	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a; i++)
	{
		if (a % i == 0)
		{
			if (b % i == 0)
				max = i;
		}
	}
	printf("%d\n%d", max, a*b/max);
}