#include <stdio.h>
#include <stdlib.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int tong = 0;
	int i = 1;
	while (i <= n)
	{
		if ( i % 2 == 1)
		{
			tong = tong + i;
		}
		i++;
	} printf("%d",tong);
	system("pause");
	return 0;
}
