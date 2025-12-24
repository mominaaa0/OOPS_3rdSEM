// 17/09/25

/*Ohm’s Law & Circuit Solver
Use:
Calculates current given voltage and resistance.
Fundamental for electrical engineering, circuit design, and troubleshooting electronics.
In real life → every electrician uses Ohm’s law when designing home wiring or fixing short circuits
*/

#include <stdio.h>

int main() {
    double V, R, I;
    printf("Enter Voltage (V): ");
    scanf("%lf", &V);
    printf("Enter Resistance (Ohms): ");
    scanf("%lf", &R);

    I = V/R;
    printf("Current = %.2lf A\n", I);
    return 0;
}
