#include <stdio.h>
int check(int a[],int n)
{
	int countc = 0;
	int countl = 0;
	for (int i = 0;i < n;i++)
	{
		if (a[i] % 2 == 0)
		{
			countc++;
		}else 
		{
			countl++;
		}
	}
	if (n % 2 == 0 && countc > countl)
	{
		return 1;
	}
	if (n % 2 != 0 && countc < countl)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n = 0;
		int a[10005] = {0};
		while(scanf("%d",&a[n]) != -1)
		{
			n++;
			char c;
			c = getchar();
			if (c == '\n')
			{
				break;
			}
		}
		if (check(a,n))
		{
			printf("YES\n");
		}else printf("NO\n");
	}
}
