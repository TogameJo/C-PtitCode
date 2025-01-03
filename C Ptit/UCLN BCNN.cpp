#include <stdio.h>

long long UCLN( long long a, long long b)
{
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		} else b -= a;
	}
}
int main()
{
    long long a,b;
	scanf("%lld%lld",&a,&b);
	printf("%lld\n%lld",UCLN(a,b),(a*b)/UCLN(a,b));
}
