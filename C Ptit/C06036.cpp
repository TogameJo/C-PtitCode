#include <stdio.h>
#include <string.h>
int main()
{
	char a[100005];
	gets(a);
	int n = strlen(a);
	printf("%d",n-1);
}
