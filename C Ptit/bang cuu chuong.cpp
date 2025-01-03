#include <stdio.h>
int main ()
{
	int n,i=0;
	scanf("%d",&n);
	if ( n >= 1 && n <= 9)
	{   
	    int a[10];
	    while (i < 10)
	    {    
	        i++;
	    	a[i]= n * i;
	        printf("%d ", a[i]);
	        
		}
	} 
	return 0;
}
