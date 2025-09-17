#include <stdio.h>
#include <math.h>
int main() {
    float r1, i1, r2, i2;
    printf("Enter first complex number (real imag): ");
    scanf("%f %f", &r1, &i1);
    printf("Enter second complex number (real imag): ");
    scanf("%f %f", &r2, &i2);
    float mag1 = sqrt(r1*r1 + i1*i1);
    float mag2 = sqrt(r2*r2 + i2*i2);
    if(mag1 > mag2) printf("First complex number is larger");
    else if(mag2 > mag1) printf("Second complex number is larger");
    else printf("Equal");
    return 0;
}