#include <stdio.h>
#include <math.h>
long long ucln(long long a,long long b)
{
	if (a == 0 || b == 0)
	{
		return a + b;
	
	}
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		} else 
		{
			b -= a;
		}
		return a;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	if (1 <= n && n <= 100)
	{
	while (n--)
	{
		long long a,b;
		scanf("%lld%lld",&a,&b);
	    printf("%lld %lld\n",(a*b)/ucln(a,b),ucln(a,b));
	}
}
}
