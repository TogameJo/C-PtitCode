#include<stdio.h>

int main() {
    int rows, cols;
    scanf("%d%d", &rows, &cols);
    int i, j, k;
    for (i = 1; i <= rows; i++) {
        for (j = i; j <= cols; j++) {
            printf("%d", j);
        }
        if (i > cols) {
            printf("%d", i);
            for (j = cols - 1; j > 0; j--) {
                printf("%d", j);
            }
        } else {
            for (j = i - 1; j > 0; j--) {
                printf("%d", j);
            }
        }
        printf("\n");
    }
    return 0;
}

