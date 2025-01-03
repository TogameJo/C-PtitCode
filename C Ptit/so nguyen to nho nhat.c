#include <stdio.h>
#include <math.h>
int songuyento(int n)
{
	for (int i=2;i <= sqrt(n);i++)
	{
		if (n %i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int m;
	scanf("%d",&m);
	for (int j = 2;j <= m;j++)
	{
		if (songuyento(j) == 1)
		{
			printf("%d\n",j);
		}
	}
}