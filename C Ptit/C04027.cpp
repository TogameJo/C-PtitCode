#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i= 0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i = 0;i<n;i++)
	{
		int temp = i;
		for (int j = i+1;j <n;j++)
		
			if (a[temp] > a[j])
				temp = j;
			int k= a[temp];
			a[temp] = a[i];
			a[i] = k;
		
		printf("Buoc %d: ",i+1);
		for (int j = 0;j < n;i++)
		{
			printf("%d ",a[j]);
		}
		printf("\n");
	}
}
