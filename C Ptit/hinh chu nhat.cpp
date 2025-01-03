#include <stdio.h>
int main()
{
	int cd,cr;
	scanf("%d %d",&cd,&cr);
	for (int i = 1;i <= cr;i++)
	{
		for (int j = 1; j <= cd;j++)
		{
			if (i == 1 || i == cr || j ==1 || j == cd)
			{
				printf("*");
			} else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
