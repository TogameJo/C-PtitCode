#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 1;i <= n;i++)
	{
		int h = i;
		if (i % 2 ==0)
		{
			for (int j = i;j > 0;j--)
			{
				printf("%d",j+1);
			}
		}else 
		{
			for (int j = i;j <= n;j++)
			{
				printf("%d",j+1);
			}
		}
		printf("\n");
	}
}
