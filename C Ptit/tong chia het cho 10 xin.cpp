#include <stdio.h>
int tongchiahet(int n)
{
	int sum = 0;
	while (n>0)
	{
		sum += n%10;
		n /= 10;
	} if (sum % 10 == 0)
		return 1;
		 return 0;
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while (t--)
	{
		scanf("%d",&n);
		if (tongchiahet(n) == 1)
		{
			printf("YES\n");
		} else printf("NO\n");
	}
}
