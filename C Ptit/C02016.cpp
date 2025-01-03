#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 1;i <= n;i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 2;j <= i*2;j += 2)
			{
				printf("%d",j);
			}
		}
		else 
		{
			for (int k = 1;k <= 2*i-1;k+=2)
			{
				printf("%d",k);
			}
		}
		printf("\n");
	}
}
