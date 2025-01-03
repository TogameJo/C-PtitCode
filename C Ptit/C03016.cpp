#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%lld",&n);
		int f1 = 0;
	    int f2 = 1;
	    while(n > f2)
	    {
	    	int f = f1 + f2;
	    	f1 = f2;
	    	f2 = f;
		}
		if (n == f2)
		{
			printf("YES\n");
		}else printf("NO\n");
	}
}
