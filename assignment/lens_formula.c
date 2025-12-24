// 17/09/25

/*Lens Formula (1/f = 1/v – 1/u)
Use:
Calculates image distance and magnification.
Basis of cameras, telescopes, microscopes, and eyeglasses.
In real life → opticians use this formula to make lenses for people with vision problems; engineers use it for designing cameras.
*/

#include <stdio.h>

int main() {
    double f, u, v;
    printf("Enter focal length f: ");
    scanf("%lf", &f);
    printf("Enter object distance u: ");
    scanf("%lf", &u);

    v = (f*u)/(u-f);
    printf("Image distance v = %.2lf\n", v);

    double m = v/u;
    printf("Magnification = %.2lf\n", m);
    return 0;
}
