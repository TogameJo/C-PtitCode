#include <stdio.h>

int main() {
    int n, k;

    scanf("%d %d", &n, &k);

    int i = 2;
    int count = 0;

    while (i <= n) {
        count += n / i;
        i *= 2;
    }

    if (count >= k) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

