#include <stdio.h>

int main()
{
	int h,m;
	scanf("%d %d",&h,&m);
	if (h == 0 & m < 45)
		h = 24;
	printf("%d %d", (h*60+m-45)/60, (h*60+m-45)%60);
}