#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,n;
	scanf("%d",&a);
	while(a--)
	{
	   scanf("%d",&n);
	   if (n < 2)
	   {
	   	printf("NO");
	   } else 
	   {
	   	  int check = 1;
	   	  for (int i= 2; i <= sqrt(n);i++)
	   	  {
	   	  	if (n % i == 0)
	   	  	{
	   	  		check = 0;
	   	  		break;
				 }
			 } if (check == 1)
			 {
			 	printf("YES\n");
			 } else 
			 {
			 	printf("NO\n");
			 }
	   }
	    
	}
	return 0;
}
