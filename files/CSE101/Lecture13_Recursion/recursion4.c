#include<stdio.h>

int digitsum(int n) {
    if ( n ==0 ) return 0;
    return n%10 + digitsum(n/10);
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Digitsum: %d\n", digitsum(N));
    return 0;
}