#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, d;
    printf("Enter coefficients a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    (a == 0) ? printf("Invalid equation (a cannot be 0)") : (
        d = b*b - 4*a*c,
        (d > 0) ? printf("Real and distinct roots") :
        (d == 0) ? printf("Real and equal roots") :
        printf("Imaginary roots")
    );
    return 0;
}