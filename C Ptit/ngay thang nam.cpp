#include <stdio.h>
#include <stdlib.h>
int main() {
    int month, year, num_days;
    printf("Nhap vao thang: ");
    scanf("%d", &month);
    printf("Nhap vao nam: ");
    scanf("%d", &year);

    if (month < 1 || month > 12) {
        printf("Thang khong hop le!\n");
        return 0;
    }

    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            num_days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                num_days = 29;
            } else {
                num_days = 28;
            }
            break;
        default:
            num_days = 31;
            break;
    }

    printf("Thang %d nam %d co %d ngay.\n", month, year, num_days);
    system("pause");
    return 0;
}

