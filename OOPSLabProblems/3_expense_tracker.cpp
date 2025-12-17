#include <stdio.h>

class Expense {
public:
    char desc[30];
    float amt;

    void input(){
        printf("Description: "); scanf("%s", desc);
        printf("Amount: "); scanf("%f",&amt);
    }
    void show(){
        printf("%s - Rs. %.2f\n", desc, amt);
    }
};

int main(){
    Expense e[10];
    int n,i;
    float total=0;
    printf("How many expenses? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) e[i].input();

    printf("\nExpenses:\n");
    for(i=0;i<n;i++){ e[i].show(); total+=e[i].amt; }
    printf("Total = Rs. %.2f\n", total);
    return 0;
}