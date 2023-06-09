#include <stdio.h>
#include <string.h>

int main(void)
{
	int t,sum;
	scanf("%d %d",&t,&sum);
	int tab[t];
	for (int i=0;i<t;i++){scanf("%d",&tab[i]);}
	int temp;
	int max = 0;
	for (int i=0;i<t-2;i++)
	{
		for (int j=i+1;j<t-1;j++)
		{
			for (int k=j+1;k<t;k++)
			{
				temp=tab[i]+tab[j]+tab[k];
				if (temp>max && temp<=sum){max=temp;}
			}
		}
	}
	printf("%d",max);
}