#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int a[100];
		for (int i = 0;i < n;i++)
		{
			scanf("%d",&a[i]);
		}
		int check = 1;
		for (int i = 0;i < n;i++)
		{
			if (a[i] != a[n-i-1])
			{
				check = 1;
			}else check = 0;
		}
		if (check == 0)
		{
			printf("YES\n");
		}else printf("NO\n");
	}
}
