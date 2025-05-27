#include <stdio.h>
int main() {
    int n,rev=0,t;
    scanf("%d",&n);
    t=n;
    while(n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    if(t==rev){
        printf("TRUE");
    }
    else{
        printf("FALSE");
    }
   
    return 0;
}