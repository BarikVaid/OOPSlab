#include <stdio.h>

class Parcel {
public:
    char id[20];
    int delivered;

    void input(){
        printf("Parcel ID: ");
        scanf("%s", id);
        delivered = 0;
    }
    void deliver(){ delivered=1; }
    void show(){
        printf("%s - %s\n", id, delivered?"Delivered":"In Transit");
    }
};

int main(){
    Parcel p[10];
    int n,i;
    printf("How many parcels? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) p[i].input();
    p[0].deliver();

    printf("\nParcels:\n");
    for(i=0;i<n;i++) p[i].show();
    return 0;
}