#include <stdio.h>
#include <math.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int c1 = sqrt(a);
	int c2 = sqrt(b);
	if (c1*c1 != a)
	++c1;
	printf("%d\n",c2-c1+1);
	for (int i = a; i <= b;i++)
	{
		
		int c = sqrt(i);
	 	if (i == pow(c,2))
	 	{
	 		printf("%d\n",i);
		 }
	}
	return 0;
}
