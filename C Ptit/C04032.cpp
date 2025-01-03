#include <stdio.h>
long long count[1000005]={0};

long long check(long long n)
{
	int temp1,temp2;
	while (n != 0)
	{
		temp1 = n%10;
		n /= 10;
		temp2 = n%10;
		if (temp1 < temp2)
	{
		return 0;
	}
	}
	return 1;
}
int main()
{
	long long n;
	long long a[1005];
	while(scanf("%d",&a[n]) != -1)
	{
		n++;
		char c = getchar();
		if (c == '\n')
		{
			break;
		}
	}
	for (int i = 0;i < n;i++)
	{
		if (check(a[i]))
		{
			count[a[i]]++;
		}
	}
	for (int i = 0;i < n;i++)
	{
		if (count[a[i]] > 0)
		{
			printf("%lld %lld\n",a[i],count[a[i]]);
			count[a[i]] = 0;
		}
	}
}
