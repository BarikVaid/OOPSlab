#include <stdio.h>
int main() {
    int choice;
    float balance=0, amt;
    do {
        printf("\n1.Deposit\n2.Withdraw\n3.Balance\n4.Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1: printf("Enter amount to deposit: ");
                    scanf("%f",&amt);
                    balance+=amt; break;
            case 2: printf("Enter amount to withdraw: ");
                    scanf("%f",&amt);
                    if(amt>balance) printf("Insufficient Balance");
                    else balance-=amt;
                    break;
            case 3: printf("Balance=%.2f",balance); break;
            case 4: printf("Exiting..."); break;
            default: printf("Invalid choice");
        }
    } while(choice!=4);
    return 0;
}