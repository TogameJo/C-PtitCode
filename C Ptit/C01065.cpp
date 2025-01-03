#include <stdio.h>
#include <math.h>
#include <string.h>
int count[1000]={0};
int checksnt(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2;i <= sqrt(n);i++)
	{
		if ( n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[100];
	int x = 0;
	int dem = 0;
	while(n != 0)
	{
		int temp = n % 10;
		a[x] = temp;
		n /= 10;
		dem++;
		x++;
	}
	for (int i = dem-1;i >= 0;i--)
	{
		if (checksnt(a[i]))
		{
			count[a[i]]++;
		}
	}
	for (int i = dem-1;i >= 0;i--)
	{
		if (count[a[i]] > 0)
		{
			printf("%d %d\n",a[i],count[a[i]]);
			count[a[i]] = 0;
		}
	}
}
