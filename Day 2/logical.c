#include <stdio.h>
int main() {
   int age,license;
   printf("Enter your age:");
   scanf("%d",&age);
   printf("License value:");
   scanf("%d",&license);
   if(age>=18 && license==1)
   printf("You are Eligible");
   else
   printf("You are Not Eligible");
   return 0;
}