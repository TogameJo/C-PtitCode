#include <stdio.h>
#include <math.h>
int check(int n)
{
	int temp = n;
	int somoi = 0;
	int count = 0;
	while (n > 0)
	{
		int k=n%10;
		if (k == 9)
		{
			count++;
		}
		somoi = somoi*10 + k; 
		n /= 10;
	}
	if (count == 0 && somoi == temp)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	int p = pow(10,4);
	if (n >= 1 && n <= p)
	{
		int count = 0;
		for (int i = 2;i <= n;i++)
		{
			if (check(i))
			{
				printf("%d ",i);
				count++;
			}
		}
		printf("\n%d",count);
	}
}
