#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i = 0;i < n;i++)
	{
		int count = 1;
		for (int j = 0;j < n;j++)
		{
			if (j > i)
			{
				printf("%d ",count);
				count++;
			}else printf("0 ");
		}
		printf("\n");
	}
}
