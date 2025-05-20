#include <stdio.h>
int fact(int n){
    int fact=1;
    int i,result;
    for(i=1;i<=n;i++){
    fact*=i;
}
return fact;
}
int main(){
     printf("The factorial is:%d",fact(6));
        return 0;
}
