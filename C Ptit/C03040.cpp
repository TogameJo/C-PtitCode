#include <stdio.h>
#include <math.h>
int check1(int n)
{
	int suma = 0;
	int sumb = 0;
	int sum = 0;
	int temp = n;
	for (int i = 2;i<=sqrt(temp);i++)
	{
		if (temp % i == 0)
		{
			if (i >= 1 && i <= 9)
			{
				suma += i;
			}
			else
			{
				int j = i;
				while (j > 0)
				{
					sumb += j%10;
					j /= 10;
				}
			}
			temp /= i;
		}
		else 
		{
			i++;
		}
	}
	sum = suma + sumb;
     int sum2= 0;
     while (n > 0)
     {
     	int k = n%10;
     	sum2 += k;
        n /= 10;
     }
    if (sum == sum2)
    {
    	return 1;
    }
    return 0;
}
int main()
{
	int n;
	scanf("%d",&n);
	if (check1(n))
	{
        printf("YES\n"); 
	}
	else
	{
		printf("NO");
	}
	return 0;
}
