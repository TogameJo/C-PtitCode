#include <stdio.h>
#include <math.h>

int checksnt(int a)
{
	if (a < 2)
	return 0;
	for (int i = 2 ; i <= sqrt(a);i++)
	{
		if (a % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int checkstn(int a)
{
	int nghichdao=0;
	int x = a;
	while (a > 0)
	{
	    nghichdao = nghichdao*10 + a%10;
		a /= 10;
	}
	return x == nghichdao;
}
int main()
{
	int n,m,t;
	scanf("%d",&t);
	while (t--)
	{
		int count=0;
		scanf("%d %d",&m,&n);
		for (int i = m;i <= n;i++)
		{
			if (checksnt(i) && checkstn(i))
			{
				printf("%d ",i);
		    	count++;
		    	if (count % 10 == 0)
		    	{
		    		printf("\n");
				}
			}
		}
		if (count % 10 != 0)
		{
		printf("\n");
	}
}
	return 0;
}
