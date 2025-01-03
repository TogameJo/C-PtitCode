#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
		while (n--)
		{
			long long a,b;
			scanf("%lld%ldd",&a,&b);
			long long bc = a*b;
			if (a > 0 && b > 0)
			{
			while (a != b)
			{
				if (a > b)
				{
					a = a - b;
				} else 
				{
					b = b - a;
				}
			}
			}
			else 
			{
				return 0;
			}
			printf("%lld %lld\n",bc/a,a);
}
}
