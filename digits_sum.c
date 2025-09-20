// 11/09/25
#include <stdio.h>
int main() {
    int num, digit;
    int sum = 0, product = 1, temp;
    printf("Enter an integer: ");
    scanf("%d", &num);
    temp = (num < 0) ? -num : num;
    while (temp > 0) {
        digit = temp % 10;     
        sum += digit;           
        product *= digit;        
        temp /= 10;             
    }
    printf("Sum of digits = %d\n", sum);
    printf("Product of digits = %d\n", product);
    return 0;
}
