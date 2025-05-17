#include <stdio.h>
int main() {
   char days;
   printf("Enter Week day number:");
   scanf("%c",&days);
   switch(days){
       case '1':
       printf("%c is Monday",days);
       break;
       case '2':
       printf("%c is Tuesday",days);
       break;
       case '3':
       printf("%c is Wednesday",days);
       break;
       case '4':
       printf("%c is Thursday",days);
       break;
       case '5':
       printf("%c is Friday",days);
       break;
       case '6':
       printf("%c is Saturday",days);
       break;
       case '7':
       printf("%c is Sunday",days);
       break;
       default:
       printf("Invalid input");
   }
    return 0;
}