#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	int a[t];
	for (int i = 0;i < t;i++)
	{
		scanf("%d",&a[i]);
	}
	long long sum = 0;
	for (int i = 0;i < t;i++)
	{
		for (int j = 2;j <= sqrt(a[i]);j++)
		{
			while (a[i] % j == 0)
			{
				sum += j;
				a[i] /= j;
			}
		}
		if (a[i] != 1)
		{
			sum += a[i];
		}
	}
	printf("%lld",sum);
}
