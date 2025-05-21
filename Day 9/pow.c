#include <stdio.h>
int Power(int a,int b){
   int result=1;
   for(int i=1;i<=b;i++){
       result=result*a;
   }
   return result;
}
int main(){
    int a=2,b=4;
    printf("Power value is:%d\n",Power(a,b));
    return 0;
}
