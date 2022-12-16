#include <stdio.h>
#include <math.h>

int main()
{
	int c,d,cased[1000],count=0;
	double per, avg=0;
	scanf("%d", &c);
	for (int i=0;i<c;i++)
	{
		scanf("%d", &d);
		for (int j=0;j<d;j++)
		{
			scanf("%d", &cased[j]);
			avg = avg + cased[j];
		}
		avg = avg/(double)d;
		for (int j=0;j<d;j++)
			if (cased[j]>avg)
				count++;
		per = round((double)count / (double)d * 100000) / 1000;
		printf("%.3lf%%\n", per);
		d = 0;
		avg = 0;
		count = 0;
	}
}