#include <stdio.h>
int check(int n)
{
	int k = -1;
    while (n != 0)
    {
        int x = n % 10;
        if (x <= k)
            return 0;
        k = x;
        n /= 10;
    }
    return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		int count = 0;
		if (a > b)
		{
			for (int i =b;i<=a;i++)
			{
				if (check(i))
				{
					count++;
				}
			}
		} else if (a < b)
		{
			for (int i=a;i<=b;i++)
			{
				if (check(i))
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}

