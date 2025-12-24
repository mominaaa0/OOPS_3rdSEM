// 17/09/25

/*Bernoulli’s Equation (Fluid Mechanics)
Use:
Explains pressure, velocity, and height relationships in fluids.
Used in airplane wing lift, water supply pipes, hydropower plants, and blood flow in arteries.
In real life → explains why planes fly, why a leaking tank sprays water, or how dams generate electricity.
*/

#include <stdio.h>

int main() {
    double P1, v1, h1, P2, v2, h2, rho = 1000, g = 9.8;
    printf("Enter P1 v1 h1: ");
    scanf("%lf %lf %lf", &P1, &v1, &h1);
    printf("Enter v2 h2: ");
    scanf("%lf %lf", &v2, &h2);

    P2 = P1 + 0.5*rho*(v1*v1 - v2*v2) + rho*g*(h1-h2);
    printf("Pressure P2 = %.2lf Pa\n", P2);
    return 0;
}
