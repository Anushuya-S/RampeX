#include <stdio.h>
int main(){
    int arr[5]={1,2,5,6,7};
    int i,sum=0;
   for(i=0;i<=4;i++){
       sum+=arr[i];
   }
    printf("Sum of digits = %d\n",sum);
    float Avg=sum/5;
     printf("Avg of digits = %.2f\n",Avg);
    return 0;
}
