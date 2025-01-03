#include <stdio.h>
long long a[100];
long long fibo(int n)
{
    if(n<=2) //n =1 or n=2 printf("1") vif so fn thu 1 va 2 la 1
        return 1;
        if (a[n])
        return a[n];
    return a[n] = fibo(n - 1) + fibo(n - 2);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("%lld\n", fibo(n));
    }
}
