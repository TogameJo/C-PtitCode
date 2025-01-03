#include<stdio.h>
int main()
{
	int a,b,m;
	scanf("%d",&m);
	while (m--)
	{
		long long n;
		int check = 1;
		scanf("%lld",&n);
		a = n % 10;
			n = n /10;
		while (n > 0)
		{
			b = n % 10;
			n /= 10;
			if ( a < b)
			{
				check = 0;
				break;
			}
			a = b;
		}
		if (check == 1)
		{
			printf("YES\n");
		} else 
		{
			printf("NO\n");
		}
	}
	return 0;
}
