#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for (int i = 1;i <= t;i++)
	{
		int n;
		scanf("%d",&n);
		int a[n],b[n];
		for (int i = 0;i < n;i++)
		{
			scanf("%d",&a[i]);
		}
		for (int i = 0;i < n;i++)
		{
			scanf("%d",&b[i]);
		}
		int tempa,tempb;
		for (int i = 0;i < n-1;i++)
		{
			for (int j = i+1;j < n;j++)
			{
				if (a[i] > a[j])
				{
					tempa = a[j];
					a[j] = a[i];
					a[i] = tempa;
				}
			}
		}
		for (int i = 0;i < n-1;i++)
		{
			for (int j = i+1;j < n;j++)
			{
				if (b[i] < b[j])
				{
					tempb = b[j];
					b[j] = b[i];
					b[i] = tempb;
				}
			}
		}
		int count[1000];
		int a1 = 0;
		int b1 = 0;
		printf("Test %d: \n",i);
		for (int i = 0;i < 2*n;i++)
		{
			if (i % 2 == 0)
			{
				count[i] = a[a1];
				a1++;
			}else
			{
				count[i] = b[b1];
				b1++;
			}
		}
		for (int i = 0;i < 2*n;i++)
		{
			printf("%d ",count[i]);
		}
		printf("\n");
	}
}
