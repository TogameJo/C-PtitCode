#include <stdio.h>
#include <math.h>
void check(int n,int k,int mu)
{
	if (mu)
	{
		printf("* ");
	}
	printf("%d^%d ",n,k);
}
int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
		int n;
		int mu = 0;
		scanf("%d",&n);
		printf("%d = ",n);
		for (int i = 2;i <= sqrt(n);i++)
		{
			int sum = 0;
			while (n%i == 0)
			{
				sum++;
				n/=i;
			}
			if (sum > 0)
			{
				check(i,sum,mu);
				if (!mu)
				{
					mu = 1;
				}
			}
			
		}
		if (n > 1)
		{
			check(n,1,mu);
		}
		printf("\n");
	}
}
