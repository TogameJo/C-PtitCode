#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min2 = 0;
	int min1 = 2e9+1;
	for (int i = 0;i<n;i++)
	{
		if (a[i] < min1)
		{
			min1 = a[i];
		}
	}
	for (int i = 0;i<n;i++)
	{
		if (a[i] > min1 && a[i] != min1)
		{
			min2 = a[i];
		}
	}
	printf("%d %d",min1,min2);
}
