#include <stdio.h>
#include <math.h>
#include <string.h>
int checksnt(int n)
{
	for (int i = 2;i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int check(char a[])
{
	int n = strlen(a);
	for (int i = 0;i < (n-1)/2;i++)
	{
		if (a[i] != a[n-i-1])
		{
			return 0;
		}
	}
	for (int i = 0;i < n;i++)
	{

		if (!checksnt(a[i]-'0'))
		{
			return 0; 
		}
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[1000];
		scanf("%s",a);
		if(check(a))
		{
			printf("YES\n");
		}else printf("NO\n");
	}
}
