#include <stdio.h>
int main ()
{
	double c;
	scanf("%lf",&c);
	if (c <= 100)
	{  
	    double f =(double)(c * 9 / 5) + 32;
		printf("%.2lf",f);
	} return 0;
}
