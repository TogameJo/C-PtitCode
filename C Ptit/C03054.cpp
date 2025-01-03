#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		int a[100];
		int temp;
		int x=0;
		int count = 0;
		while (n >= 0)
		{
			temp = n%10;
			a[x] = temp;
			x++;
			count++;
			n /= 10;
		}
		for (int i = 0;i < count;i++)
		{
			if (a[i] == 0 || a[i] == 8 || a[i] == 9)
			{
				a[i] = 0;
			}else if (a[i] == 1)
			{
				a[i] = 1;
			}
			else {
				printf("INVALID");
			}
				printf("%d",a[i]);
		}
	}
}
