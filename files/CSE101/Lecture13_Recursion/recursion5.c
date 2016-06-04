#include<stdio.h>

int gcd(int m, int n) {
    if ( n ==0 ) return m;
    return gcd(n, m%n);
}

int main() {
    int M, N;
    printf("Enter two numbers: ");
    scanf("%d%d", &M, &N);
    printf("GCD: %d\n", gcd(M,N));
    return 0;
}