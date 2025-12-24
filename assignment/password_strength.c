// 17/09/25

// Enter password → program checks for uppercase, digit, special char, and length.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char password[100];
    int length, hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    printf("Enter your password: ");
    scanf("%s", password);
    length = strlen(password);
    for (int i = 0; i < length; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }
    if (length < 6) {
        printf("Password is Weak  (too short)\n");
    }
    else if (hasUpper && hasLower && hasDigit && hasSpecial && length >= 8) {
        printf("Password is Strong \n");
    }
    else if ((hasUpper || hasLower) && hasDigit) {
        printf("Password is Moderate \n");
    }
    else {
        printf("Password is Weak \n");
    }
    return 0;
}