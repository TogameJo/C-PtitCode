#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int  a[n];
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0;i < n-1;i++)
	{
		int temp = i;
		for (int j = i+1;j < n;j++)
		{
			if (a[temp] > a[j])
			{
				temp = j;
			}
		}
		int s = a[temp];
			a[temp] = a[i];
			a[i] = s;
		for (int k = 0;k < n;k++)
		{
			printf("%d ",a[k]);
		}
		printf("\n");
	}
}
