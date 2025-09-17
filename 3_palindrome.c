#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str), i, flag = 1;
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Palindrome");
    else printf("Not Palindrome");
    return 0;
}