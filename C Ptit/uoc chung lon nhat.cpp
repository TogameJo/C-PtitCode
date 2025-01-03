#include <stdio.h>
int main()
{
	int a,b,n;
	scanf("%d",&n);
	for (int i = 1; i <= n;i++)
	{
		scanf("%d %d",&a,&b);
		//euclid
		while (b != 0)
		{
			int check = a % b;
			a = b;
			b = check;
		}
		printf("%d\n",a);
	}
	return 0;;
}
