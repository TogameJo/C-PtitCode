#include <stdio.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	int sum = 0;
	while (t--)
	{
		scanf("%d",&n);
		while (n > 0)
		{
			sum += n%10;
			n /= 10;
		} if (sum % 10 == 0)
		{
			printf("YES\n");
		} else printf("NO\n");
	}
}
