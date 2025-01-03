#include <stdio.h>
int main ()
{   
	int a;
	scanf("%d",&a);
	if ( a <= 1000 && a > 0 && a % 7 == 0){
		printf("0 %d 0", a /7);
	} else if ( a > 0 && a <= 1000 && a % 7 != 0)
	{
		printf("%d %d %d",a/365,(a % 365)/7,(a % 365 ) % 7);
	} return 0;
	
}
