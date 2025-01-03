#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a=1;
	int b =1;
	while (n > a)
	{
		int m = a;
		a += b;
		b = m;
	}
	if (n == a)
	{
		printf("1");
	} else 
	{
		printf("0");
	}
}
