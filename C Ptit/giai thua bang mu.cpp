#include <stdio.h>
#include <math.h>
int main()
{
	int n,k,b;
	int fact=1;
    scanf("%d %d",&n,&k);
    if (n >= 1 && k <= 100)
    {
    for (int i = 1;i <= n;i++)
    {
    	fact *= i;
	}
	long long c=pow(2,k);
	if (fact % c == 0)
	{
		printf("Yes");
	}else printf("No");
}
	return 0;
}
