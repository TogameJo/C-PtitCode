#include <stdio.h>
#include <math.h>
long long checksnt(long long n)
{
	for (int i = 2;i<= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
void check(long long n)
{
	int count[10]={0};
	int temp;
	while (n != 0)
	{
		temp = n % 10;
		if (checksnt(temp));
		{
			count[temp]++;
		}
		n /= 10;
	}
	for (int i = 2;i < 10;i++)
	{
		if (checksnt(i) && count[i] > 0)
		{
			printf("%d %d\n",i,count[i]);
		}
	}
}
int main()
{
	long long n;
	scanf("%lld",&n);
	check(n);
}
