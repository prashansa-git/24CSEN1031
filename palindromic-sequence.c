#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        reversedNum = reversedNum * 10 + (num % 10);
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isPalindrome(number)) {
        printf("%d is a palindrome\n", number);
    } else {
        printf("%d is not a palindrome\n", number);
    }

    return 0;
}

output
Enter a number: 7
7 is a palindrome
