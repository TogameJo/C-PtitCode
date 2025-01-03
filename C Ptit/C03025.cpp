#include <stdio.h>
#include <math.h>
int checksnt(int n)
{
	if(n < 2)
	{
		return 0;
	}
	for (int i = 2;i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}
int check1(int n)
{
	int sum = 0;
	while (n != 0)
	{
		int temp = n%10;
		sum += temp;
		n /= 10;
	}
	if (checksnt(sum))
	{
		return 1;
	}
	return 0;
}
int check2(int n)
{
	while(n != 0)
	{
		int temp = n%10;
		if (!checksnt(temp))
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int count = 0;
		for (int i = a;i <= b;i++)
		{
			if (check1(i) && checksnt(i) && check2(i))
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
}
