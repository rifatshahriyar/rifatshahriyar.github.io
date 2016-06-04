#include<stdio.h>
#include<string.h>

int sum = 0;

int reverseint(int a) {
    if (a) {
        sum = sum*10 + a%10;        
        //printf("%d", a%10);
        reverseint(a/10);
    }
    return sum;
}

int reverseint2(int a, int r) {
    if(a == 0) return r; 
    return reverseint2( a/10, r * 10 + a%10);
}

int main()
{
   int a;
   printf("Enter a number: ");
   scanf("%d", &a);
   printf("Reverse: %d\n", reverseint2(a, 0));
   return 0;
}