#include <stdio.h>
int main() {
    int marks[5], i, total = 0;
    float avg, perc;
    printf("Enter marks of 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    avg = total / 5.0;
    perc = (total / 500.0) * 100;
    printf("Total = %d\nAverage = %.2f\nPercentage = %.2f%%\n", total, avg, perc);
    if(perc >= 90) printf("Grade = A\n");
    else if(perc >= 75) printf("Grade = B\n");
    else if(perc >= 50) printf("Grade = C\n");
    else printf("Grade = F\n");
    return 0;
}