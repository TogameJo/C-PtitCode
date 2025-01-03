#include <stdio.h>
#include <math.h>
int main()
{
	int m,n;
	scanf("%d",&m);
	while (m--)
	{
		scanf("%d",&n);
		for (int i = 2;i < sqrt(n);i++)
		{
			while(n > 1){	
			if (n % i == 0)
			{
				printf("%d ",i);
				n /= i;
			} else 
			i++;
		}
		}
		printf("\n");
	}
	return 0;
}
