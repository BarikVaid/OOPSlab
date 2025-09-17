#include <stdio.h>
int main() {
    int d, m, y, daysInMonth;
    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);
    if(m < 1 || m > 12 || d < 1 || y < 1) {
        printf("Invalid Date");
        return 0;
    }
    if(m==2) {
        if((y%400==0)||(y%4==0&&y%100!=0)) daysInMonth=29;
        else daysInMonth=28;
    }
    else if(m==4||m==6||m==9||m==11) daysInMonth=30;
    else daysInMonth=31;
    if(d > daysInMonth) {
        printf("Invalid Date");
        return 0;
    }
    printf("Valid Date\n");
    int q=d, mm=m, k=y%100, j=y/100;
    if(mm==1 || mm==2) { mm+=12; y--; k=y%100; j=y/100; }
    int h=(q + (13*(mm+1))/5 + k + k/4 + j/4 + 5*j) % 7;
    switch(h) {
        case 0: printf("Saturday"); break;
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        case 4: printf("Wednesday"); break;
        case 5: printf("Thursday"); break;
        case 6: printf("Friday"); break;
    }
    return 0;
}