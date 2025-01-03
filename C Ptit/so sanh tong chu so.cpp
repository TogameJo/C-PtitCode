#include <stdio.h>
int check(int a)
{
	int x,y;
	int sum = 0;
	while (a != 0)
	{
		x = a % 10;
		sum = sum + x;
		a /= 10;
	}
	return sum;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (check(a) > check(b))
	{
		printf("%d %d",b,a);
	}else if (check(a) <= check(b))
	{
		printf("%d %d",a,b);
	}
}
