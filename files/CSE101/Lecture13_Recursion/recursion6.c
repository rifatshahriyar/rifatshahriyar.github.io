#include<stdio.h>
#include<string.h>

void reverse(char str[], int i)
{
   if (str[i]) {
       reverse(str, i + 1);
       printf("%c", str[i]);

   }
}

int main()
{
   char s[80];
   printf("Enter a string: ");
   gets(s);
   printf("Reverse: ");
   reverse(s, 0);
   printf("\n");
   return 0;
}