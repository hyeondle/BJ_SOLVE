#include <stdio.h>

int main()
{
	int h,m,t,s;
	scanf("%d %d",&h,&m);
	scanf("%d", &t);
    s = (h*60+m+t);
    if ((h*60+m+t)/60 > 23)
        s = (h*60+m+t)-1440;
	printf("%d %d", s/60, s%60);
    return 0;
}
