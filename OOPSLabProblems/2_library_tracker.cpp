#include <stdio.h>

class Book {
public:
    char title[30];
    char author[30];
    int read; // 0 or 1

    void input() {
        printf("Title: "); scanf("%s", title);
        printf("Author: "); scanf("%s", author);
        read = 0;
    }
    void markRead() { read = 1; }
    void show() {
        printf("%s by %s [%s]\n", title, author, read ? "Read" : "Unread");
    }
};

int main() {
    Book b[10];
    int n,i;
    printf("How many books? ");
    scanf("%d",&n);

    for(i=0;i<n;i++) b[i].input();
    b[0].markRead();

    printf("\nLibrary:\n");
    for(i=0;i<n;i++) b[i].show();
    return 0;
}