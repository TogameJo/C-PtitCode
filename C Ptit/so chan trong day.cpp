#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	scanf("%d",&n);
	while (n--)
	{
		int a[100],b;
		scanf("%d",&b);
		for (int i=0;i < b;i++)
		{
			scanf("%d",&a[i]);
			
		}
		for (int i =0;i < b;i++)
		{
			if (a[i]%2==0)
			{
				printf("%d ",a[i]);
			}
		}
		printf("\n");\
	}
}
