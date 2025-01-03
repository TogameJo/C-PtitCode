#include <stdio.h>
#include <math.h>
int checksnt(int n)
{
	for (int i = 2;i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int n;
	int count = 1;
	scanf("%d",&n);
	for (int i = 2;count <= n;i++)
	{
		if (checksnt(i)==1)
		{
			printf("%d\n",i);
			count++;
		}
	}
}
