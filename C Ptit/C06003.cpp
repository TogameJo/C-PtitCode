#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char c[200];
		gets(c);
		int count = 1;
		// de dem so khoang trang truoc mot ki tu
		// vi ki tu dau tien luon la 1 tu nen count = 1
		for (int i = 0;i < strlen(c)-1;i++)
		{
			// loai bo ki tu NULL '\0'
			if (c[i] == ' ' && c[i+1] != ' ')
			{
				count++;
			}
		}
		printf("%d\n",count);
	}
}
