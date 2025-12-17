#include <stdio.h>
#include <string.h>

class Ingredient {
public:
    char name[30];
    void input(){
        printf("Ingredient name: ");
        scanf("%s", name);
    }
};

int main(){
    Ingredient stock[10];
    int n,i;
    printf("How many ingredients in pantry? ");
    scanf("%d",&n);
    for(i=0;i<n;i++) stock[i].input();

    char needed[30];
    printf("\nCheck ingredient: ");
    scanf("%s", needed);

    int found=0;
    for(i=0;i<n;i++)
        if(strcmp(stock[i].name,needed)==0) found=1;

    printf(found? "Available\n":"Missing\n");
    return 0;
}