#include <stdio.h>
#include <math.h>
    int a[100];
    int b[100];
    int kq1[100];
    int kq2[100];
int main()
{
	long long m;
	scanf("%lld",&m);
	int check = m;
	while(m > 9)
	{
		int c = 0;
		while (m != 0)
	{
		int temp = m%10;
		b[c] = temp;
		c++;
		m /= 10;
	}
	int n = 0;
	for (int i = c-1;i >= 0;i--)
	{
		a[n] = b[i];
		n++;
	}
	    int sum1 = 0;  
		int x1 = 0;
	    for (int i = 0; i < n/2;i++)
	    {
	    	kq1[x1] = a[i];
	    	x1++;
		}
		for (int i = 0;i < x1;i++)
		{
			sum1 += kq1[i]*pow(10,x1-i-1);
		}
		int sum2 = 0;
		int x2 = 0;
		for (int i = n/2;i < n;i++)
		{
			kq2[x2] = a[i];
			x2++;
		}
		for (int i = 0;i < x2;i++)
		{
			sum2 += kq2[i]*pow(10,x2-i-1);
		}
		int sum = sum1 + sum2;
		printf("%lld\n",sum);
		m = sum;
	}
	return 0;
	}
	


