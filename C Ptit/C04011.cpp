#include <stdio.h>
/*int main()
{
	int t;
	scanf("%d",&t);
	while (t--)
	{
	int n;
	scanf("%d",&n);
	int a[n];
	if (n >= 2 && n <= 50)
	{
	for (int i = 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int count = 1;
	int check = 1;
	for (int i = 0;i<n;i++)
	{
		if (a[i] > 0)
		{
		for (int j =0;j<i;j++)
		{
			if (a[i] < a[j] )
			{
				check = 0;
				break;
			}
		}
	}
		if (check == 1)
		{
			count++;
		}
	}
			printf("%d",count);
}
}
}
*/
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,a;
		int count = 0;
		int max = -2e9-1;
		scanf("%d",&n);
		for (int i = 1;i<=n;i++)
		{
			scanf("%d",&a);
			if (a > max)
			{
				count++;
				max = a;
				
			}
		}
		printf("%d\n ",count);
	}
}
