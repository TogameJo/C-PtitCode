#include <stdio.h>
#include <math.h>
long long checkstn(long long n)
{
	long long somoi = 0;
	long long a = n;
	while(n != 0)
	{
		somoi = somoi*10 + n%10;
		n /= 10;
	}
	return (a == somoi);
}
int chiahet(int n)
{
	int sum = 0;
	int temp ;
	while (n != 0)
	{
		temp = n % 10;
		sum += temp;
		n /= 10;
	}
	if ( sum % 10 == 0)
	{
		return 1;
	}
	return 0;
}
int sobon(int n)
{
	int temp;
	while(n != 0)
	{
		temp = n % 10;
		n /= 10;
		if (temp == 4)
	{
		return 0;
	}
	}
	return 1;
}
int main()
{
	int t;
	int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int x = pow(10,n-1);
		int y = pow(10,n);
		for (int i=x;i<=y;i++)
		{
			if (sobon(i) && checkstn(i) && chiahet(i))
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
