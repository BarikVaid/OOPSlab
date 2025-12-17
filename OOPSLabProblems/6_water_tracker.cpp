#include <stdio.h>

class Entry {
public:
    char date[15];
    float liters;

    void input(){
        printf("Date: "); scanf("%s", date);
        printf("Liters: "); scanf("%f", &liters);
    }
    void show(){
        printf("%s - %.2f L\n", date, liters);
    }
};

int main(){
    Entry e[10];
    int n,i;
    float sum=0;
    printf("How many days? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) e[i].input();

    printf("\nWater Usage:\n");
    for(i=0;i<n;i++){ e[i].show(); sum+=e[i].liters; }
    printf("Total = %.2f L\n", sum);
    return 0;
}