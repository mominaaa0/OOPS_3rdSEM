// 11/09/25
#include <stdio.h>
#include <math.h> 
int main() {
    float real1, imag1, real2, imag2;
    float mag1, mag2;
    printf("Enter real and imaginary part of first complex number: ");
    scanf("%f %f", &real1, &imag1);
    printf("Enter real and imaginary part of second complex number: ");
    scanf("%f %f", &real2, &imag2);
    mag1 = sqrt(real1 * real1 + imag1 * imag1);
    mag2 = sqrt(real2 * real2 + imag2 * imag2);
    printf("the value of magnitude of first complex number is %f\n",mag1);
    printf("the value of magnitude of second complex number is %f\n",mag2);
    if (mag1 > mag2) {
        printf("First complex number has higher magnitude.\n");
    } else if (mag2 > mag1) {
        printf("Second complex number has higher magnitude.\n");
    } else {
        printf("Equal\n");
    }
    return 0;
}