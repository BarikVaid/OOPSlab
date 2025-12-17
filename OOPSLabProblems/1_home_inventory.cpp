#include <stdio.h>

class Item {
public:
    char name[30];
    int qty;
    char expiry[15];

    void input() {
        printf("Item name: ");
        scanf("%s", name);
        printf("Quantity: ");
        scanf("%d", &qty);
        printf("Expiry date: ");
        scanf("%s", expiry);
    }
    void show() {
        printf("%s | %d | %s\n", name, qty, expiry);
    }
};

int main() {
    Item list[10];
    int n,i;
    printf("How many items? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) list[i].input();

    printf("\nInventory:\n");
    for(i=0;i<n;i++) list[i].show();
    return 0;
}