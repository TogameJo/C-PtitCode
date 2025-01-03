#include <stdio.h>

int main()
{
    int a, b, n;
    scanf("%d", &n);
    if (n <= 999999999)
    {
    a = n%10;
    while (n >= 10)
    {
        n = n / 10;
        b = n;
    }

    printf("%d %d", b, a);
}
    return 0;
}

