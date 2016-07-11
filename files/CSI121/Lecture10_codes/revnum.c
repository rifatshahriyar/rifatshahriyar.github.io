#include<stdio.h>

int main() {
    int n, i, d, m, rev;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    rev = 0;
    while(n != 0) {
        d = n % 10;
        rev = rev * 10 + d; 
        n = n / 10;
    }
    printf("Reverse of %d: %d\n", m, rev);
    if ( m == rev ) {
        printf("Palindrome\n");
    }   
    else {
        printf("Not Palindrome\n");
    }
    return 0;
}
