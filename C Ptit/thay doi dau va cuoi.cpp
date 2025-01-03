#include <stdio.h>
#include <math.h>
int main()
{
	int n,sodau,socuoi,temp;
	scanf("%d",&n);
	socuoi = n % 10;
	temp = n;
	int dem = 0;
	int somoi = 0;
	int x = n;
	while (n > 0)
	{
		n /= 10;
		dem++;
	}
	int sodaumoi = socuoi*pow(10,dem-1);
	//printf("%d",sodaumoi);
	for (int i = 1;i < dem;i++)
	{
		temp /= 10;
	}
	int a = temp * pow(10,dem-1); 
	//printf("%d",a);
    somoi = sodaumoi + x - a - socuoi + temp;
    printf("%d",somoi);
	return 0;
}
