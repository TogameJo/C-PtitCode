#include <stdio.h>
#include <math.h>
int checksnt1(int n)
{
	for (int i = 2;i <= sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}
int checksnt2(int n)
{
	int temp;
	while (n)
	{
		temp = n % 10;
		if (temp != 3 && temp != 2 && temp != 5 && temp != 7)
		{
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main()
{
	int a,b;
	int t;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d %d",&a,&b);
		int count = 0;
		for (int i=a;i <= b;i++)
		{
			if (checksnt1(i) && checksnt2(i))
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
	
}
