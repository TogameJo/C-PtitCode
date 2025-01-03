#include <stdio.h>
#include <math.h>
long long UCLN(long long a,long long b)
{
	
	while (a != 0)
	{
		long long temp = a;
		a = b % a;
		b = temp;
	}
	return b;
}
long long BCNN(long long a,long long b)
{
	return (a*b)/UCLN(a,b);
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		long long sum = 1;
		scanf("%d",&n);
		for (int i = n;i > 0;i--)
		{
			sum = BCNN(sum,i);
		}
		printf("%lld\n",sum);
	}
}
