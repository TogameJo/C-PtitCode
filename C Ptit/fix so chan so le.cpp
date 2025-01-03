#include <stdio.h>
#include <math.h>

int main()
{
    int a, n, m;
    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &n);
        int demchan = 0;
        int demle = 0;
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                demchan++;
            }
            else
            {
                demle++;
            }
            n /= 10;
        }
        printf("%d %d\n", demle, demchan);
    }
    return 0;
}

