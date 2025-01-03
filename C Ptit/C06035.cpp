#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		char a[200];
		gets(a);
		int left = 0;
		int right = strlen(a)-1;
		int check = 0;
			while (left < right)
			{
				if (a[left] != a[right])
				{
				    check = 0;	
			    }
			    else 
			    {
			    	check = 1;
				}
				left++;
					right--;
			}
			if (check == 1)
			{
				printf("YES\n");
			}else printf("NO\n");
	}
}
