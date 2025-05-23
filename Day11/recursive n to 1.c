#include <stdio.h>
int reverse(int n){
if(n==0)
 return 1;
 printf("%d\n",n);
 return reverse(n-1);
 }
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Reverse number is:%d",reverse(num));
    return 0;
}



