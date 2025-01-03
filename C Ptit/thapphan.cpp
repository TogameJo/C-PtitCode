#include <stdio.h>
int main ()
{
	int a,b;
	scanf("%d",&a);
	for (int i = 1; i <= a; i++)
	{
		scanf("%d",&b);
		double c = (double)1/b;
		printf("%.15lf\n",c);
	}return 0;
}
