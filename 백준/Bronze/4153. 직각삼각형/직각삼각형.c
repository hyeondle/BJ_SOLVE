#include <stdio.h>

int main(void)
{
	int x,y,z;
	while(1)
	{
		scanf("%d %d %d", &x,&y,&z);
		if (x == 0 && y == 0 && z == 0)
			break;
		else
		{
			if ((z*z == x*x+y*y) || (y*y == x*x+z*z) || (x*x == y*y+z*z))
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
}