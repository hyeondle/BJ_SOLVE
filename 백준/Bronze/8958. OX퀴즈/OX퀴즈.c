#include <stdio.h>

int main()
{
	int d,s=0,combo=0;
	char p[81];
	scanf("%d", &d);
	for (int i=0;i<d;i++)
	{
		scanf("%s", p);
		for (int j=0;p[j]!=0;j++)
		{
			if (p[j]=='X')
			{
				combo=0;
				continue;
			}
			if (p[j]=='O')
			{
				if(combo==0)
					s=s+1;
				else if (combo>0)
					s=s+1+combo;
				combo++;
			}
		}
		printf("%d\n", s);
		s=0;
		combo=0;
		for (int j=0;j<81;j++)
			p[j] = 0;
	}
}