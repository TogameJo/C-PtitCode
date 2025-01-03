#include <stdio.h>
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
		int a,b;
		scanf("%d%d",&a,&b);
		long long s = 1;
		for (int i = a;i <= b;i++)
		{
			s = BCNN(s,i);
		}
		printf("%lld\n",s);
	}
}
