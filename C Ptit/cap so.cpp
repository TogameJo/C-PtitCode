#include <stdio.h>
int UCLN(int a,int b)
{
	while (a != b)
	{
		if (a > b)
		{
			a -= b;
		} else if (a < b)
		{
			b -= a;
		}
	}
	return a;
}
int main()
{
	int t;
	int a,b,c,d;
	scanf("%d",&t);
	while (t--)
	{
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (UCLN(a,b) == UCLN(c,d))
	{
		printf("YES\n");
	} else printf("NO\n");
}
}
