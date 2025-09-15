// 11/09/25
#include <stdio.h>
int main() {
    int a, b;
    char op;
    int result;
    float divResult;
    printf("Enter two operands: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);
    (op == '+') ? printf("Result: %d\n", a + b) :
    (op == '-') ? printf("Result: %d\n", a - b) :
    (op == '*') ? printf("Result: %d\n", a * b) :
    (op == '/') ? ((b != 0) ? printf("Result: %.2f\n", (float)a / b) 
                             : printf("Error: Division by zero!\n")) :
    (op == '%') ? ((b != 0) ? printf("Result: %d\n", a % b) 
                             : printf("Error: Modulo by zero!\n")) :
                  printf("Error: Invalid operator!\n");
    return 0;
}
