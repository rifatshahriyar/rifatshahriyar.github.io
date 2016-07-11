#include<stdio.h>

int main() {
    int i, n;
    printf("Enter n: ");
    scanf("%d", &n);
    for ( i = 2; i < n; i++) {
        if ( n % i == 0) {
            printf("Not Prime\n");
        }
    }
    return 0;
}