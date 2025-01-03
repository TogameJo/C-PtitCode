#include <stdio.h>
int giaithua(int n)
{
	int tich = 1;
	for (int i = 1;i <= n;i++)
	{
		tich *= i;
	} 
	return tich;
}
int main()
{
	int n,temp,sum = 0;
	scanf("%d",&n);
	temp = n;
	while (temp > 0)
	{
		int a = temp % 10;
     	sum += giaithua(a);
		temp /= 10;
	}	
	if (n == sum)
	{
		printf("1");
	} else printf("0");
}
