#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char find(char *arr,int n)
{
	char alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int num[26];
	int big = 0;
	int l = 0;
	int count = 0;
	for (int i=0;i<26;i++)
	{
		count = 0;
		for(int j=0;j<n;j++)
		{
			if (arr[j] == alpha[i])
				count++;
		}
		num[i] = count;
	}
	for (int i=0;i<26;i++)
	{
		if (num[i] > big)
		{
			big = num[i];
			l = i;
		}
	}
	big=0;
	for (int i=0;i<26;i++)
	{
		if (num[i] == num[l])
			big++;
	}
	if (big > 1)
		return '?';
	else
		return alpha[l];
}
int main()
{
	char n[1000001], *a;
	char res;
	int num;
	for (int i=0;i<1000002;i++)
		n[i] = '\0';
	scanf("%s", n);
	num = strlen(n);
	a = (char *)malloc(sizeof(char) * (num + 1));
	for (int i=0;i<num;i++)
		a[i] = toupper(n[i]);
	a[num+1] = '\0';
	res = find(a, num);
	printf("%c", res);
}