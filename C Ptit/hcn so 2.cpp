#include <stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	for (int i = 1;i <= m;i++)
	{
		int temp = i;
		for (int j = 1; j <= n;j++)
		{
			if (j <= n-i)
			{
				printf("%d",temp++);
			} else
			{
				printf("%d",temp--);
			}
		}
		printf("\n");
	} 
}
