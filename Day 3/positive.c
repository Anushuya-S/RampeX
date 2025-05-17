#include <stdio.h>
int main() {
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);
    if(num>0)
    printf("%d is positive");
    else if(num<0)
    printf("-%d is negative");
    else 
    printf("%d is equal to zero");
    return 0;
}