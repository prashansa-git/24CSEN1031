#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num > 0) {
        digit = num % 10;
        sum += digit;
        num /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    return 0;
}

Enter a positive integer: 77
Sum of digits: 14
