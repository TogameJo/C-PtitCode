#include <stdio.h>
int main()
{
	long long a,b;
	scanf("%lld%lld",&a,&b);
	long long bscnn = a*b;
	if (a > 0 && b > 0)
	{
	while (a != b)
	{
		if (a > b)
		{
			a = a-b;
		} else b -= a;
	}
}
else return 0;
	printf("%lld\n%lld",a,bscnn/a);
}
