#include <stdio.h>
int main()
{
	int n;
	int a[10];
	int x = 0;
	int count = 0;
	scanf("%d",&n);
	if (n == 0)
	{
		printf("0");
	}
	while(n != 0)
	{
		int temp = n%2;
		a[x] = temp; 
		n /= 2;
		count++;
		x++;
	}
	for (int i = count - 1;i >= 0;i--)
	{
		printf("%d",a[i]);
	}
}

