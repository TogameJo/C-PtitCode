#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0;i<n-1;i++)
	{
		for (int j = i+1;j<n;j++)
		{
			if (a[i] > a[j])
			{
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	int min = 2e9+1;
	int k;
	for (int i = 0;i<n-1;i++)
	{
		for (int j = i+1;j<n;j++)
		{
			k = abs(a[i]-a[j]);
			if (k <= min)
			{
				min = k; 
			}
		}
	}
	
	printf("%d",min);
}
