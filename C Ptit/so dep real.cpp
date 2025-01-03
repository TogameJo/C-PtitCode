#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long m;
		scanf("%lld",&m);
		int count = 0;
		int n = 0;
		int a[100];
		while (m > 0)
		{
			int temp = m % 10;
			a[n]=temp;
			n++;
			count++;
			m /= 10;
		}
		int check = 0;
		for (int i = count-1;i >= 0;i--)
		{
			int left = count - 2;
			int right = 1;
			while (right < left)
			{
				if ((a[0] == 2*a[count-1] || 2*a[0] == a[count-1]) && (a[left] == a[right]))
			{
				check = 1;
			}else 
			{
				check = 0;
				break;
			}
			left--;
			right++;
			}
		}
		if (check == 1)
		{
			printf("YES\n");
		}else if (check == 0) printf("NO\n");
	}
}
