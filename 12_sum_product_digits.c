#include <stdio.h>
int main() {
    int n, sum=0, prod=1, rem;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0) {
        rem=n%10;
        sum+=rem;
        prod*=rem;
        n/=10;
    }
    printf("Sum=%d, Product=%d", sum, prod);
    return 0;
}