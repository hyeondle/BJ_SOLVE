#include <stdio.h>
#include <string.h>

int findmax(a,b,c,d)
{
	if (a<=b && a<=c && a<=d)
		return(a);
	else if (b<=a&&b<=c&&b<=d)
		return(b);
	else if (c<=a&&c<=b&&c<=d)
		return(c);
	else
		return(d);
}

int main()
{
	int x,y,w,h;
	int lx,rx,ty,by;

	scanf("%d %d %d %d", &x,&y,&w,&h);
	lx = x;
	rx = w-x;
	ty = h-y;
	by = y;
	printf("%d", findmax(lx,rx,ty,by));
}