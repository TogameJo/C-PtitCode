#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1;i <= n;i++)
	{
		int count = n-1;
		int x = i;
		for (int j = 1;j <= i;j++)
		{
			if (j == 1)
			{
				printf("%d ",i);
			}
			else if (j > 1)
			{
				printf("%d ",x+=count);
				count--;
			}
		}
		printf("\n");
	}
}
