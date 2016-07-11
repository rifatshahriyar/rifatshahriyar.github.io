#include<stdio.h>

int main() {
    int a, b, c, i, n;
    a = 0;
    b = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for ( i = 2; i<=n; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d\n", c); 
    return 0;
}