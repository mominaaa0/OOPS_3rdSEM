// 17/09/25

/*Relativity (Time Dilation)
Use:
Calculates how time slows down when moving close to the speed of light.
Used in GPS satellites, astronomy, and space travel.
In real life → GPS systems correct their clocks using relativity so that your phone maps are accurate to a few meters. 
Without relativity, Google Maps would be wrong by kilometers every day!
*/

#include <stdio.h>
#include <math.h>

int main() {
    double t0, v, c = 3e8, t;
    printf("Enter proper time (seconds): ");
    scanf("%lf", &t0);
    printf("Enter velocity (m/s): ");
    scanf("%lf", &v);

    t = t0 / sqrt(1 - (v*v)/(c*c));
    printf("Dilated time = %.10lf s\n", t);
    return 0;
}
