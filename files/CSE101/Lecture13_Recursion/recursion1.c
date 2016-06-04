#include<stdio.h>

int sum(int n) {
    if (n <= 1) return 1;
    return n + sum (n-1);
}

int main() {
    int N;
    printf("Enter a number: ");
    scanf("%d", &N);
    printf("Sum: %d\n", sum(N));
    return 0;
}