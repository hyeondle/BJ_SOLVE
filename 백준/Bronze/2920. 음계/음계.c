#include <stdio.h>

int main(void)
{
	int tab[8];
	int score1 = 0, score2 = 0;
	for (int i=0;i<8;i++)
		scanf("%d",&tab[i]);
	for (int i=0;i<8;i++)
	{
		if (tab[i] == i + 1)
			score1++;
		else if (tab[i] == 8 - i)
			score2++;
	}
	if (score1 == 8)
		printf("ascending\n");
	else if (score2 == 8)
		printf("descending\n");
	else
		printf("mixed\n");
}