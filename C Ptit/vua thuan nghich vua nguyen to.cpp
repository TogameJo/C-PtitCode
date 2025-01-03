#include <stdio.h>
#include <math.h>
int checksnt(long long a)
{
	for (int i = 2 ; i <= sqrt(a);i++)
	{
		if (a % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int checkstn(long long b)
{
	int temp;
	int x = b;
	while (b > 0)
	{
		int temp = temp * 10 + b%10;
		b /= 10;
	}
	if (temp == x)
	{
		return 1;
	} else 
	return 0;
}
int main()
{
	int n,m,t;
	scanf("%d %d",&n,&m);
	while (t--)
	{
		int count = 0;
		for (int i = m;i <= n;i++)
		{
			if (checksnt(i) && checkstn(i))
			{
				if (count != 0 && count % 10 == 0)
				{
					printf("\n");
				}
				printf("%d",i);
				count++;
			}
		}
	}
}

