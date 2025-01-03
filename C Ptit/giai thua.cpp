#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int tich = 1;
    for (int i = 1; i <= n;i++)
    {
        tich = tich * i;
    } printf("%d",tich);
    return 0;
}
