#include <stdio.h>
int count(long long n){
    int count=0;
    if(n==0){
        return 1;
    }
    if(n<0){
        n=-n;
    }
    while(n!=0){
        n=n/10;
        count++;
    }
    return count;
}
int main() {
    long long num;
    scanf("%lld",&num);
    printf("%lld",count(num));
  
    return 0;
}