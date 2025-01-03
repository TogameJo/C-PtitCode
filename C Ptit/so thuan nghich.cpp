#include <stdio.h>
int main()
{
	long long a;
	long long temp= 0;
	scanf("%lld",&a);
	while (a > 0)
	{
		temp =temp * 10 + a%10;
		a = a/10;
	}
	printf("%lld",temp);
}
