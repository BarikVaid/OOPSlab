#include <stdio.h>
#include <string.h>

class Bus {
public:
    char route[10];
    char time[10];

    void input(){
        printf("Route: "); scanf("%s", route);
        printf("Time: "); scanf("%s", time);
    }
    void show(){ printf("%s at %s\n", route, time); }
};

int main(){
    Bus b[10];
    int n,i;
    char find[10];

    printf("How many buses? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) b[i].input();

    printf("\nEnter route to search: ");
    scanf("%s", find);

    for(i=0;i<n;i++)
        if(strcmp(b[i].route,find)==0) b[i].show();
    return 0;
}