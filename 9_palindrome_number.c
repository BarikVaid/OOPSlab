#include <stdio.h>
int main() {
    int n, temp, rev=0, rem, start, end, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp=n;
    while(temp!=0) {
        rem=temp%10;
        rev=rev*10+rem;
        temp/=10;
    }
    if(n==rev) printf("Palindrome\n");
    else printf("Not Palindrome\n");
    printf("Enter range (start end): ");
    scanf("%d %d", &start, &end);
    for(i=start; i<=end; i++) {
        int x=i, r=0;
        while(x!=0) {
            rem=x%10;
            r=r*10+rem;
            x/=10;
        }
        if(i==r) printf("%d ", i);
    }
    return 0;
}