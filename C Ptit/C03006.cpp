#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	for (int i = 1;i <= t;i++)
	{
		int n;
		scanf("%d",&n);
		printf("Test %d: ",i);
		for (int i = 2;i <= sqrt(n);i++)
		{
			if (n % i == 0)
			{
				int count = 0;
				while (n % i == 0)
				{
					count++;
					n /= i;
				}
				printf("%d(%d) ",i,count);
			}
		}
		if (n > 1)
		{
			printf("%d(1)",n);
		}
		printf("\n");
	}
}
