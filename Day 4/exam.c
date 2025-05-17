#include <stdio.h>
int main(){
  int i,n=0;
  for(i=2;i<=50;i++){
      if(i%2==0){
          n+=i;
      }
  }
  printf("The sum is:%d\n",n);
    return 0;
}