#include <stdio.h>
int CountNumbers(long long num){
    int a=1;
    if(num==0){
        return 0;
    }
    else{
        return a+CountNumbers(num/10);
    }
}
int main(){
    long long n;
    printf("Enter a number:");
    scanf("%lld",&n);
    printf("Number of digits:%d\n",CountNumbers(n));
    return 0;
}



