#include <stdio.h>

int print_sign(int n) {
    if (n > 0) {
        printf("+");
        return 1;
    } else if (n < 0) {
        printf("-");
        return -1;
    } else {
        printf("0");
        return 0;
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int sign = print_sign(number);
    printf("\n");

    return 0;
}
