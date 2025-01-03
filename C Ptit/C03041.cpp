#include <stdio.h>
#include <math.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int  dai = abs(c-a);
	int rong = abs(d-b);
    if (dai == rong)
	{
		printf("YES\n");
		}	else printf("NO\n");
    }
}   
