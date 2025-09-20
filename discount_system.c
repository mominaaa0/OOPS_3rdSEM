// 11/09/25
#include <stdio.h>
int main() {
    float purchase, discount, finalPrice;
    printf("Enter purchase amount (Rs): ");
    scanf("%f", &purchase);
    discount = (purchase < 100) ? 0 :
               (purchase <= 500) ? 0.10 * purchase :
               (purchase <= 1000) ? 0.15 * purchase :
               0.20 * purchase;
    finalPrice = purchase - discount;
    printf("Purchase Amount: Rs %.2f\n", purchase);
    printf("Discount Applied: Rs %.2f\n", discount);
    printf("Final Price to Pay: Rs %.2f\n", finalPrice);
    return 0;
}