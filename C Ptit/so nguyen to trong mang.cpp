#include <stdio.h>
#include <math.h>
int checksnt(int n)
{
	if (n < 2)
	return 0;
	for (int i=2;i <= sqrt(n);i++)
	{
		if (n % i == 0)
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
	while (t--)
	{
		int a[100],n;
		scanf("%d",&n);
		for (int i=0;i < n;i++)
		{
			scanf("%d",&a[i]);
		}
		for (int i=0; i < n;i++)
		{
			if (checksnt(a[i])==1)
			{
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
}