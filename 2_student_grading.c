#include <stdio.h>
int main() {
    int marks[5], i, total = 0, fails = 0;
    float perc;
    printf("Enter marks of 5 subjects: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        total += marks[i];
        if(marks[i] < 40) fails++;
    }
    perc = total / 5.0;
    if(fails > 1) printf("Repeat Year");
    else {
        if(perc >= 90) printf("Grade A");
        else if(perc >= 75) printf("Grade B");
        else if(perc >= 60) printf("Grade C");
        else if(perc >= 40) printf("Grade D");
        else printf("Grade F");
    }
    return 0;
}