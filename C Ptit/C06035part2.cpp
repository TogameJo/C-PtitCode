#include <stdio.h>
#include <string.h>
int check(char a[])
{
	int count = 0;
	int n = strlen(a);
	for (int i = 0;i <= (n-1)/2;i++)
	{
		if (a[i] != a[n-i-1])
		{
			count++;
		}
	}
	if ((n % 2 == 0 && count == 1) || (n % 2 != 0 && count <= 1))
	{
		return 1;
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[100];
		gets(a);
		if (check(a))
		{
			printf("YES\n");
		}else printf("NO\n");
	}
}
