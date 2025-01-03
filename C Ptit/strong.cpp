#include <stdio.h>
int strong(int a)
{
	int sum = 0;
	int n = a;
	while (a != 0)
	{
		int gt = 1;
		int temp = a % 10;
		for (int i = 1;i <= temp;i++)
		{
			gt *= i;
		} 
		sum += gt;
		a /= 10;
	}
	if (sum == n)
	{
		printf("%d ",n);
	}else return 0; 
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (a > b)
	{
		for (int i=b;i <=a;i++ )
		{
			strong (i);
		}
	} else if (b > a)
	{
		for (int i = a;i<= b;i++)
		{
			strong(i);
		}
	}
}
