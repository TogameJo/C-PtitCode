#include <stdio.h>
#include <math.h>
int check(int n )
{
	int temp = 0;
	int sum = 0;
	int x = n;
	while (n > 0)
	{
		int k = n % 10;
		temp = temp*10 + k;
	    sum += k;
		n /= 10;
	}
	if (x == temp && sum % 10 == 0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		int count = 0;
		scanf("%d",&n);
		int a = pow(10,n-1);
		int b = pow(10,n);
		for (int i = a;i<b;i++)
		{
			if (check(i))
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
}

