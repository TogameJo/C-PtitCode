#include <stdio.h>
int count[1000001];
int main()
{
	int t;
	scanf("%d",&t);
	for (int i = 1;i<= t;i++)
	{
		int n;
		scanf("%d",&n);
		int a[n];
		for (int i = 0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("Test %d: \n",i);
		for (int i = 0;i<n;i++)
		{
			count[a[i]]++;
		}
		for (int i = 0;i<n;i++)
		{
			if (count[a[i]] != 0)
			{
				printf("%d xuat hien %d lan\n",a[i],count[a[i]]);
				count[a[i]] = 0;
			}
		}
	}
}
