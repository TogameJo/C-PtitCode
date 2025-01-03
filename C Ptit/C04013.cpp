#include <stdio.h>
int count [1000001];
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
	for (int i = 0;i<n;i++)
	{
		count[a[i]]++;
	}
	for (int i = 0;i<n;i++)
	{
		if (count[a[i]] == 1)
		{
			dem++;
		}
	}
	printf("%d\n",dem);
	for (int i = 0;i<n;i++)
	{
		if (count[a[i]] == 1)
		{
			printf("%d ",a[i]);
		}
	}
}
