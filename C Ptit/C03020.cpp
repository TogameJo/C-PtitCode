#include <stdio.h>
int check(int n)
{
	int sum = 0;
	int somoi = 0;
	int temp = n;
	int count = 0;
	while(n > 0)
	{
		int k = n%10;
		if (k == 6)
		{
			count++;
		}
		somoi = somoi*10 + k;
		sum += k;
		n /= 10;
	}
	int cuoi = sum % 10;
	if (somoi == temp && count >= 1 && cuoi == 8)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	if (a > b)
	{
		int temp = b;
		b = a;
		a = temp;
	}
	for (int i = a;i <=b ;i++)
	{
		if (check(i))
		{
			printf("%d ",i);
		}
	}
}

