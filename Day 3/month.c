#include <stdio.h>
int main() {
   char m;
   printf("Enter Month:");
   scanf("%c",&m);
   switch(m){
       case '1':
       case '3':
       case '5':
       case '7':
       case '8':
       case 'O':
       case 'D':
       printf("Month %c has 31 days",m);
       break;
       case '4':
       case '6':
       case '9':
       case 'N':
       printf("Month %c has 30 days",m);
       break;
       default:
       printf("Month %c has 28 days",m);
   }
    return 0;
}