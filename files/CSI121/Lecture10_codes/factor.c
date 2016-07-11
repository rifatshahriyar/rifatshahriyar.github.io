#include<stdio.h>

int main() {
    int i, n, sum, cnt;
    sum = 0;
    cnt = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("The factors are: ");
    for ( i = 1; i <= n; i++) {
        if ( n % i == 0) {
            printf("%d ", i);
            sum = sum + i;
            cnt++;
        }
    }
    printf("\n");
    printf("Total factors: %d\n", cnt);
    printf("Sum of factors: %d\n", sum);    
    return 0;
}