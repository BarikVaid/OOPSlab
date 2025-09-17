#include <stdio.h>
int main() {
    float amount, discount;
    printf("Enter purchase amount: ");
    scanf("%f", &amount);
    discount = (amount < 100) ? 0 :
               (amount <= 500) ? 0.10*amount :
               (amount <= 1000) ? 0.15*amount : 0.20*amount;
    printf("Total after discount = %.2f", amount - discount);
    return 0;
}