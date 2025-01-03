#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d",&a);
	for (int i=1 ;i <= a; i++)
	{
		scanf("%lld",&b);
		long long c =(long long)b * b;
		printf("%lld\n",c);
	} 
	return 0;
}
