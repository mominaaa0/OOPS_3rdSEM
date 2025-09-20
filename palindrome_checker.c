// 11/09/25
#include <stdio.h>
int isPalindrome(int num) {
    int original = num;
    int reversed = 0, digit;
    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return (original == reversed);
}
int main() {
    int num, start, end;
    printf("Enter a number to check if it is palindrome: ");
    scanf("%d", &num);
    if (isPalindrome(num))
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    printf("\nEnter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);
    printf("Palindrome numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPalindrome(i))
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
