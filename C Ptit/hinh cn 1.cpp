#include <stdio.h>
int min (int a,int b)
{
	return	a < b ? a : b;
}
int main()
{
	int m,n;
	scanf("%d%d",&m,&n);
	for (int i = 1;i <= m;i++)
	{
		printf("%d",i);
		int count = i;
		for (int j = 1;j < n;j++ )
		{
			if(j <= n-i)
			{
				count++;
				printf("%d",count);
			} else 
			{
				int init = min(i - 1,n - 1);
				while (j < n)
				{
					printf("%d",init--);
					j++;
				}
			}
		}
		printf("\n");
	}
}
