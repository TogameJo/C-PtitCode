#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	while (n--)
	{
		int m;
		scanf("%d",&m);
		int count = 0;
		for (int i = 1;i <= m;i++)
		{
			if (m % i ==0 && i % 2 == 0)
			{
				count++;
			} 
		}
		printf("%d\n",count);
	}
}
