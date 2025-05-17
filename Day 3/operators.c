#include <stdio.h>
int main() {
   char op;
   int a=6,b=8;
   printf("Enter Operator:");
   scanf("%c",&op);
   switch(op){
       case '+':
       printf("Result=%d\n",a+b);
       break;
       case '-':
       printf("Result=%d\n",a-b);
       break;
       case '*':
       printf("Result=%d\n",a*b);
       break;
       case '/':
       printf("Result=%d\n",a/b);
       break;
       default:
       printf("No Operation Performed");
   }
    return 0;
}