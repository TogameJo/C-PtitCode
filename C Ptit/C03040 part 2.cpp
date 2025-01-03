#include <stdio.h>
#include <math.h>
int tongcacso(int n)
{
	int sum = 0;
	while(n != 0)
	{
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int thuasont(int n)
{
	int sum = 0;
	for (int i = 2;i<=sqrt(n);i++)
	{
		while (n % i == 0)
		{
			sum += tongcacso(i);
			n /= i;
		}
	}
	if (n > 1)
	{
		sum += tongcacso(n);
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d",&n);
	if (tongcacso(n) == thuasont(n))
	{
		printf("YES");
	}
	else printf("NO");
}
