#include <stdio.h>
#include <math.h>
//1234: tang 3 lan
//2341: tang 2 lan
//3421: tang 1 lan
//4321: tang 0 lan
// count = n-i
int min(int a,int b)
{
	return a < b ? a:b;
	//toan tu 3 ngoi tim so nho hon trong 2 so
}
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	for (int i=1;i <= m;i++)
	{
		printf("%d",i);
		for (int j = 1 ;j < n;j++)
		// duyet n - 1 so con lai
		{
			if (j <= n-i)
			{
				printf("%d",i+j);
			} else 
			{
			int init = min(i-1,n-1);
			while (j < n)
			{
				printf("%d",init--);
				j++;
			}
			}
		}
		printf("\n");
	}
}
