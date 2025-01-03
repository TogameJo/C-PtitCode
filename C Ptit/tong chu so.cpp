#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    // tính d? dài c?a n
    int length = (int) log10(n) + 1;

    int sum = 0;
    for (int i = 0; i < length; i++) {
        int digit = n / (int) pow(10, i) % 10; // l?y ch? s? ? v? trí th? i
        sum += digit; // c?ng ch? s? này vào t?ng
    }

    printf("Tong cac chu so cua %d la: %d\n", n, sum);

    return 0;
}

