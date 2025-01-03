#include <stdio.h>
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	for (int i = 1;i <= x;i++)
	{
		for (int j=1;j <= (y+i)-1;j++)
		{
			if (j < i)
			{
				printf("~");
			}else if (i == 1 || i == x || i == j || j == (y+i)-1 )
			{
				printf("*");
			} else printf(".");
		}
		printf("\n");
	}
}
