#include<stdio.h>

int main() {
    int i, n, sum;
    sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for ( i = 1; i < n; i++) {
        if ( n % i == 0) {
            sum = sum + i;
        }
    }
    if ( sum == n ) {
        printf("Perfect Number\n");
    }
    else {
        printf("Not Perfect Number\n");
    }
    return 0;
}