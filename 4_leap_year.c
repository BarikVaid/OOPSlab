#include <stdio.h>
int main() {
    int year, i, count = 0;
    printf("Enter a year: ");
    scanf("%d", &year);
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("%d is a Leap Year", year);
    else {
        printf("%d is NOT a Leap Year\nNext 5 Leap Years: ", year);
        for(i = year+1; count < 5; i++) {
            if((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0)) {
                printf("%d ", i);
                count++;
            }
        }
    }
    return 0;
}