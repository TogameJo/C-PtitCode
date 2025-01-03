#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	for (int j = 1;j <= t;j++)
	{
	int m,n,p;
	scanf("%d %d %d",&m,&n,&p);
	int a[m],b[n];
	for (int i = 0;i < m;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0;i < n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Test %d: \n",j);
	for (int i = 0;i < p;i++)
	{
		printf("%d ",a[i]);
	}
	for (int i = 0;i < n;i++)
	{
		printf("%d ",b[i]);
	}
	for (int i = p;i < m;i++)	
	{
        printf("%d ",a[i]);
	}
	printf("\n");
}
}
