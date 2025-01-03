#include <stdio.h>
int count[1000001] = {0};
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i = 0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		int max = -2e9-1;
		for (int i = 0;i <n;i++)
		{
			count[a[i]]++;
		}
		for (int i = 0;i<n;i++)
		{
			if (count[a[i]] >= max)
			{
				max = count[a[i]];
			}
		}
		for (int i = 0;i<n;i++)
		{
			while (max == count[a[i]])
			{
				printf("%d ",a[i]);
				count[a[i]] = 0;
			}
		}
		for (int i = 0;i<n;i++)
		{
			count[a[i]] = 0;
		}
		printf("\n");
	}
}
