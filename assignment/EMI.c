// 17/09/25

/*EMI (Equated Monthly Installment) Calculator
Use:
Used in banks, finance apps, and personal budgeting.
Helps calculate monthly payments for loans (education loan, car loan, home loan).
🔹 Formula
EMI=P.R.(1+R)^N/((1+R)^N−1)
Where:
P = Principal loan amount
R = Monthly interest rate (annual rate ÷ 12 ÷ 100)
N = Number of months
*/

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, emi;
    int years, months, n;
    float monthlyRate;

    printf("Enter loan amount (Principal): ");
    scanf("%f", &principal);
    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);
    printf("Enter loan period in years: ");
    scanf("%d", &years);

    months = years * 12;
    monthlyRate = rate / (12 * 100);

    emi = (principal * monthlyRate * pow(1 + monthlyRate, months)) /
          (pow(1 + monthlyRate, months) - 1);

    printf("Your EMI = %.2f per month for %d months\n", emi, months);

    return 0;
}
