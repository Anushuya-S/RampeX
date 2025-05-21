#include <stdio.h>
int Digits(int n){
    int i,sum=0;
    printf("Divisible numbers are:");
    for (i=1;i<=n;i++){
        if(n%i==0){
            printf("%d ",i);
          sum+=i;  
        }
        
  }
  return sum;
}
int main(){
    int num;
    printf("Enter a number:");
   scanf("%d",&num);
    printf("\nSum of digits:%d\n",Digits(num));
    return 0;
}
