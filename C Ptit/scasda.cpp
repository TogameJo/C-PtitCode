#include <stdio.h>
int main(){
	long long a,b;
	long long bscnn = (a*b);
	scanf("%d %d",&a,&b);
	while (a != b)
	{
		if (a > b)
		{
			a = a - b;
		} else 
		{
		b -= a;
	}
}
	printf("%d\n%d",a,bscnn/a);
}
