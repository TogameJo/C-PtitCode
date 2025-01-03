#include <stdio.h>
int count[1000001];
int count1[1000001];
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int dem = 0;
	int temp;
	for (int i = 0;i<n;i++)
	{
		count[a[i]]++;
		temp = count[a[i]];
	}
	for (int i = 0;i<n;i++)
	{
		if (count[a[i]] > 1)
		{
			dem++;
			count[a[i]] = 1;
		}
	}
	printf("%d\n",dem);
	for (int i = 0;i<n;i++)
	{
		count1[a[i]]++;
	}
	for (int i = 0;i<n;i++)
	{
		while (count1[a[i]] > 1)
		{
			printf("%d ",a[i]);
			count1[a[i]] = 1;
		}
	}
}
