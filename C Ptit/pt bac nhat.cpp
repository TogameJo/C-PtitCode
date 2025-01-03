#include <stdio.h>
int main()
{
	float a,b;
	scanf("%f %f",&a,&b);
	if(a == 0 && b != 0){
		printf("vo nghiem");
	} else if (a != 0 && b != 0)
	{
		printf("%.2f",(float)-b/a);
	} else 
	{
		printf("Vo so nghiem");
	} return 0;
}
