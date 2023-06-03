#include <stdio.h>
int main(void)
{
	int arr[101];
	int t;
	int c = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] == 1)
			continue;
		for (int j = 2; j < arr[i]; j++)
		{
			if (arr[i] % j == 0)
			{
				c--;
				break;
			}
		}
		c++;
	}
	printf("%d", c);
}