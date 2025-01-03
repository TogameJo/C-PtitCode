#include <stdio.h>
#include <math.h>
void test(int n)
{
		for (int i = 2; i < sqrt(n);i++)
		{
			while (n % i == 0)
			{
				printf("%d ",i);
				n /= i;
			} 
	}
	if (n != 1)
	{
		printf("%d\n",n);
	}
}
int main()
{
	int n,m;
	scanf("%d",&m);
	while (m--)
	{
		scanf("%d",&n);
		test (n);
	}
	return 0;
}
