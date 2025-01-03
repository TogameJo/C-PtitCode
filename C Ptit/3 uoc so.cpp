#include <stdio.h>
#include <math.h>
int check(long long n)
{
	int count = 0;
	long long sqrt_n = (long long)sqrt(n);
	for(long long i = 1;i <= sqrt_n;i++)
	{
		if (n % i ==0)
		{
			count++;
			if (n / i != i)
			{
				count++;
			}
		}
	}
	return count;
	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long a,b;
		scanf("%lld %lld",&a,&b);
		int dem = 0;
		for(long long i=a;i<= b;i++)
		{
			int count = check(i);
			if (count == 3)
			{
				dem++;
			}
		}
		printf("%d\n",dem);
	}
	return 0;
}
