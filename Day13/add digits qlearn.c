#include <stdio.h>
int main() {
    int n,i,sum1=0,sum2=0;
    scanf("%d",&n);
    while(n!=0){
        sum1=sum1+n%10;
        n/=10;
    }
    while(sum1!=0){
        sum2=sum2+sum1%10;
        sum1/=10;
    }
    printf("%d",sum2);
    return 0;
}