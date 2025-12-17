#include <stdio.h>

class Task {
public:
    char name[30];
    int done; // 0 or 1

    void input(){
        printf("Task name: "); scanf("%s", name);
        done = 0;
    }
    void mark(){ done = 1; }
    void show(){
        printf("%s - %s\n", name, done?"Done":"Pending");
    }
};

int main(){
    Task t[10];
    int n,i;
    printf("How many tasks? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) t[i].input();
    t[0].mark();

    printf("\nTasks:\n");
    for(i=0;i<n;i++) t[i].show();
    return 0;
}