#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,n;
	scanf("%d",&a);
	for (int i = 1; i <= a;i++)
	{
		scanf("%d",&b);
		int n=sqrt(b);
		if (b == pow(n,2) )
		{
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}
