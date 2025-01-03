#include <stdio.h>
int main()
{
	int n,a,b;
	scanf("%d",&n);
	int countc = 0;
	int countl = 0;
	if (n <= 999999999)
	{
		while (n > 0)
		{
			int a= n % 10;
			if (a % 2 == 0)
			{
				countc += 1;
			} else {
				countl += 1;
			}
			n = n/10;
		}
	} printf("%d %d",countl,countc);
	return 0;
}
