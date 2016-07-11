#include<stdio.h>

int main() {
    int i, n, c;
    printf("Enter n: ");
    scanf("%d", &n);
    c = 0;
    for ( i = 2; i < n; i++) {
        if ( n % i == 0) {
            c++;
            break;
        }
    }
    if ( c == 0) {
        printf("Prime\n");
    }
    else {
        printf("Not Prime\n");
    }
    return 0;
}