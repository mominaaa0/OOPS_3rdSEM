#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input
    printf("Enter a single character: ");
    scanf("%c", &ch);

    // Switch statement for classification
    switch (ch) {
        // Lowercase vowels
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("%c is a lowercase vowel.\n", ch);
            break;

        // Uppercase vowels
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("%c is an uppercase vowel.\n", ch);
            break;

        // Digits
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("%c is a digit.\n", ch);
            break;

        // Default: could be consonant or special character
        default:
            if (isalpha(ch))
                printf("%c is a consonant.\n", ch);
            else
                printf("%c is a special character.\n", ch);
    }

    return 0;
}
