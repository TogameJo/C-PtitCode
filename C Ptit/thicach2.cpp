#include <stdio.h>
int count[1000005]={0};
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n;
		scanf("%lld",&n);
		int a[10005];
		int x = 0;
		while(n != 0)
		{
			a[x] = n%10;
			x++;
			n /= 10;
		}
		for (int i = 0;i < x;i++)
		{
			count[a[i]]++;
		}
		for (int i = 0;i < x;i++)
		{
			if (a[i] == 0)
			{
				count[a[i]]--;
			}
		}
		int b[1005];
		int c = 0;
		for (int i = 0;i < x;i++)
		{
			if (count[a[i]] > 0)
			{
				b[c] = a[i];
				c++;
			}
		}
		for (int i = 0;i < c-1;i++)
		{
			for (int j = i+1;j < c;j++)
			{
				if (b[i] > b[j])
				{
					int temp = b[j];
					b[j] = b[i];
					b[i] = temp;
				}
			}
		}
		for (int k = 0;k < c;k++)
		{
			printf("%lld",b[k]);
		}
		printf("\n");
	}
}
