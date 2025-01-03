#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);

        int prev_digit = n % 10;
        n /= 10;

        int is_non_decreasing = 1;

        while (n > 0) {
            int curr_digit = n % 10;
            n /= 10;
            if (curr_digit > prev_digit) {
                is_non_decreasing = 0;
                break;
            }
            prev_digit = curr_digit;
        }

        if (is_non_decreasing) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

