#include <stdio.h>
#include <math.h>
int check(int a)
{
	int temp1,temp2;
	while ( a != 0)
	{
		temp1 = a % 10;
		a /= 10;
		temp2 = a % 10;
		if (temp2 > temp1)
	{
		return 0;
	}
	} 
	return 1;
}
int main()
{
	int t;
	int n,a,b;
	scanf("%d",&t);
	while (t--)
	{
	scanf("%d",&n);
	a = pow(10,n-1);
	b = pow(10,n);
	for (int i = a;i < b;i++)
	{
		if (check(i))
		{
			printf("%d ",i);
		} 
	}
		printf("\n");
	}
}
