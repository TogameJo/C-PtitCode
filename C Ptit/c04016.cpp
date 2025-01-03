#include <stdio.h>
#include <math.h>
int count[1000001];
int checksnt(int n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2;i<=sqrt(n);i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int t ;
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
		printf("Test %d: \n",i);
		for (int i = 0;i<n;i++)
		{
			if (checksnt(a[i]))
			{
				count[a[i]]++;
			}
		}
		for (int i = 0;i<n;i++)
		{
			while (count[a[i]] != 0)
			{
				printf("%d xuat hien %d lan\n",a[i],count[a[i]]);
				count[a[i]] = 0;
			}
		}
	}
}
