#include <stdio.h>
#include <math.h>

class Calculator {
public:
    double add(double a,double b){ return a+b; }
    double sub(double a,double b){ return a-b; }
    double mul(double a,double b){ return a*b; }
    double divi(double a,double b){ return b!=0?a/b:0; }
    double power(double a,double b){ return pow(a,b); }
    double root(double a){ return sqrt(a); }
};

int main(){
    Calculator c;
    double x=4,y=2;
    printf("Add: %.2f\n", c.add(x,y));
    printf("Power: %.2f\n", c.power(x,y));
    printf("Root of %.2f = %.2f\n", x, c.root(x));
    return 0;
}