#include <stdio.h>
int main() {
    int a, b;
    char op;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Enter operator (+, -, *, /, %): ");
    scanf(" %c", &op);
    (op == '+') ? printf("%d", a + b) :
    (op == '-') ? printf("%d", a - b) :
    (op == '*') ? printf("%d", a * b) :
    (op == '/' && b != 0) ? printf("%d", a / b) :
    (op == '%' && b != 0) ? printf("%d", a % b) :
    printf("Error: invalid operator or divide by zero");
    return 0;
}