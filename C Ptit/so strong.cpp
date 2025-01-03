#include <stdio.h>

int factorial(int n)
{
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int isStrongNumber(int n)
{
    int temp = n;
    int sum = 0;

    while (temp != 0)
    {
        int digit = temp % 10;
        sum += factorial(digit);
        temp /= 10;
    }

    return (sum == n);
}

void printStrongNumbers(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isStrongNumber(i))
        {
            printf("%d ", i);
        }
    }

    printf("\n");
}

int main()
{
    int start, end;

    scanf("%d %d", &start,&end);
    printStrongNumbers(start, end);

    return 0;
}

