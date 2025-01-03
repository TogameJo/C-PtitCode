#include <stdio.h>
#include <math.h>
int main()
{
	int n,sodau,socuoi,temp;
	scanf("%d",&n);
	socuoi = n % 10;
	temp = n;
	int x = n;
	int somoi = 0;
	int dem = 0;
	while (n > 0)
	{
		n /= 10;
		dem++;
	} 
	int sodaumoi = socuoi * pow(10,dem-1);
	for (int i = 1;i < dem;i++)
	{
		temp /= 10;
	} 
	int b = temp * pow(10,dem-1);
	int socuoimoi = temp;
	somoi = sodaumoi + x - b - socuoi + socuoimoi;
	printf("%d",somoi);
}
