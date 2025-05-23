#include <stdio.h>
int bin(int n){
    if(n==0)
    return 0;
    bin(n/2);
    printf("%d",n%2);
}
int main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d",&num);
    bin(num);
    return 0;
}
