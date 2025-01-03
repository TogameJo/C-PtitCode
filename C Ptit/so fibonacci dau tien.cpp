#include <stdio.h>
int main()
{
	
	long long fn1=0;
	long long fn2 = 1;
	int n ;
	scanf("%d",&n);
	printf("0 1 ");
	for (int i = 3;i <= n;i++)
	{
		long long fn = fn1 + fn2;
		printf("%d ",fn);
		fn1=fn2;
		fn2=fn;
	}
}
