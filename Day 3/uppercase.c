#include <stdio.h>
int main() {
   char ch;
   printf("Enter a character:");
   scanf("%c",&ch);
   if(ch>='A' && ch<='Z')
   printf("%c is in uppercase",ch);
   else
   printf("%c is in lowercase",ch);
    return 0;
}