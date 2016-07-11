#include<stdio.h>

int main() {
    int i, n, d, sum, m;
    sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    m = n;
    while( n != 0) {
        d = n % 10;
        sum = sum + d*d*d;
        n = n / 10;
    }
    if ( sum == m ) {
        printf("Armstrong Number\n");
    }
    else {
        printf("Not Armstrong Number\n");
    }
    return 0;
}